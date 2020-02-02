#include "Z80InstructionEncoder.h"
#include <string>
#include <regex>
#include <stdexcept>
#include <sstream>

#define CSV_IO_NO_THREAD 1

#include "csv.h"

using namespace std;
using namespace io;
using namespace io::detail;

static std::regex RE_IMMEDIATE_DATA_PATTERN("[a-zA-Z]+\\s+.*(n|N).*"); // NOLINT

static string CSV_STRING =  // NOLINT
    R"CSV(ADC A',A'         |0x8f
ADC A,A           |0x8f
ADC A',B'         |0x88
ADC A',B          |0x88
ADC A,B'          |0x88
ADC A,B           |0x88
ADC A',C'         |0x89
ADC A',C          |0x89
ADC A,C'          |0x89
ADC A,C           |0x89
ADC A',D'         |0x8a
ADC A',D          |0x8a
ADC A,D'          |0x8a
ADC A,D           |0x8a
ADC A',E'         |0x8b
ADC A',E          |0x8b
ADC A,E'          |0x8b
ADC A,E           |0x8b
ADC A',H'         |0x8c
ADC A',H          |0x8c
ADC A,H'          |0x8c
ADC A,H           |0x8c
ADC A',(HL')      |0x8e
ADC A',(HL)       |0x8e
ADC A,(HL')       |0x8e
ADC A,(HL)        |0x8e
ADC A',IXH        |0x8cdd
ADC A',HX         |0x8cdd
ADC A,IXH         |0x8cdd
ADC A,HX          |0x8cdd
ADC A',IXL        |0x8ddd
ADC A',LX         |0x8ddd
ADC A,IXL         |0x8ddd
ADC A,LX          |0x8ddd
ADC A',(IX+n)     |0x8edd
ADC A,(IX+n)      |0x8edd
ADC A',IYH        |0x8cfd
ADC A',HY         |0x8cfd
ADC A,IYH         |0x8cfd
ADC A,HY          |0x8cfd
ADC A',IYL        |0x8dfd
ADC A',LY         |0x8dfd
ADC A,IYL         |0x8dfd
ADC A,LY          |0x8dfd
ADC A',(IY+n)     |0x8efd
ADC A,(IY+n)      |0x8efd
ADC A',L'         |0x8d
ADC A',L          |0x8d
ADC A,L'          |0x8d
ADC A,L           |0x8d
ADC A',n          |0xce
ADC A,n           |0xce
ADC HL',BC'       |0x4aed
ADC HL,BC         |0x4aed
ADC HL',DE'       |0x5aed
ADC HL,DE         |0x5aed
ADC HL',HL'       |0x6aed
ADC HL,HL         |0x6aed
ADC HL',SP        |0x7aed
ADC HL,SP         |0x7aed
ADC A'            |0x8f
ADC A             |0x8f
ADC B'            |0x88
ADC B             |0x88
ADC C'            |0x89
ADC C             |0x89
ADC D'            |0x8a
ADC D             |0x8a
ADC E'            |0x8b
ADC E             |0x8b
ADC H'            |0x8c
ADC H             |0x8c
ADC (HL')         |0x8e
ADC (HL)          |0x8e
ADC IXH           |0x8cdd
ADC HX            |0x8cdd
ADC IXL           |0x8ddd
ADC LX            |0x8ddd
ADC (IX+n)        |0x8edd
ADC IYH           |0x8cfd
ADC HY            |0x8cfd
ADC IYL           |0x8dfd
ADC LY            |0x8dfd
ADC (IY+n)        |0x8efd
ADC L'            |0x8d
ADC L             |0x8d
ADC n             |0xce
ADD A',A'         |0x87
ADD A,A           |0x87
ADD A',B'         |0x80
ADD A',B          |0x80
ADD A,B'          |0x80
ADD A,B           |0x80
ADD A',C'         |0x81
ADD A',C          |0x81
ADD A,C'          |0x81
ADD A,C           |0x81
ADD A',D'         |0x82
ADD A',D          |0x82
ADD A,D'          |0x82
ADD A,D           |0x82
ADD A',E'         |0x83
ADD A',E          |0x83
ADD A,E'          |0x83
ADD A,E           |0x83
ADD A',H'         |0x84
ADD A',H          |0x84
ADD A,H'          |0x84
ADD A,H           |0x84
ADD A',(HL')      |0x86
ADD A',(HL)       |0x86
ADD A,(HL')       |0x86
ADD A,(HL)        |0x86
ADD A',IXH        |0x84dd
ADD A',HX         |0x84dd
ADD A,IXH         |0x84dd
ADD A,HX          |0x84dd
ADD A',IXL        |0x85dd
ADD A',LX         |0x85dd
ADD A,IXL         |0x85dd
ADD A,LX          |0x85dd
ADD A',(IX+n)     |0x86dd
ADD A,(IX+n)      |0x86dd
ADD A',IYH        |0x84fd
ADD A',HY         |0x84fd
ADD A,IYH         |0x84fd
ADD A,HY          |0x84fd
ADD A',IYL        |0x85fd
ADD A',LY         |0x85fd
ADD A,IYL         |0x85fd
ADD A,LY          |0x85fd
ADD A',(IY+n)     |0x86fd
ADD A,(IY+n)      |0x86fd
ADD A',L'         |0x85
ADD A',L          |0x85
ADD A,L'          |0x85
ADD A,L           |0x85
ADD A',n          |0xc6
ADD A,n           |0xc6
ADD HL',BC'       |0x9
ADD HL,BC         |0x9
ADD HL',DE'       |0x19
ADD HL,DE         |0x19
ADD HL',HL'       |0x29
ADD HL,HL         |0x29
ADD HL',SP        |0x39
ADD HL,SP         |0x39
ADD IX,BC'        |0x9dd
ADD IX,BC         |0x9dd
ADD IX,DE'        |0x19dd
ADD IX,DE         |0x19dd
ADD IX,IX         |0x29dd
ADD IX,SP         |0x39dd
ADD IY,BC'        |0x9fd
ADD IY,BC         |0x9fd
ADD IY,DE'        |0x19fd
ADD IY,DE         |0x19fd
ADD IY,IY         |0x29fd
ADD IY,SP         |0x39fd
ADD A'            |0x87
ADD A             |0x87
ADD B'            |0x80
ADD B             |0x80
ADD C'            |0x81
ADD C             |0x81
ADD D'            |0x82
ADD D             |0x82
ADD E'            |0x83
ADD E             |0x83
ADD H'            |0x84
ADD H             |0x84
ADD (HL')         |0x86
ADD (HL)          |0x86
ADD IXH           |0x84dd
ADD HX            |0x84dd
ADD IXL           |0x85dd
ADD LX            |0x85dd
ADD (IX+n)        |0x86dd
ADD IYH           |0x84fd
ADD HY            |0x84fd
ADD IYL           |0x85fd
ADD LY            |0x85fd
ADD (IY+n)        |0x86fd
ADD L'            |0x85
ADD L             |0x85
ADD n             |0xc6
AND A',A'         |0xa7
AND A,A           |0xa7
AND A',B'         |0xa0
AND A',B          |0xa0
AND A,B'          |0xa0
AND A,B           |0xa0
AND A',C'         |0xa1
AND A',C          |0xa1
AND A,C'          |0xa1
AND A,C           |0xa1
AND A',D'         |0xa2
AND A',D          |0xa2
AND A,D'          |0xa2
AND A,D           |0xa2
AND A',E'         |0xa3
AND A',E          |0xa3
AND A,E'          |0xa3
AND A,E           |0xa3
AND A',H'         |0xa4
AND A',H          |0xa4
AND A,H'          |0xa4
AND A,H           |0xa4
AND A',(HL')      |0xa6
AND A',(HL)       |0xa6
AND A,(HL')       |0xa6
AND A,(HL)        |0xa6
AND A',IXH        |0xa4dd
AND A',HX         |0xa4dd
AND A,IXH         |0xa4dd
AND A,HX          |0xa4dd
AND A',IXL        |0xa5dd
AND A',LX         |0xa5dd
AND A,IXL         |0xa5dd
AND A,LX          |0xa5dd
AND A',(IX+n)     |0xa6dd
AND A,(IX+n)      |0xa6dd
AND A',IYH        |0xa4fd
AND A',HY         |0xa4fd
AND A,IYH         |0xa4fd
AND A,HY          |0xa4fd
AND A',IYL        |0xa5fd
AND A',LY         |0xa5fd
AND A,IYL         |0xa5fd
AND A,LY          |0xa5fd
AND A',(IY+n)     |0xa6fd
AND A,(IY+n)      |0xa6fd
AND A',L'         |0xa5
AND A',L          |0xa5
AND A,L'          |0xa5
AND A,L           |0xa5
AND A',n          |0xe6
AND A,n           |0xe6
AND A'            |0xa7
AND A             |0xa7
AND B'            |0xa0
AND B             |0xa0
AND C'            |0xa1
AND C             |0xa1
AND D'            |0xa2
AND D             |0xa2
AND E'            |0xa3
AND E             |0xa3
AND H'            |0xa4
AND H             |0xa4
AND (HL')         |0xa6
AND (HL)          |0xa6
AND IXH           |0xa4dd
AND HX            |0xa4dd
AND IXL           |0xa5dd
AND LX            |0xa5dd
AND (IX+n)        |0xa6dd
AND IYH           |0xa4fd
AND HY            |0xa4fd
AND IYL           |0xa5fd
AND LY            |0xa5fd
AND (IY+n)        |0xa6fd
AND L'            |0xa5
AND L             |0xa5
AND n             |0xe6
BIT 0,A'          |0x47cb
BIT 0,A           |0x47cb
BIT 0,B'          |0x40cb
BIT 0,B           |0x40cb
BIT 0,C'          |0x41cb
BIT 0,C           |0x41cb
BIT 0,D'          |0x42cb
BIT 0,D           |0x42cb
BIT 0,E'          |0x43cb
BIT 0,E           |0x43cb
BIT 0,H'          |0x44cb
BIT 0,H           |0x44cb
BIT 0,(HL')       |0x46cb
BIT 0,(HL)        |0x46cb
BIT 0,(IX+n)      |0x46cbdd
BIT 0,(IY+n)      |0x46cbfd
BIT 0,L'          |0x45cb
BIT 0,L           |0x45cb
BIT 1,A'          |0x4fcb
BIT 1,A           |0x4fcb
BIT 1,B'          |0x48cb
BIT 1,B           |0x48cb
BIT 1,C'          |0x49cb
BIT 1,C           |0x49cb
BIT 1,D'          |0x4acb
BIT 1,D           |0x4acb
BIT 1,E'          |0x4bcb
BIT 1,E           |0x4bcb
BIT 1,H'          |0x4ccb
BIT 1,H           |0x4ccb
BIT 1,(HL')       |0x4ecb
BIT 1,(HL)        |0x4ecb
BIT 1,(IX+n)      |0x4ecbdd
BIT 1,(IY+n)      |0x4ecbfd
BIT 1,L'          |0x4dcb
BIT 1,L           |0x4dcb
BIT 2,A'          |0x57cb
BIT 2,A           |0x57cb
BIT 2,B'          |0x50cb
BIT 2,B           |0x50cb
BIT 2,C'          |0x51cb
BIT 2,C           |0x51cb
BIT 2,D'          |0x52cb
BIT 2,D           |0x52cb
BIT 2,E'          |0x53cb
BIT 2,E           |0x53cb
BIT 2,H'          |0x54cb
BIT 2,H           |0x54cb
BIT 2,(HL')       |0x56cb
BIT 2,(HL)        |0x56cb
BIT 2,(IX+n)      |0x56cbdd
BIT 2,(IY+n)      |0x56cbfd
BIT 2,L'          |0x55cb
BIT 2,L           |0x55cb
BIT 3,A'          |0x5fcb
BIT 3,A           |0x5fcb
BIT 3,B'          |0x58cb
BIT 3,B           |0x58cb
BIT 3,C'          |0x59cb
BIT 3,C           |0x59cb
BIT 3,D'          |0x5acb
BIT 3,D           |0x5acb
BIT 3,E'          |0x5bcb
BIT 3,E           |0x5bcb
BIT 3,H'          |0x5ccb
BIT 3,H           |0x5ccb
BIT 3,(HL')       |0x5ecb
BIT 3,(HL)        |0x5ecb
BIT 3,(IX+n)      |0x5ecbdd
BIT 3,(IY+n)      |0x5ecbfd
BIT 3,L'          |0x5dcb
BIT 3,L           |0x5dcb
BIT 4,A'          |0x67cb
BIT 4,A           |0x67cb
BIT 4,B'          |0x60cb
BIT 4,B           |0x60cb
BIT 4,C'          |0x61cb
BIT 4,C           |0x61cb
BIT 4,D'          |0x62cb
BIT 4,D           |0x62cb
BIT 4,E'          |0x63cb
BIT 4,E           |0x63cb
BIT 4,H'          |0x64cb
BIT 4,H           |0x64cb
BIT 4,(HL')       |0x66cb
BIT 4,(HL)        |0x66cb
BIT 4,(IX+n)      |0x66cbdd
BIT 4,(IY+n)      |0x66cbfd
BIT 4,L'          |0x65cb
BIT 4,L           |0x65cb
BIT 5,A'          |0x6fcb
BIT 5,A           |0x6fcb
BIT 5,B'          |0x68cb
BIT 5,B           |0x68cb
BIT 5,C'          |0x69cb
BIT 5,C           |0x69cb
BIT 5,D'          |0x6acb
BIT 5,D           |0x6acb
BIT 5,E'          |0x6bcb
BIT 5,E           |0x6bcb
BIT 5,H'          |0x6ccb
BIT 5,H           |0x6ccb
BIT 5,(HL')       |0x6ecb
BIT 5,(HL)        |0x6ecb
BIT 5,(IX+n)      |0x6ecbdd
BIT 5,(IY+n)      |0x6ecbfd
BIT 5,L'          |0x6dcb
BIT 5,L           |0x6dcb
BIT 6,A'          |0x77cb
BIT 6,A           |0x77cb
BIT 6,B'          |0x70cb
BIT 6,B           |0x70cb
BIT 6,C'          |0x71cb
BIT 6,C           |0x71cb
BIT 6,D'          |0x72cb
BIT 6,D           |0x72cb
BIT 6,E'          |0x73cb
BIT 6,E           |0x73cb
BIT 6,H'          |0x74cb
BIT 6,H           |0x74cb
BIT 6,(HL')       |0x76cb
BIT 6,(HL)        |0x76cb
BIT 6,(IX+n)      |0x76cbdd
BIT 6,(IY+n)      |0x76cbfd
BIT 6,L'          |0x75cb
BIT 6,L           |0x75cb
BIT 7,A'          |0x7fcb
BIT 7,A           |0x7fcb
BIT 7,B'          |0x78cb
BIT 7,B           |0x78cb
BIT 7,C'          |0x79cb
BIT 7,C           |0x79cb
BIT 7,D'          |0x7acb
BIT 7,D           |0x7acb
BIT 7,E'          |0x7bcb
BIT 7,E           |0x7bcb
BIT 7,H'          |0x7ccb
BIT 7,H           |0x7ccb
BIT 7,(HL')       |0x7ecb
BIT 7,(HL)        |0x7ecb
BIT 7,(IX+n)      |0x7ecbdd
BIT 7,(IY+n)      |0x7ecbfd
BIT 7,L'          |0x7dcb
BIT 7,L           |0x7dcb
CALL C,n          |0xdc
CALL M,n          |0xfc
CALL NC,n         |0xd4
CALL NZ,n         |0xc4
CALL PE,n         |0xec
CALL PO,n         |0xe4
CALL P,n          |0xf4
CALL Z,n          |0xcc
CALL n            |0xcd
CCF               |0x3f
CP A',A'          |0xbf
CP A,A            |0xbf
CP A',B'          |0xb8
CP A',B           |0xb8
CP A,B'           |0xb8
CP A,B            |0xb8
CP A',C'          |0xb9
CP A',C           |0xb9
CP A,C'           |0xb9
CP A,C            |0xb9
CP A',D'          |0xba
CP A',D           |0xba
CP A,D'           |0xba
CP A,D            |0xba
CP A',E'          |0xbb
CP A',E           |0xbb
CP A,E'           |0xbb
CP A,E            |0xbb
CP A',H'          |0xbc
CP A',H           |0xbc
CP A,H'           |0xbc
CP A,H            |0xbc
CP A',(HL')       |0xbe
CP A',(HL)        |0xbe
CP A,(HL')        |0xbe
CP A,(HL)         |0xbe
CP A',IXH         |0xbcdd
CP A',HX          |0xbcdd
CP A,IXH          |0xbcdd
CP A,HX           |0xbcdd
CP A',IXL         |0xbddd
CP A',LX          |0xbddd
CP A,IXL          |0xbddd
CP A,LX           |0xbddd
CP A',(IX+n)      |0xbedd
CP A,(IX+n)       |0xbedd
CP A',IYH         |0xbcfd
CP A',HY          |0xbcfd
CP A,IYH          |0xbcfd
CP A,HY           |0xbcfd
CP A',IYL         |0xbdfd
CP A',LY          |0xbdfd
CP A,IYL          |0xbdfd
CP A,LY           |0xbdfd
CP A',(IY+n)      |0xbefd
CP A,(IY+n)       |0xbefd
CP A',L'          |0xbd
CP A',L           |0xbd
CP A,L'           |0xbd
CP A,L            |0xbd
CP A',n           |0xfe
CP A,n            |0xfe
CP A'             |0xbf
CP A              |0xbf
CP B'             |0xb8
CP B              |0xb8
CP C'             |0xb9
CP C              |0xb9
CP D'             |0xba
CP D              |0xba
CP E'             |0xbb
CP E              |0xbb
CP H'             |0xbc
CP H              |0xbc
CP (HL')          |0xbe
CP (HL)           |0xbe
CP IXH            |0xbcdd
CP HX             |0xbcdd
CP IXL            |0xbddd
CP LX             |0xbddd
CP (IX+n)         |0xbedd
CP IYH            |0xbcfd
CP HY             |0xbcfd
CP IYL            |0xbdfd
CP LY             |0xbdfd
CP (IY+n)         |0xbefd
CP L'             |0xbd
CP L              |0xbd
CP n              |0xfe
CPDR              |0xb9ed
CPD               |0xa9ed
CPIR              |0xb1ed
CPI               |0xa1ed
CPL               |0x2f
DAA               |0x27
DEC A'            |0x3d
DEC A             |0x3d
DEC B'            |0x5
DEC B             |0x5
DEC BC'           |0xb
DEC BC            |0xb
DEC C'            |0xd
DEC C             |0xd
DEC D'            |0x15
DEC D             |0x15
DEC DE'           |0x1b
DEC DE            |0x1b
DEC E'            |0x1d
DEC E             |0x1d
DEC H'            |0x25
DEC H             |0x25
DEC HL'           |0x2b
DEC HL            |0x2b
DEC (HL')         |0x35
DEC (HL)          |0x35
DEC IX            |0x2bdd
DEC IXH           |0x25dd
DEC HX            |0x25dd
DEC IXL           |0x2ddd
DEC LX            |0x2ddd
DEC (IX+n)        |0x35dd
DEC IY            |0x2bfd
DEC IYH           |0x25fd
DEC HY            |0x25fd
DEC IYL           |0x2dfd
DEC LY            |0x2dfd
DEC (IY+n)        |0x35fd
DEC L'            |0x2d
DEC L             |0x2d
DEC SP            |0x3b
DI                |0xf3
DJNZ n            |0x10
EI                |0xfb
EX AF',AF         |0x8
EX AF,AF'         |0x8
EX DE',HL'        |0xeb
EX DE,HL          |0xeb
EX (SP),HL'       |0xe3
EX (SP),HL        |0xe3
EX (SP),IX        |0xe3dd
EX (SP),IY        |0xe3fd
EXX               |0xd9
HALT              |0x76
IM 0              |0x46ed
IM 1              |0x56ed
IM 2              |0x5eed
IN A',(C')        |0x78ed
IN A',(C)         |0x78ed
IN A,(C')         |0x78ed
IN A,(C)          |0x78ed
IN A',(x)         |0xdb
IN A,(x)          |0xdb
IN A',n           |0xdb
IN A,n            |0xdb
IN B',(C')        |0x40ed
IN B,(C)          |0x40ed
IN C',(C')        |0x48ed
IN C,(C)          |0x48ed
IN D',(C')        |0x50ed
IN D,(C)          |0x50ed
IN E',(C')        |0x58ed
IN E,(C)          |0x58ed
IN F',(C')        |0x70ed
IN F,(C)          |0x70ed
IN H',(C')        |0x60ed
IN H,(C)          |0x60ed
IN L',(C')        |0x68ed
IN L,(C)          |0x68ed
IN (C')           |0x70ed
IN (C)            |0x70ed
INC A'            |0x3c
INC A             |0x3c
INC B'            |0x4
INC B             |0x4
INC BC'           |0x3
INC BC            |0x3
INC C'            |0xc
INC C             |0xc
INC D'            |0x14
INC D             |0x14
INC DE'           |0x13
INC DE            |0x13
INC E'            |0x1c
INC E             |0x1c
INC H'            |0x24
INC H             |0x24
INC HL'           |0x23
INC HL            |0x23
INC (HL')         |0x34
INC (HL)          |0x34
INC IX            |0x23dd
INC IXH           |0x24dd
INC HX            |0x24dd
INC IXL           |0x2cdd
INC LX            |0x2cdd
INC (IX+n)        |0x34dd
INC IY            |0x23fd
INC IYH           |0x24fd
INC HY            |0x24fd
INC IYL           |0x2cfd
INC LY            |0x2cfd
INC (IY+n)        |0x34fd
INC L'            |0x2c
INC L             |0x2c
INC SP            |0x33
INDR              |0xbaed
IND               |0xaaed
INIR              |0xb2ed
INI               |0xa2ed
JP (HL')          |0xe9
JP (HL)           |0xe9
JP (IX)           |0xe9dd
JP (IY)           |0xe9fd
JP HL'            |0xe9
JP HL             |0xe9
JP IX             |0xe9dd
JP IY             |0xe9fd
JP C,n            |0xda
JP M,n            |0xfa
JP NC,n           |0xd2
JP NZ,n           |0xc2
JP PE,n           |0xea
JP PO,n           |0xe2
JP P,n            |0xf2
JP Z,n            |0xca
JP n              |0xc3
JR C,n            |0x38
JR NC,n           |0x30
JR NZ,n           |0x20
JR Z,n            |0x28
JR n              |0x18
LD A',A'          |0x7f
LD A,A            |0x7f
LD A',B'          |0x78
LD A',B           |0x78
LD A,B'           |0x78
LD A,B            |0x78
LD A',(BC')       |0xa
LD A',(BC)        |0xa
LD A,(BC')        |0xa
LD A,(BC)         |0xa
LD A',C'          |0x79
LD A',C           |0x79
LD A,C'           |0x79
LD A,C            |0x79
LD A',D'          |0x7a
LD A',D           |0x7a
LD A,D'           |0x7a
LD A,D            |0x7a
LD A',(DE')       |0x1a
LD A',(DE)        |0x1a
LD A,(DE')        |0x1a
LD A,(DE)         |0x1a
LD A',E'          |0x7b
LD A',E           |0x7b
LD A,E'           |0x7b
LD A,E            |0x7b
LD A',H'          |0x7c
LD A',H           |0x7c
LD A,H'           |0x7c
LD A,H            |0x7c
LD A',(HL')       |0x7e
LD A',(HL)        |0x7e
LD A,(HL')        |0x7e
LD A,(HL)         |0x7e
LD A',I           |0x57ed
LD A,I            |0x57ed
LD A',IXH         |0x7cdd
LD A',HX          |0x7cdd
LD A,IXH          |0x7cdd
LD A,HX           |0x7cdd
LD A',IXL         |0x7ddd
LD A',LX          |0x7ddd
LD A,IXL          |0x7ddd
LD A,LX           |0x7ddd
LD A',(IX+n)      |0x7edd
LD A,(IX+n)       |0x7edd
LD A',IYH         |0x7cfd
LD A',HY          |0x7cfd
LD A,IYH          |0x7cfd
LD A,HY           |0x7cfd
LD A',IYL         |0x7dfd
LD A',LY          |0x7dfd
LD A,IYL          |0x7dfd
LD A,LY           |0x7dfd
LD A',(IY+n)      |0x7efd
LD A,(IY+n)       |0x7efd
LD A',L'          |0x7d
LD A',L           |0x7d
LD A,L'           |0x7d
LD A,L            |0x7d
LD A',R           |0x5fed
LD A,R            |0x5fed
LD A',(n)         |0x3a
LD A,(n)          |0x3a
LD A',n           |0x3e
LD A,n            |0x3e
LD B',A'          |0x47
LD B',A           |0x47
LD B,A'           |0x47
LD B,A            |0x47
LD B',B'          |0x40
LD B,B            |0x40
LD B',C'          |0x41
LD B,C            |0x41
LD BC',(n)        |0x4bed
LD BC,(n)         |0x4bed
LD BC',n          |0x1
LD BC,n           |0x1
LD (BC'),A'       |0x2
LD (BC'),A        |0x2
LD (BC),A'        |0x2
LD (BC),A         |0x2
LD B',D'          |0x42
LD B,D            |0x42
LD B',E'          |0x43
LD B,E            |0x43
LD B',H'          |0x44
LD B,H            |0x44
LD B',(HL')       |0x46
LD B,(HL)         |0x46
LD B',IXH         |0x44dd
LD B',HX          |0x44dd
LD B,IXH          |0x44dd
LD B,HX           |0x44dd
LD B',IXL         |0x45dd
LD B',LX          |0x45dd
LD B,IXL          |0x45dd
LD B,LX           |0x45dd
LD B',(IX+n)      |0x46dd
LD B,(IX+n)       |0x46dd
LD B',IYH         |0x44fd
LD B',HY          |0x44fd
LD B,IYH          |0x44fd
LD B,HY           |0x44fd
LD B',IYL         |0x45fd
LD B',LY          |0x45fd
LD B,IYL          |0x45fd
LD B,LY           |0x45fd
LD B',(IY+n)      |0x46fd
LD B,(IY+n)       |0x46fd
LD B',L'          |0x45
LD B,L            |0x45
LD B',n           |0x6
LD B,n            |0x6
LD C',A'          |0x4f
LD C',A           |0x4f
LD C,A'           |0x4f
LD C,A            |0x4f
LD C',B'          |0x48
LD C,B            |0x48
LD C',C'          |0x49
LD C,C            |0x49
LD C',D'          |0x4a
LD C,D            |0x4a
LD C',E'          |0x4b
LD C,E            |0x4b
LD C',H'          |0x4c
LD C,H            |0x4c
LD C',(HL')       |0x4e
LD C,(HL)         |0x4e
LD C',IXH         |0x4cdd
LD C',HX          |0x4cdd
LD C,IXH          |0x4cdd
LD C,HX           |0x4cdd
LD C',IXL         |0x4ddd
LD C',LX          |0x4ddd
LD C,IXL          |0x4ddd
LD C,LX           |0x4ddd
LD C',(IX+n)      |0x4edd
LD C,(IX+n)       |0x4edd
LD C',IYH         |0x4cfd
LD C',HY          |0x4cfd
LD C,IYH          |0x4cfd
LD C,HY           |0x4cfd
LD C',IYL         |0x4dfd
LD C',LY          |0x4dfd
LD C,IYL          |0x4dfd
LD C,LY           |0x4dfd
LD C',(IY+n)      |0x4efd
LD C,(IY+n)       |0x4efd
LD C',L'          |0x4d
LD C,L            |0x4d
LD C',n           |0xe
LD C,n            |0xe
LD D',A'          |0x57
LD D',A           |0x57
LD D,A'           |0x57
LD D,A            |0x57
LD D',B'          |0x50
LD D,B            |0x50
LD D',C'          |0x51
LD D,C            |0x51
LD D',D'          |0x52
LD D,D            |0x52
LD D',E'          |0x53
LD D,E            |0x53
LD DE',(n)        |0x5bed
LD DE,(n)         |0x5bed
LD DE',n          |0x11
LD DE,n           |0x11
LD (DE'),A'       |0x12
LD (DE'),A        |0x12
LD (DE),A'        |0x12
LD (DE),A         |0x12
LD D',H'          |0x54
LD D,H            |0x54
LD D',(HL')       |0x56
LD D,(HL)         |0x56
LD D',IXH         |0x54dd
LD D',HX          |0x54dd
LD D,IXH          |0x54dd
LD D,HX           |0x54dd
LD D',IXL         |0x55dd
LD D',LX          |0x55dd
LD D,IXL          |0x55dd
LD D,LX           |0x55dd
LD D',(IX+n)      |0x56dd
LD D,(IX+n)       |0x56dd
LD D',IYH         |0x54fd
LD D',HY          |0x54fd
LD D,IYH          |0x54fd
LD D,HY           |0x54fd
LD D',IYL         |0x55fd
LD D',LY          |0x55fd
LD D,IYL          |0x55fd
LD D,LY           |0x55fd
LD D',(IY+n)      |0x56fd
LD D,(IY+n)       |0x56fd
LD D',L'          |0x55
LD D,L            |0x55
LD D',n           |0x16
LD D,n            |0x16
LD E',A'          |0x5f
LD E',A           |0x5f
LD E,A'           |0x5f
LD E,A            |0x5f
LD E',B'          |0x58
LD E,B            |0x58
LD E',C'          |0x59
LD E,C            |0x59
LD E',D'          |0x5a
LD E,D            |0x5a
LD E',E'          |0x5b
LD E,E            |0x5b
LD E',H'          |0x5c
LD E,H            |0x5c
LD E',(HL')       |0x5e
LD E,(HL)         |0x5e
LD E',IXH         |0x5cdd
LD E',HX          |0x5cdd
LD E,IXH          |0x5cdd
LD E,HX           |0x5cdd
LD E',IXL         |0x5ddd
LD E',LX          |0x5ddd
LD E,IXL          |0x5ddd
LD E,LX           |0x5ddd
LD E',(IX+n)      |0x5edd
LD E,(IX+n)       |0x5edd
LD E',IYH         |0x5cfd
LD E',HY          |0x5cfd
LD E,IYH          |0x5cfd
LD E,HY           |0x5cfd
LD E',IYL         |0x5dfd
LD E',LY          |0x5dfd
LD E,IYL          |0x5dfd
LD E,LY           |0x5dfd
LD E',(IY+n)      |0x5efd
LD E,(IY+n)       |0x5efd
LD E',L'          |0x5d
LD E,L            |0x5d
LD E',n           |0x1e
LD E,n            |0x1e
LD H',A'          |0x67
LD H',A           |0x67
LD H,A'           |0x67
LD H,A            |0x67
LD H',B'          |0x60
LD H,B            |0x60
LD H',C'          |0x61
LD H,C            |0x61
LD H',D'          |0x62
LD H,D            |0x62
LD H',E'          |0x63
LD H,E            |0x63
LD H',H'          |0x64
LD H,H            |0x64
LD H',(HL')       |0x66
LD H,(HL)         |0x66
LD H',(IX+n)      |0x66dd
LD H,(IX+n)       |0x66dd
LD H',(IY+n)      |0x66fd
LD H,(IY+n)       |0x66fd
LD H',L'          |0x65
LD H,L            |0x65
LD H',n           |0x26
LD H,n            |0x26
LD HL',(n)        |0x2a
LD HL,(n)         |0x2a
LD HL',n          |0x21
LD HL,n           |0x21
LD (HL'),A'       |0x77
LD (HL'),A        |0x77
LD (HL),A'        |0x77
LD (HL),A         |0x77
LD (HL'),B'       |0x70
LD (HL),B         |0x70
LD (HL'),C'       |0x71
LD (HL),C         |0x71
LD (HL'),D'       |0x72
LD (HL),D         |0x72
LD (HL'),E'       |0x73
LD (HL),E         |0x73
LD (HL'),H'       |0x74
LD (HL),H         |0x74
LD (HL'),L'       |0x75
LD (HL),L         |0x75
LD (HL'),n        |0x36
LD (HL),n         |0x36
LD L',A'          |0x6f
LD L',A           |0x6f
LD L,A'           |0x6f
LD L,A            |0x6f
LD L',B'          |0x68
LD L,B            |0x68
LD L',C'          |0x69
LD L,C            |0x69
LD L',D'          |0x6a
LD L,D            |0x6a
LD L',E'          |0x6b
LD L,E            |0x6b
LD L',H'          |0x6c
LD L,H            |0x6c
LD L',(HL')       |0x6e
LD L,(HL)         |0x6e
LD L',(IX+n)      |0x6edd
LD L,(IX+n)       |0x6edd
LD L',(IY+n)      |0x6efd
LD L,(IY+n)       |0x6efd
LD L',L'          |0x6d
LD L,L            |0x6d
LD L',n           |0x2e
LD L,n            |0x2e
LD R,A'           |0x4fed
LD R,A            |0x4fed
LD SP,HL'         |0xf9
LD SP,HL          |0xf9
LD SP,IX          |0xf9dd
LD SP,IY          |0xf9fd
LD SP,(n)         |0x7bed
LD SP,n           |0x31
LD I,A'           |0x47ed
LD I,A            |0x47ed
LD IX,(n)         |0x2add
LD IX,n           |0x21dd
LD IXH,A'         |0x67dd
LD IXH,A          |0x67dd
LD IXH,B'         |0x60dd
LD IXH,B          |0x60dd
LD IXH,C'         |0x61dd
LD IXH,C          |0x61dd
LD IXH,D'         |0x62dd
LD IXH,D          |0x62dd
LD IXH,E'         |0x63dd
LD IXH,E          |0x63dd
LD IXH,IXH        |0x64dd
LD IXH,IXL        |0x65dd
LD IXH,n          |0x26dd
LD IXL,A'         |0x6fdd
LD IXL,A          |0x6fdd
LD IXL,B'         |0x68dd
LD IXL,B          |0x68dd
LD IXL,C'         |0x69dd
LD IXL,C          |0x69dd
LD IXL,D'         |0x6add
LD IXL,D          |0x6add
LD IXL,E'         |0x6bdd
LD IXL,E          |0x6bdd
LD IXL,IXH        |0x6cdd
LD IXL,IXL        |0x6ddd
LD IXL,n          |0x2edd
LD HX,A'          |0x67dd
LD HX,A           |0x67dd
LD HX,B'          |0x60dd
LD HX,B           |0x60dd
LD HX,C'          |0x61dd
LD HX,C           |0x61dd
LD HX,D'          |0x62dd
LD HX,D           |0x62dd
LD HX,E'          |0x63dd
LD HX,E           |0x63dd
LD HX,HX          |0x64dd
LD HX,LX          |0x65dd
LD HX,n           |0x26dd
LD LX,A'          |0x6fdd
LD LX,A           |0x6fdd
LD LX,B'          |0x68dd
LD LX,B           |0x68dd
LD LX,C'          |0x69dd
LD LX,C           |0x69dd
LD LX,D'          |0x6add
LD LX,D           |0x6add
LD LX,E'          |0x6bdd
LD LX,E           |0x6bdd
LD LX,HX          |0x6cdd
LD LX,LX          |0x6ddd
LD LX,n           |0x2edd
LD (IX+n),A'      |0x77dd
LD (IX+n),A       |0x77dd
LD (IX+n),B'      |0x70dd
LD (IX+n),B       |0x70dd
LD (IX+n),C'      |0x71dd
LD (IX+n),C       |0x71dd
LD (IX+n),D'      |0x72dd
LD (IX+n),D       |0x72dd
LD (IX+n),E'      |0x73dd
LD (IX+n),E       |0x73dd
LD (IX+n),H'      |0x74dd
LD (IX+n),H       |0x74dd
LD (IX+n),L'      |0x75dd
LD (IX+n),L       |0x75dd
LD (IX+n),n       |0x36dd
LD IY,(n)         |0x2afd
LD IY,n           |0x21fd
LD IYH,A'         |0x67fd
LD IYH,A          |0x67fd
LD IYH,B'         |0x60fd
LD IYH,B          |0x60fd
LD IYH,C'         |0x61fd
LD IYH,C          |0x61fd
LD IYH,D'         |0x62fd
LD IYH,D          |0x62fd
LD IYH,E'         |0x63fd
LD IYH,E          |0x63fd
LD IYH,IYH        |0x64fd
LD IYH,IYL        |0x65fd
LD IYH,n          |0x26fd
LD IYL,A'         |0x6ffd
LD IYL,A          |0x6ffd
LD IYL,B'         |0x68fd
LD IYL,B          |0x68fd
LD IYL,C'         |0x69fd
LD IYL,C          |0x69fd
LD IYL,D'         |0x6afd
LD IYL,D          |0x6afd
LD IYL,E'         |0x6bfd
LD IYL,E          |0x6bfd
LD IYL,IYH        |0x6cfd
LD IYL,IYL        |0x6dfd
LD IYL,n          |0x2efd
LD HY,A'          |0x67fd
LD HY,A           |0x67fd
LD HY,B'          |0x60fd
LD HY,B           |0x60fd
LD HY,C'          |0x61fd
LD HY,C           |0x61fd
LD HY,D'          |0x62fd
LD HY,D           |0x62fd
LD HY,E'          |0x63fd
LD HY,E           |0x63fd
LD HY,HY          |0x64fd
LD HY,LY          |0x65fd
LD HY,n           |0x26fd
LD LY,A'          |0x6ffd
LD LY,A           |0x6ffd
LD LY,B'          |0x68fd
LD LY,B           |0x68fd
LD LY,C'          |0x69fd
LD LY,C           |0x69fd
LD LY,D'          |0x6afd
LD LY,D           |0x6afd
LD LY,E'          |0x6bfd
LD LY,E           |0x6bfd
LD LY,HY          |0x6cfd
LD LY,LY          |0x6dfd
LD LY,n           |0x2efd
LD (IY+n),A'      |0x77fd
LD (IY+n),A       |0x77fd
LD (IY+n),B'      |0x70fd
LD (IY+n),B       |0x70fd
LD (IY+n),C'      |0x71fd
LD (IY+n),C       |0x71fd
LD (IY+n),D'      |0x72fd
LD (IY+n),D       |0x72fd
LD (IY+n),E'      |0x73fd
LD (IY+n),E       |0x73fd
LD (IY+n),H'      |0x74fd
LD (IY+n),H       |0x74fd
LD (IY+n),L'      |0x75fd
LD (IY+n),L       |0x75fd
LD (IY+n),n       |0x36fd
LD (n),A'         |0x32
LD (n),A          |0x32
LD (n),BC'        |0x43ed
LD (n),BC         |0x43ed
LD (n),DE'        |0x53ed
LD (n),DE         |0x53ed
LD (n),HL'        |0x22
LD (n),HL         |0x22
LD (n),SP         |0x73ed
LD (n),IY         |0x22fd
LD (n),IX         |0x22dd
LD PC,HL'         |0xe9
LD PC,HL          |0xe9
LD PC,IX          |0xe9dd
LD PC,IY          |0xe9fd
LD A',RES *,(IX+n)|0xcbdd
LD A,RES *,(IX+n) |0xcbdd
LD A',RES *,(IY+n)|0xcbfd
LD A,RES *,(IY+n) |0xcbfd
LD A',RES *,(IX+n)|0xcbdd
LD A,RES *,(IX+n) |0xcbdd
LD A',RES *,(IY+n)|0xcbfd
LD A,RES *,(IY+n) |0xcbfd
LD A',RES *,(IX+n)|0xcbdd
LD A,RES *,(IX+n) |0xcbdd
LD A',RES *,(IY+n)|0xcbfd
LD A,RES *,(IY+n) |0xcbfd
LD A',RES *,(IX+n)|0xcbdd
LD A,RES *,(IX+n) |0xcbdd
LD A',RES *,(IY+n)|0xcbfd
LD A,RES *,(IY+n) |0xcbfd
LD A',RES *,(IX+n)|0xcbdd
LD A,RES *,(IX+n) |0xcbdd
LD A',RES *,(IY+n)|0xcbfd
LD A,RES *,(IY+n) |0xcbfd
LD A',RES *,(IX+n)|0xcbdd
LD A,RES *,(IX+n) |0xcbdd
LD A',RES *,(IY+n)|0xcbfd
LD A,RES *,(IY+n) |0xcbfd
LD A',RES *,(IX+n)|0xcbdd
LD A,RES *,(IX+n) |0xcbdd
LD A',RES *,(IY+n)|0xcbfd
LD A,RES *,(IY+n) |0xcbfd
LD A',RES *,(IX+n)|0xcbdd
LD A,RES *,(IX+n) |0xcbdd
LD A',RES *,(IY+n)|0xcbfd
LD A,RES *,(IY+n) |0xcbfd
LD A',RLC (IX+n)  |0xcbdd
LD A,RLC (IX+n)   |0xcbdd
LD A',RLC (IY+n)  |0xcbfd
LD A,RLC (IY+n)   |0xcbfd
LD A',RL (IX+n)   |0xcbdd
LD A,RL (IX+n)    |0xcbdd
LD A',RL (IY+n)   |0xcbfd
LD A,RL (IY+n)    |0xcbfd
LD A',RRC (IX+n)  |0xcbdd
LD A,RRC (IX+n)   |0xcbdd
LD A',RRC (IY+n)  |0xcbfd
LD A,RRC (IY+n)   |0xcbfd
LD A',RR (IX+n)   |0xcbdd
LD A,RR (IX+n)    |0xcbdd
LD A',RR (IY+n)   |0xcbfd
LD A,RR (IY+n)    |0xcbfd
LD A',SET *,(IX+n)|0xcbdd
LD A,SET *,(IX+n) |0xcbdd
LD A',SET *,(IY+n)|0xcbfd
LD A,SET *,(IY+n) |0xcbfd
LD A',SET *,(IX+n)|0xcbdd
LD A,SET *,(IX+n) |0xcbdd
LD A',SET *,(IY+n)|0xcbfd
LD A,SET *,(IY+n) |0xcbfd
LD A',SET *,(IX+n)|0xcbdd
LD A,SET *,(IX+n) |0xcbdd
LD A',SET *,(IY+n)|0xcbfd
LD A,SET *,(IY+n) |0xcbfd
LD A',SET *,(IX+n)|0xcbdd
LD A,SET *,(IX+n) |0xcbdd
LD A',SET *,(IY+n)|0xcbfd
LD A,SET *,(IY+n) |0xcbfd
LD A',SET *,(IX+n)|0xcbdd
LD A,SET *,(IX+n) |0xcbdd
LD A',SET *,(IY+n)|0xcbfd
LD A,SET *,(IY+n) |0xcbfd
LD A',SET *,(IX+n)|0xcbdd
LD A,SET *,(IX+n) |0xcbdd
LD A',SET *,(IY+n)|0xcbfd
LD A,SET *,(IY+n) |0xcbfd
LD A',SET *,(IX+n)|0xcbdd
LD A,SET *,(IX+n) |0xcbdd
LD A',SET *,(IY+n)|0xcbfd
LD A,SET *,(IY+n) |0xcbfd
LD A',SET *,(IX+n)|0xcbdd
LD A,SET *,(IX+n) |0xcbdd
LD A',SET *,(IY+n)|0xcbfd
LD A,SET *,(IY+n) |0xcbfd
LD A',SLA (IX+n)  |0xcbdd
LD A,SLA (IX+n)   |0xcbdd
LD A',SLA (IY+n)  |0xcbfd
LD A,SLA (IY+n)   |0xcbfd
LD A',SLL (IX+n)  |0xcbdd
LD A,SLL (IX+n)   |0xcbdd
LD A',SLL (IY+n)  |0xcbfd
LD A,SLL (IY+n)   |0xcbfd
LD A',SRA (IX+n)  |0xcbdd
LD A,SRA (IX+n)   |0xcbdd
LD A',SRA (IY+n)  |0xcbfd
LD A,SRA (IY+n)   |0xcbfd
LD A',SRL (IX+n)  |0xcbdd
LD A,SRL (IX+n)   |0xcbdd
LD A',SRL (IY+n)  |0xcbfd
LD A,SRL (IY+n)   |0xcbfd
LD B',RES *,(IX+n)|0xcbdd
LD B,RES *,(IX+n) |0xcbdd
LD B',RES *,(IY+n)|0xcbfd
LD B,RES *,(IY+n) |0xcbfd
LD B',RES *,(IX+n)|0xcbdd
LD B,RES *,(IX+n) |0xcbdd
LD B',RES *,(IY+n)|0xcbfd
LD B,RES *,(IY+n) |0xcbfd
LD B',RES *,(IX+n)|0xcbdd
LD B,RES *,(IX+n) |0xcbdd
LD B',RES *,(IY+n)|0xcbfd
LD B,RES *,(IY+n) |0xcbfd
LD B',RES *,(IX+n)|0xcbdd
LD B,RES *,(IX+n) |0xcbdd
LD B',RES *,(IY+n)|0xcbfd
LD B,RES *,(IY+n) |0xcbfd
LD B',RES *,(IX+n)|0xcbdd
LD B,RES *,(IX+n) |0xcbdd
LD B',RES *,(IY+n)|0xcbfd
LD B,RES *,(IY+n) |0xcbfd
LD B',RES *,(IX+n)|0xcbdd
LD B,RES *,(IX+n) |0xcbdd
LD B',RES *,(IY+n)|0xcbfd
LD B,RES *,(IY+n) |0xcbfd
LD B',RES *,(IX+n)|0xcbdd
LD B,RES *,(IX+n) |0xcbdd
LD B',RES *,(IY+n)|0xcbfd
LD B,RES *,(IY+n) |0xcbfd
LD B',RES *,(IX+n)|0xcbdd
LD B,RES *,(IX+n) |0xcbdd
LD B',RES *,(IY+n)|0xcbfd
LD B,RES *,(IY+n) |0xcbfd
LD B',RLC (IX+n)  |0xcbdd
LD B,RLC (IX+n)   |0xcbdd
LD B',RLC (IY+n)  |0xcbfd
LD B,RLC (IY+n)   |0xcbfd
LD B',RL (IX+n)   |0xcbdd
LD B,RL (IX+n)    |0xcbdd
LD B',RL (IY+n)   |0xcbfd
LD B,RL (IY+n)    |0xcbfd
LD B',RRC (IX+n)  |0xcbdd
LD B,RRC (IX+n)   |0xcbdd
LD B',RRC (IY+n)  |0xcbfd
LD B,RRC (IY+n)   |0xcbfd
LD B',RR (IX+n)   |0xcbdd
LD B,RR (IX+n)    |0xcbdd
LD B',RR (IY+n)   |0xcbfd
LD B,RR (IY+n)    |0xcbfd
LD B',SET *,(IX+n)|0xcbdd
LD B,SET *,(IX+n) |0xcbdd
LD B',SET *,(IY+n)|0xcbfd
LD B,SET *,(IY+n) |0xcbfd
LD B',SET *,(IX+n)|0xcbdd
LD B,SET *,(IX+n) |0xcbdd
LD B',SET *,(IY+n)|0xcbfd
LD B,SET *,(IY+n) |0xcbfd
LD B',SET *,(IX+n)|0xcbdd
LD B,SET *,(IX+n) |0xcbdd
LD B',SET *,(IY+n)|0xcbfd
LD B,SET *,(IY+n) |0xcbfd
LD B',SET *,(IX+n)|0xcbdd
LD B,SET *,(IX+n) |0xcbdd
LD B',SET *,(IY+n)|0xcbfd
LD B,SET *,(IY+n) |0xcbfd
LD B',SET *,(IX+n)|0xcbdd
LD B,SET *,(IX+n) |0xcbdd
LD B',SET *,(IY+n)|0xcbfd
LD B,SET *,(IY+n) |0xcbfd
LD B',SET *,(IX+n)|0xcbdd
LD B,SET *,(IX+n) |0xcbdd
LD B',SET *,(IY+n)|0xcbfd
LD B,SET *,(IY+n) |0xcbfd
LD B',SET *,(IX+n)|0xcbdd
LD B,SET *,(IX+n) |0xcbdd
LD B',SET *,(IY+n)|0xcbfd
LD B,SET *,(IY+n) |0xcbfd
LD B',SET *,(IX+n)|0xcbdd
LD B,SET *,(IX+n) |0xcbdd
LD B',SET *,(IY+n)|0xcbfd
LD B,SET *,(IY+n) |0xcbfd
LD B',SLA (IX+n)  |0xcbdd
LD B,SLA (IX+n)   |0xcbdd
LD B',SLA (IY+n)  |0xcbfd
LD B,SLA (IY+n)   |0xcbfd
LD B',SLL (IX+n)  |0xcbdd
LD B,SLL (IX+n)   |0xcbdd
LD B',SLL (IY+n)  |0xcbfd
LD B,SLL (IY+n)   |0xcbfd
LD B',SRA (IX+n)  |0xcbdd
LD B,SRA (IX+n)   |0xcbdd
LD B',SRA (IY+n)  |0xcbfd
LD B,SRA (IY+n)   |0xcbfd
LD B',SRL (IX+n)  |0xcbdd
LD B,SRL (IX+n)   |0xcbdd
LD B',SRL (IY+n)  |0xcbfd
LD B,SRL (IY+n)   |0xcbfd
LD C',RES *,(IX+n)|0xcbdd
LD C,RES *,(IX+n) |0xcbdd
LD C',RES *,(IY+n)|0xcbfd
LD C,RES *,(IY+n) |0xcbfd
LD C',RES *,(IX+n)|0xcbdd
LD C,RES *,(IX+n) |0xcbdd
LD C',RES *,(IY+n)|0xcbfd
LD C,RES *,(IY+n) |0xcbfd
LD C',RES *,(IX+n)|0xcbdd
LD C,RES *,(IX+n) |0xcbdd
LD C',RES *,(IY+n)|0xcbfd
LD C,RES *,(IY+n) |0xcbfd
LD C',RES *,(IX+n)|0xcbdd
LD C,RES *,(IX+n) |0xcbdd
LD C',RES *,(IY+n)|0xcbfd
LD C,RES *,(IY+n) |0xcbfd
LD C',RES *,(IX+n)|0xcbdd
LD C,RES *,(IX+n) |0xcbdd
LD C',RES *,(IY+n)|0xcbfd
LD C,RES *,(IY+n) |0xcbfd
LD C',RES *,(IX+n)|0xcbdd
LD C,RES *,(IX+n) |0xcbdd
LD C',RES *,(IY+n)|0xcbfd
LD C,RES *,(IY+n) |0xcbfd
LD C',RES *,(IX+n)|0xcbdd
LD C,RES *,(IX+n) |0xcbdd
LD C',RES *,(IY+n)|0xcbfd
LD C,RES *,(IY+n) |0xcbfd
LD C',RES *,(IX+n)|0xcbdd
LD C,RES *,(IX+n) |0xcbdd
LD C',RES *,(IY+n)|0xcbfd
LD C,RES *,(IY+n) |0xcbfd
LD C',RLC (IX+n)  |0xcbdd
LD C,RLC (IX+n)   |0xcbdd
LD C',RLC (IY+n)  |0xcbfd
LD C,RLC (IY+n)   |0xcbfd
LD C',RL (IX+n)   |0xcbdd
LD C,RL (IX+n)    |0xcbdd
LD C',RL (IY+n)   |0xcbfd
LD C,RL (IY+n)    |0xcbfd
LD C',RRC (IX+n)  |0xcbdd
LD C,RRC (IX+n)   |0xcbdd
LD C',RRC (IY+n)  |0xcbfd
LD C,RRC (IY+n)   |0xcbfd
LD C',RR (IX+n)   |0xcbdd
LD C,RR (IX+n)    |0xcbdd
LD C',RR (IY+n)   |0xcbfd
LD C,RR (IY+n)    |0xcbfd
LD C',SET *,(IX+n)|0xcbdd
LD C,SET *,(IX+n) |0xcbdd
LD C',SET *,(IY+n)|0xcbfd
LD C,SET *,(IY+n) |0xcbfd
LD C',SET *,(IX+n)|0xcbdd
LD C,SET *,(IX+n) |0xcbdd
LD C',SET *,(IY+n)|0xcbfd
LD C,SET *,(IY+n) |0xcbfd
LD C',SET *,(IX+n)|0xcbdd
LD C,SET *,(IX+n) |0xcbdd
LD C',SET *,(IY+n)|0xcbfd
LD C,SET *,(IY+n) |0xcbfd
LD C',SET *,(IX+n)|0xcbdd
LD C,SET *,(IX+n) |0xcbdd
LD C',SET *,(IY+n)|0xcbfd
LD C,SET *,(IY+n) |0xcbfd
LD C',SET *,(IX+n)|0xcbdd
LD C,SET *,(IX+n) |0xcbdd
LD C',SET *,(IY+n)|0xcbfd
LD C,SET *,(IY+n) |0xcbfd
LD C',SET *,(IX+n)|0xcbdd
LD C,SET *,(IX+n) |0xcbdd
LD C',SET *,(IY+n)|0xcbfd
LD C,SET *,(IY+n) |0xcbfd
LD C',SET *,(IX+n)|0xcbdd
LD C,SET *,(IX+n) |0xcbdd
LD C',SET *,(IY+n)|0xcbfd
LD C,SET *,(IY+n) |0xcbfd
LD C',SET *,(IX+n)|0xcbdd
LD C,SET *,(IX+n) |0xcbdd
LD C',SET *,(IY+n)|0xcbfd
LD C,SET *,(IY+n) |0xcbfd
LD C',SLA (IX+n)  |0xcbdd
LD C,SLA (IX+n)   |0xcbdd
LD C',SLA (IY+n)  |0xcbfd
LD C,SLA (IY+n)   |0xcbfd
LD C',SLL (IX+n)  |0xcbdd
LD C,SLL (IX+n)   |0xcbdd
LD C',SLL (IY+n)  |0xcbfd
LD C,SLL (IY+n)   |0xcbfd
LD C',SRA (IX+n)  |0xcbdd
LD C',SRA (IX+n)  |0xcbdd
LD C,SRA (IX+n)   |0xcbdd
LD C',SRA (IY+n)  |0xcbfd
LD C,SRA (IY+n)   |0xcbfd
LD C',SRL (IX+n)  |0xcbdd
LD C,SRL (IX+n)   |0xcbdd
LD C',SRL (IY+n)  |0xcbfd
LD C,SRL (IY+n)   |0xcbfd
LD D',RES *,(IX+n)|0xcbdd
LD D,RES *,(IX+n) |0xcbdd
LD D',RES *,(IY+n)|0xcbfd
LD D,RES *,(IY+n) |0xcbfd
LD D',RES *,(IX+n)|0xcbdd
LD D,RES *,(IX+n) |0xcbdd
LD D',RES *,(IY+n)|0xcbfd
LD D,RES *,(IY+n) |0xcbfd
LD D',RES *,(IX+n)|0xcbdd
LD D,RES *,(IX+n) |0xcbdd
LD D',RES *,(IY+n)|0xcbfd
LD D,RES *,(IY+n) |0xcbfd
LD D',RES *,(IX+n)|0xcbdd
LD D,RES *,(IX+n) |0xcbdd
LD D',RES *,(IY+n)|0xcbfd
LD D,RES *,(IY+n) |0xcbfd
LD D',RES *,(IX+n)|0xcbdd
LD D,RES *,(IX+n) |0xcbdd
LD D',RES *,(IY+n)|0xcbfd
LD D,RES *,(IY+n) |0xcbfd
LD D',RES *,(IX+n)|0xcbdd
LD D,RES *,(IX+n) |0xcbdd
LD D',RES *,(IY+n)|0xcbfd
LD D,RES *,(IY+n) |0xcbfd
LD D',RES *,(IX+n)|0xcbdd
LD D,RES *,(IX+n) |0xcbdd
LD D',RES *,(IY+n)|0xcbfd
LD D,RES *,(IY+n) |0xcbfd
LD D',RES *,(IX+n)|0xcbdd
LD D,RES *,(IX+n) |0xcbdd
LD D',RES *,(IY+n)|0xcbfd
LD D,RES *,(IY+n) |0xcbfd
LD D',RLC (IX+n)  |0xcbdd
LD D,RLC (IX+n)   |0xcbdd
LD D',RLC (IY+n)  |0xcbfd
LD D,RLC (IY+n)   |0xcbfd
LD D',RL (IX+n)   |0xcbdd
LD D,RL (IX+n)    |0xcbdd
LD D',RL (IY+n)   |0xcbfd
LD D,RL (IY+n)    |0xcbfd
LD D',RRC (IX+n)  |0xcbdd
LD D,RRC (IX+n)   |0xcbdd
LD D',RRC (IY+n)  |0xcbfd
LD D,RRC (IY+n)   |0xcbfd
LD D',RR (IX+n)   |0xcbdd
LD D,RR (IX+n)    |0xcbdd
LD D',RR (IY+n)   |0xcbfd
LD D,RR (IY+n)    |0xcbfd
LD D',SET *,(IX+n)|0xcbdd
LD D,SET *,(IX+n) |0xcbdd
LD D',SET *,(IY+n)|0xcbfd
LD D,SET *,(IY+n) |0xcbfd
LD D',SET *,(IX+n)|0xcbdd
LD D,SET *,(IX+n) |0xcbdd
LD D',SET *,(IY+n)|0xcbfd
LD D,SET *,(IY+n) |0xcbfd
LD D',SET *,(IX+n)|0xcbdd
LD D,SET *,(IX+n) |0xcbdd
LD D',SET *,(IY+n)|0xcbfd
LD D,SET *,(IY+n) |0xcbfd
LD D',SET *,(IX+n)|0xcbdd
LD D,SET *,(IX+n) |0xcbdd
LD D',SET *,(IY+n)|0xcbfd
LD D,SET *,(IY+n) |0xcbfd
LD D',SET *,(IX+n)|0xcbdd
LD D,SET *,(IX+n) |0xcbdd
LD D',SET *,(IY+n)|0xcbfd
LD D,SET *,(IY+n) |0xcbfd
LD D',SET *,(IX+n)|0xcbdd
LD D,SET *,(IX+n) |0xcbdd
LD D',SET *,(IY+n)|0xcbfd
LD D,SET *,(IY+n) |0xcbfd
LD D',SET *,(IX+n)|0xcbdd
LD D,SET *,(IX+n) |0xcbdd
LD D',SET *,(IY+n)|0xcbfd
LD D,SET *,(IY+n) |0xcbfd
LD D',SET *,(IX+n)|0xcbdd
LD D,SET *,(IX+n) |0xcbdd
LD D',SET *,(IY+n)|0xcbfd
LD D,SET *,(IY+n) |0xcbfd
LD D',SLA (IX+n)  |0xcbdd
LD D,SLA (IX+n)   |0xcbdd
LD D',SLA (IY+n)  |0xcbfd
LD D,SLA (IY+n)   |0xcbfd
LD D',SLL (IX+n)  |0xcbdd
LD D,SLL (IX+n)   |0xcbdd
LD D',SLL (IY+n)  |0xcbfd
LD D,SLL (IY+n)   |0xcbfd
LD D',SRA (IX+n)  |0xcbdd
LD D,SRA (IX+n)   |0xcbdd
LD D',SRA (IY+n)  |0xcbfd
LD D,SRA (IY+n)   |0xcbfd
LD D',SRL (IX+n)  |0xcbdd
LD D,SRL (IX+n)   |0xcbdd
LD D',SRL (IY+n)  |0xcbfd
LD D,SRL (IY+n)   |0xcbfd
LD E',RES *,(IX+n)|0xcbdd
LD E,RES *,(IX+n) |0xcbdd
LD E',RES *,(IY+n)|0xcbfd
LD E,RES *,(IY+n) |0xcbfd
LD E',RES *,(IX+n)|0xcbdd
LD E,RES *,(IX+n) |0xcbdd
LD E',RES *,(IY+n)|0xcbfd
LD E,RES *,(IY+n) |0xcbfd
LD E',RES *,(IX+n)|0xcbdd
LD E,RES *,(IX+n) |0xcbdd
LD E',RES *,(IY+n)|0xcbfd
LD E,RES *,(IY+n) |0xcbfd
LD E',RES *,(IX+n)|0xcbdd
LD E,RES *,(IX+n) |0xcbdd
LD E',RES *,(IY+n)|0xcbfd
LD E,RES *,(IY+n) |0xcbfd
LD E',RES *,(IX+n)|0xcbdd
LD E,RES *,(IX+n) |0xcbdd
LD E',RES *,(IY+n)|0xcbfd
LD E,RES *,(IY+n) |0xcbfd
LD E',RES *,(IX+n)|0xcbdd
LD E,RES *,(IX+n) |0xcbdd
LD E',RES *,(IY+n)|0xcbfd
LD E,RES *,(IY+n) |0xcbfd
LD E',RES *,(IX+n)|0xcbdd
LD E,RES *,(IX+n) |0xcbdd
LD E',RES *,(IY+n)|0xcbfd
LD E,RES *,(IY+n) |0xcbfd
LD E',RES *,(IX+n)|0xcbdd
LD E,RES *,(IX+n) |0xcbdd
LD E',RES *,(IY+n)|0xcbfd
LD E,RES *,(IY+n) |0xcbfd
LD E',RLC (IX+n)  |0xcbdd
LD E,RLC (IX+n)   |0xcbdd
LD E',RLC (IY+n)  |0xcbfd
LD E,RLC (IY+n)   |0xcbfd
LD E',RL (IX+n)   |0xcbdd
LD E,RL (IX+n)    |0xcbdd
LD E',RL (IY+n)   |0xcbfd
LD E,RL (IY+n)    |0xcbfd
LD E',RRC (IX+n)  |0xcbdd
LD E,RRC (IX+n)   |0xcbdd
LD E',RRC (IY+n)  |0xcbfd
LD E,RRC (IY+n)   |0xcbfd
LD E',RR (IX+n)   |0xcbdd
LD E,RR (IX+n)    |0xcbdd
LD E',RR (IY+n)   |0xcbfd
LD E,RR (IY+n)    |0xcbfd
LD E',SET *,(IX+n)|0xcbdd
LD E,SET *,(IX+n) |0xcbdd
LD E',SET *,(IY+n)|0xcbfd
LD E,SET *,(IY+n) |0xcbfd
LD E',SET *,(IX+n)|0xcbdd
LD E,SET *,(IX+n) |0xcbdd
LD E',SET *,(IY+n)|0xcbfd
LD E,SET *,(IY+n) |0xcbfd
LD E',SET *,(IX+n)|0xcbdd
LD E,SET *,(IX+n) |0xcbdd
LD E',SET *,(IY+n)|0xcbfd
LD E,SET *,(IY+n) |0xcbfd
LD E',SET *,(IX+n)|0xcbdd
LD E,SET *,(IX+n) |0xcbdd
LD E',SET *,(IY+n)|0xcbfd
LD E,SET *,(IY+n) |0xcbfd
LD E',SET *,(IX+n)|0xcbdd
LD E,SET *,(IX+n) |0xcbdd
LD E',SET *,(IY+n)|0xcbfd
LD E,SET *,(IY+n) |0xcbfd
LD E',SET *,(IX+n)|0xcbdd
LD E,SET *,(IX+n) |0xcbdd
LD E',SET *,(IY+n)|0xcbfd
LD E,SET *,(IY+n) |0xcbfd
LD E',SET *,(IX+n)|0xcbdd
LD E,SET *,(IX+n) |0xcbdd
LD E',SET *,(IY+n)|0xcbfd
LD E,SET *,(IY+n) |0xcbfd
LD E',SET *,(IX+n)|0xcbdd
LD E,SET *,(IX+n) |0xcbdd
LD E',SET *,(IY+n)|0xcbfd
LD E,SET *,(IY+n) |0xcbfd
LD E',SLA (IX+n)  |0xcbdd
LD E,SLA (IX+n)   |0xcbdd
LD E',SLA (IY+n)  |0xcbfd
LD E,SLA (IY+n)   |0xcbfd
LD E',SLL (IX+n)  |0xcbdd
LD E,SLL (IX+n)   |0xcbdd
LD E',SLL (IY+n)  |0xcbfd
LD E,SLL (IY+n)   |0xcbfd
LD E',SRA (IX+n)  |0xcbdd
LD E,SRA (IX+n)   |0xcbdd
LD E',SRA (IY+n)  |0xcbfd
LD E,SRA (IY+n)   |0xcbfd
LD E',SRL (IX+n)  |0xcbdd
LD E,SRL (IX+n)   |0xcbdd
LD E',SRL (IY+n)  |0xcbfd
LD E,SRL (IY+n)   |0xcbfd
LD H',RES *,(IX+n)|0xcbdd
LD H,RES *,(IX+n) |0xcbdd
LD H',RES *,(IY+n)|0xcbfd
LD H,RES *,(IY+n) |0xcbfd
LD H',RES *,(IX+n)|0xcbdd
LD H,RES *,(IX+n) |0xcbdd
LD H',RES *,(IY+n)|0xcbfd
LD H,RES *,(IY+n) |0xcbfd
LD H',RES *,(IX+n)|0xcbdd
LD H,RES *,(IX+n) |0xcbdd
LD H',RES *,(IY+n)|0xcbfd
LD H,RES *,(IY+n) |0xcbfd
LD H',RES *,(IX+n)|0xcbdd
LD H,RES *,(IX+n) |0xcbdd
LD H',RES *,(IY+n)|0xcbfd
LD H,RES *,(IY+n) |0xcbfd
LD H',RES *,(IX+n)|0xcbdd
LD H,RES *,(IX+n) |0xcbdd
LD H',RES *,(IY+n)|0xcbfd
LD H,RES *,(IY+n) |0xcbfd
LD H',RES *,(IX+n)|0xcbdd
LD H,RES *,(IX+n) |0xcbdd
LD H',RES *,(IY+n)|0xcbfd
LD H,RES *,(IY+n) |0xcbfd
LD H',RES *,(IX+n)|0xcbdd
LD H,RES *,(IX+n) |0xcbdd
LD H',RES *,(IY+n)|0xcbfd
LD H,RES *,(IY+n) |0xcbfd
LD H',RES *,(IX+n)|0xcbdd
LD H,RES *,(IX+n) |0xcbdd
LD H',RES *,(IY+n)|0xcbfd
LD H,RES *,(IY+n) |0xcbfd
LD H',RLC (IX+n)  |0xcbdd
LD H,RLC (IX+n)   |0xcbdd
LD H',RLC (IY+n)  |0xcbfd
LD H,RLC (IY+n)   |0xcbfd
LD H',RL (IX+n)   |0xcbdd
LD H,RL (IX+n)    |0xcbdd
LD H',RL (IY+n)   |0xcbfd
LD H,RL (IY+n)    |0xcbfd
LD H',RRC (IX+n)  |0xcbdd
LD H,RRC (IX+n)   |0xcbdd
LD H',RRC (IY+n)  |0xcbfd
LD H,RRC (IY+n)   |0xcbfd
LD H',RR (IX+n)   |0xcbdd
LD H,RR (IX+n)    |0xcbdd
LD H',RR (IY+n)   |0xcbfd
LD H,RR (IY+n)    |0xcbfd
LD H',SET *,(IX+n)|0xcbdd
LD H,SET *,(IX+n) |0xcbdd
LD H',SET *,(IY+n)|0xcbfd
LD H,SET *,(IY+n) |0xcbfd
LD H',SET *,(IX+n)|0xcbdd
LD H,SET *,(IX+n) |0xcbdd
LD H',SET *,(IY+n)|0xcbfd
LD H,SET *,(IY+n) |0xcbfd
LD H',SET *,(IX+n)|0xcbdd
LD H,SET *,(IX+n) |0xcbdd
LD H',SET *,(IY+n)|0xcbfd
LD H,SET *,(IY+n) |0xcbfd
LD H',SET *,(IX+n)|0xcbdd
LD H,SET *,(IX+n) |0xcbdd
LD H',SET *,(IY+n)|0xcbfd
LD H,SET *,(IY+n) |0xcbfd
LD H',SET *,(IX+n)|0xcbdd
LD H,SET *,(IX+n) |0xcbdd
LD H',SET *,(IY+n)|0xcbfd
LD H,SET *,(IY+n) |0xcbfd
LD H',SET *,(IX+n)|0xcbdd
LD H,SET *,(IX+n) |0xcbdd
LD H',SET *,(IY+n)|0xcbfd
LD H,SET *,(IY+n) |0xcbfd
LD H',SET *,(IX+n)|0xcbdd
LD H,SET *,(IX+n) |0xcbdd
LD H',SET *,(IY+n)|0xcbfd
LD H,SET *,(IY+n) |0xcbfd
LD H',SET *,(IX+n)|0xcbdd
LD H,SET *,(IX+n) |0xcbdd
LD H',SET *,(IY+n)|0xcbfd
LD H,SET *,(IY+n) |0xcbfd
LD H',SLA (IX+n)  |0xcbdd
LD H,SLA (IX+n)   |0xcbdd
LD H',SLA (IY+n)  |0xcbfd
LD H,SLA (IY+n)   |0xcbfd
LD H',SLL (IX+n)  |0xcbdd
LD H,SLL (IX+n)   |0xcbdd
LD H',SLL (IY+n)  |0xcbfd
LD H,SLL (IY+n)   |0xcbfd
LD H',SRA (IX+n)  |0xcbdd
LD H,SRA (IX+n)   |0xcbdd
LD H',SRA (IY+n)  |0xcbfd
LD H,SRA (IY+n)   |0xcbfd
LD H',SRL (IX+n)  |0xcbdd
LD H,SRL (IX+n)   |0xcbdd
LD H',SRL (IY+n)  |0xcbfd
LD H,SRL (IY+n)   |0xcbfd
LD L',RES *,(IX+n)|0xcbdd
LD L,RES *,(IX+n) |0xcbdd
LD L',RES *,(IY+n)|0xcbfd
LD L,RES *,(IY+n) |0xcbfd
LD L',RES *,(IX+n)|0xcbdd
LD L,RES *,(IX+n) |0xcbdd
LD L',RES *,(IY+n)|0xcbfd
LD L,RES *,(IY+n) |0xcbfd
LD L',RES *,(IX+n)|0xcbdd
LD L,RES *,(IX+n) |0xcbdd
LD L',RES *,(IY+n)|0xcbfd
LD L,RES *,(IY+n) |0xcbfd
LD L',RES *,(IX+n)|0xcbdd
LD L,RES *,(IX+n) |0xcbdd
LD L',RES *,(IY+n)|0xcbfd
LD L,RES *,(IY+n) |0xcbfd
LD L',RES *,(IX+n)|0xcbdd
LD L,RES *,(IX+n) |0xcbdd
LD L',RES *,(IY+n)|0xcbfd
LD L,RES *,(IY+n) |0xcbfd
LD L',RES *,(IX+n)|0xcbdd
LD L,RES *,(IX+n) |0xcbdd
LD L',RES *,(IY+n)|0xcbfd
LD L,RES *,(IY+n) |0xcbfd
LD L',RES *,(IX+n)|0xcbdd
LD L,RES *,(IX+n) |0xcbdd
LD L',RES *,(IY+n)|0xcbfd
LD L,RES *,(IY+n) |0xcbfd
LD L',RES *,(IX+n)|0xcbdd
LD L,RES *,(IX+n) |0xcbdd
LD L',RES *,(IY+n)|0xcbfd
LD L,RES *,(IY+n) |0xcbfd
LD L',RLC (IX+n)  |0xcbdd
LD L,RLC (IX+n)   |0xcbdd
LD L',RLC (IY+n)  |0xcbfd
LD L,RLC (IY+n)   |0xcbfd
LD L',RL (IX+n)   |0xcbdd
LD L,RL (IX+n)    |0xcbdd
LD L',RL (IY+n)   |0xcbfd
LD L,RL (IY+n)    |0xcbfd
LD L',RRC (IX+n)  |0xcbdd
LD L,RRC (IX+n)   |0xcbdd
LD L',RRC (IY+n)  |0xcbfd
LD L,RRC (IY+n)   |0xcbfd
LD L',RR (IX+n)   |0xcbdd
LD L,RR (IX+n)    |0xcbdd
LD L',RR (IY+n)   |0xcbfd
LD L,RR (IY+n)    |0xcbfd
LD L',SET *,(IX+n)|0xcbdd
LD L,SET *,(IX+n) |0xcbdd
LD L',SET *,(IY+n)|0xcbfd
LD L,SET *,(IY+n) |0xcbfd
LD L',SET *,(IX+n)|0xcbdd
LD L,SET *,(IX+n) |0xcbdd
LD L',SET *,(IY+n)|0xcbfd
LD L,SET *,(IY+n) |0xcbfd
LD L',SET *,(IX+n)|0xcbdd
LD L,SET *,(IX+n) |0xcbdd
LD L',SET *,(IY+n)|0xcbfd
LD L,SET *,(IY+n) |0xcbfd
LD L',SET *,(IX+n)|0xcbdd
LD L,SET *,(IX+n) |0xcbdd
LD L',SET *,(IY+n)|0xcbfd
LD L,SET *,(IY+n) |0xcbfd
LD L',SET *,(IX+n)|0xcbdd
LD L,SET *,(IX+n) |0xcbdd
LD L',SET *,(IY+n)|0xcbfd
LD L,SET *,(IY+n) |0xcbfd
LD L',SET *,(IX+n)|0xcbdd
LD L,SET *,(IX+n) |0xcbdd
LD L',SET *,(IY+n)|0xcbfd
LD L,SET *,(IY+n) |0xcbfd
LD L',SET *,(IX+n)|0xcbdd
LD L,SET *,(IX+n) |0xcbdd
LD L',SET *,(IY+n)|0xcbfd
LD L,SET *,(IY+n) |0xcbfd
LD L',SET *,(IX+n)|0xcbdd
LD L,SET *,(IX+n) |0xcbdd
LD L',SET *,(IY+n)|0xcbfd
LD L,SET *,(IY+n) |0xcbfd
LD L',SLA (IX+n)  |0xcbdd
LD L,SLA (IX+n)   |0xcbdd
LD L',SLA (IY+n)  |0xcbfd
LD L,SLA (IY+n)   |0xcbfd
LD L',SLL (IX+n)  |0xcbdd
LD L,SLL (IX+n)   |0xcbdd
LD L',SLL (IY+n)  |0xcbfd
LD L,SLL (IY+n)   |0xcbfd
LD L',SRA (IX+n)  |0xcbdd
LD L,SRA (IX+n)   |0xcbdd
LD L',SRA (IY+n)  |0xcbfd
LD L,SRA (IY+n)   |0xcbfd
LD L',SRL (IX+n)  |0xcbdd
LD L,SRL (IX+n)   |0xcbdd
LD L',SRL (IY+n)  |0xcbfd
LD L,SRL (IY+n)   |0xcbfd
LDDR              |0xb8ed
LDD               |0xa8ed
LDIR              |0xb0ed
LDI               |0xa0ed
NEG               |0x44ed
NOP               |0x00
OR A',A'          |0xb7
OR A,A            |0xb7
OR A',B'          |0xb0
OR A',B           |0xb0
OR A,B'           |0xb0
OR A,B            |0xb0
OR A',C'          |0xb1
OR A',C           |0xb1
OR A,C'           |0xb1
OR A,C            |0xb1
OR A',D'          |0xb2
OR A',D           |0xb2
OR A,D'           |0xb2
OR A,D            |0xb2
OR A',E'          |0xb3
OR A',E           |0xb3
OR A,E'           |0xb3
OR A,E            |0xb3
OR A',H'          |0xb4
OR A',H           |0xb4
OR A,H'           |0xb4
OR A,H            |0xb4
OR A',(HL')       |0xb6
OR A',(HL)        |0xb6
OR A,(HL')        |0xb6
OR A,(HL)         |0xb6
OR A',IXH         |0xb4dd
OR A',HX          |0xb4dd
OR A,IXH          |0xb4dd
OR A,HX           |0xb4dd
OR A',IXL         |0xb5dd
OR A',LX          |0xb5dd
OR A,IXL          |0xb5dd
OR A,LX           |0xb5dd
OR A',(IX+n)      |0xb6dd
OR A,(IX+n)       |0xb6dd
OR A',IYH         |0xb4fd
OR A',HY          |0xb4fd
OR A,IYH          |0xb4fd
OR A,HY           |0xb4fd
OR A',IYL         |0xb5fd
OR A',LY          |0xb5fd
OR A,IYL          |0xb5fd
OR A,LY           |0xb5fd
OR A',(IY+n)      |0xb6fd
OR A,(IY+n)       |0xb6fd
OR A',L'          |0xb5
OR A',L           |0xb5
OR A,L'           |0xb5
OR A,L            |0xb5
OR A',n           |0xf6
OR A,n            |0xf6
OR A'             |0xb7
OR A              |0xb7
OR B'             |0xb0
OR B              |0xb0
OR C'             |0xb1
OR C              |0xb1
OR D'             |0xb2
OR D              |0xb2
OR E'             |0xb3
OR E              |0xb3
OR H'             |0xb4
OR H              |0xb4
OR (HL')          |0xb6
OR (HL)           |0xb6
OR IXH            |0xb4dd
OR HX             |0xb4dd
OR IXL            |0xb5dd
OR LX             |0xb5dd
OR (IX+n)         |0xb6dd
OR IYH            |0xb4fd
OR HY             |0xb4fd
OR IYL            |0xb5fd
OR LY             |0xb5fd
OR (IY+n)         |0xb6fd
OR L'             |0xb5
OR L              |0xb5
OR n              |0xf6
OTDR              |0xbbed
OTIR              |0xb3ed
OUT (C'),0        |0x71ed
OUT (C),0         |0x71ed
OUT (C'),A'       |0x79ed
OUT (C'),A        |0x79ed
OUT (C),A'        |0x79ed
OUT (C),A         |0x79ed
OUT (C'),B'       |0x41ed
OUT (C),B         |0x41ed
OUT (C'),C'       |0x49ed
OUT (C),C         |0x49ed
OUT (C'),D'       |0x51ed
OUT (C),D         |0x51ed
OUT (C'),E'       |0x59ed
OUT (C),E         |0x59ed
OUT (C'),H'       |0x61ed
OUT (C),H         |0x61ed
OUT (C'),L'       |0x69ed
OUT (C),L         |0x69ed
OUT (x),A'        |0xd3
OUT (x),A         |0xd3
OUTD              |0xabed
OUTI              |0xa3ed
POP AF'           |0xf1
POP AF            |0xf1
POP BC'           |0xc1
POP BC            |0xc1
POP DE'           |0xd1
POP DE            |0xd1
POP HL'           |0xe1
POP HL            |0xe1
POP IX            |0xe1dd
POP IY            |0xe1fd
PUSH AF'          |0xf5
PUSH AF           |0xf5
PUSH BC'          |0xc5
PUSH BC           |0xc5
PUSH DE'          |0xd5
PUSH DE           |0xd5
PUSH HL'          |0xe5
PUSH HL           |0xe5
PUSH IX           |0xe5dd
PUSH IY           |0xe5fd
RES 0,A'          |0x87cb
RES 0,A           |0x87cb
RES 0,B'          |0x80cb
RES 0,B           |0x80cb
RES 0,C'          |0x81cb
RES 0,C           |0x81cb
RES 0,D'          |0x82cb
RES 0,D           |0x82cb
RES 0,E'          |0x83cb
RES 0,E           |0x83cb
RES 0,H'          |0x84cb
RES 0,H           |0x84cb
RES 0,(HL')       |0x86cb
RES 0,(HL)        |0x86cb
RES 0,(IX+n)      |0x86cbdd
RES 0,(IY+n)      |0x86cbfd
RES 0,L'          |0x85cb
RES 0,L           |0x85cb
RES 1,A'          |0x8fcb
RES 1,A           |0x8fcb
RES 1,B'          |0x88cb
RES 1,B           |0x88cb
RES 1,C'          |0x89cb
RES 1,C           |0x89cb
RES 1,D'          |0x8acb
RES 1,D           |0x8acb
RES 1,E'          |0x8bcb
RES 1,E           |0x8bcb
RES 1,H'          |0x8ccb
RES 1,H           |0x8ccb
RES 1,(HL')       |0x8ecb
RES 1,(HL)        |0x8ecb
RES 1,(IX+n)      |0x8ecbdd
RES 1,(IY+n)      |0x8ecbfd
RES 1,L'          |0x8dcb
RES 1,L           |0x8dcb
RES 2,A'          |0x97cb
RES 2,A           |0x97cb
RES 2,B'          |0x90cb
RES 2,B           |0x90cb
RES 2,C'          |0x91cb
RES 2,C           |0x91cb
RES 2,D'          |0x92cb
RES 2,D           |0x92cb
RES 2,E'          |0x93cb
RES 2,E           |0x93cb
RES 2,H'          |0x94cb
RES 2,H           |0x94cb
RES 2,(HL')       |0x96cb
RES 2,(HL)        |0x96cb
RES 2,(IX+n)      |0x96cbdd
RES 2,(IY+n)      |0x96cbfd
RES 2,L'          |0x95cb
RES 2,L           |0x95cb
RES 3,A'          |0x9fcb
RES 3,A           |0x9fcb
RES 3,B'          |0x98cb
RES 3,B           |0x98cb
RES 3,C'          |0x99cb
RES 3,C           |0x99cb
RES 3,D'          |0x9acb
RES 3,D           |0x9acb
RES 3,E'          |0x9bcb
RES 3,E           |0x9bcb
RES 3,H'          |0x9ccb
RES 3,H           |0x9ccb
RES 3,(HL')       |0x9ecb
RES 3,(HL)        |0x9ecb
RES 3,(IX+n)      |0x9ecbdd
RES 3,(IY+n)      |0x9ecbfd
RES 3,L'          |0x9dcb
RES 3,L           |0x9dcb
RES 4,A'          |0xa7cb
RES 4,A           |0xa7cb
RES 4,B'          |0xa0cb
RES 4,B           |0xa0cb
RES 4,C'          |0xa1cb
RES 4,C           |0xa1cb
RES 4,D'          |0xa2cb
RES 4,D           |0xa2cb
RES 4,E'          |0xa3cb
RES 4,E           |0xa3cb
RES 4,H'          |0xa4cb
RES 4,H           |0xa4cb
RES 4,(HL')       |0xa6cb
RES 4,(HL)        |0xa6cb
RES 4,(IX+n)      |0xa6cbdd
RES 4,(IY+n)      |0xa6cbfd
RES 4,L'          |0xa5cb
RES 4,L           |0xa5cb
RES 5,A'          |0xafcb
RES 5,A           |0xafcb
RES 5,B'          |0xa8cb
RES 5,B           |0xa8cb
RES 5,C'          |0xa9cb
RES 5,C           |0xa9cb
RES 5,D'          |0xaacb
RES 5,D           |0xaacb
RES 5,E'          |0xabcb
RES 5,E           |0xabcb
RES 5,H'          |0xaccb
RES 5,H           |0xaccb
RES 5,(HL')       |0xaecb
RES 5,(HL)        |0xaecb
RES 5,(IX+n)      |0xaecbdd
RES 5,(IY+n)      |0xaecbfd
RES 5,L'          |0xadcb
RES 5,L           |0xadcb
RES 6,A'          |0xb7cb
RES 6,A           |0xb7cb
RES 6,B'          |0xb0cb
RES 6,B           |0xb0cb
RES 6,C'          |0xb1cb
RES 6,C           |0xb1cb
RES 6,D'          |0xb2cb
RES 6,D           |0xb2cb
RES 6,E'          |0xb3cb
RES 6,E           |0xb3cb
RES 6,H'          |0xb4cb
RES 6,H           |0xb4cb
RES 6,(HL')       |0xb6cb
RES 6,(HL)        |0xb6cb
RES 6,(IX+n)      |0xb6cbdd
RES 6,(IY+n)      |0xb6cbfd
RES 6,L'          |0xb5cb
RES 6,L           |0xb5cb
RES 7,A'          |0xbfcb
RES 7,A           |0xbfcb
RES 7,B'          |0xb8cb
RES 7,B           |0xb8cb
RES 7,C'          |0xb9cb
RES 7,C           |0xb9cb
RES 7,D'          |0xbacb
RES 7,D           |0xbacb
RES 7,E'          |0xbbcb
RES 7,E           |0xbbcb
RES 7,H'          |0xbccb
RES 7,H           |0xbccb
RES 7,(HL')       |0xbecb
RES 7,(HL)        |0xbecb
RES 7,(IX+n)      |0xbecbdd
RES 7,(IY+n)      |0xbecbfd
RES 7,L'          |0xbdcb
RES 7,L           |0xbdcb
RET C             |0xd8
RET M             |0xf8
RET NC            |0xd0
RET NZ            |0xc0
RET P             |0xf0
RET PE            |0xe8
RET PO            |0xe0
RET Z             |0xc8
RET               |0xc9
RETI              |0x4ded
RETN              |0x45ed
RL A'             |0x17cb
RL A              |0x17cb
RL B'             |0x10cb
RL B              |0x10cb
RL C'             |0x11cb
RL C              |0x11cb
RL D'             |0x12cb
RL D              |0x12cb
RL E'             |0x13cb
RL E              |0x13cb
RL H'             |0x14cb
RL H              |0x14cb
RL (HL')          |0x16cb
RL (HL)           |0x16cb
RL (IX+n)         |0x16cbdd
RL (IY+n)         |0x16cbfd
RL L'             |0x15cb
RL L              |0x15cb
RLC A'            |0x7cb
RLC A             |0x7cb
RLC B'            |0xcb
RLC B             |0xcb
RLC C'            |0x1cb
RLC C             |0x1cb
RLC D'            |0x2cb
RLC D             |0x2cb
RLC E'            |0x3cb
RLC E             |0x3cb
RLC H'            |0x4cb
RLC H             |0x4cb
RLC (HL')         |0x6cb
RLC (HL)          |0x6cb
RLC (IX+n)        |0x06cbdd
RLC (IY+n)        |0x06cbfd
RLC L'            |0x5cb
RLC L             |0x5cb
RLCA              |0x7
RLA               |0x17
RLD               |0x6fed
RR A'             |0x1fcb
RR A              |0x1fcb
RR B'             |0x18cb
RR B              |0x18cb
RR C'             |0x19cb
RR C              |0x19cb
RR D'             |0x1acb
RR D              |0x1acb
RR E'             |0x1bcb
RR E              |0x1bcb
RR H'             |0x1ccb
RR H              |0x1ccb
RR (HL')          |0x1ecb
RR (HL)           |0x1ecb
RR (IX+n)         |0x1ecbdd
RR (IY+n)         |0x1ecbfd
RR L'             |0x1dcb
RR L              |0x1dcb
RRA               |0x1f
RRC A'            |0xfcb
RRC A             |0xfcb
RRC B'            |0x8cb
RRC B             |0x8cb
RRC C'            |0x9cb
RRC C             |0x9cb
RRC D'            |0xacb
RRC D             |0xacb
RRC E'            |0xbcb
RRC E             |0xbcb
RRC H'            |0xccb
RRC H             |0xccb
RRC (HL')         |0xecb
RRC (HL)          |0xecb
RRC (IX+n)        |0x0ecbdd
RRC (IY+n)        |0x0ecbfd
RRC L'            |0xdcb
RRC L             |0xdcb
RRCA              |0xf
RRD               |0x67ed
RST 00            |0xc7
RST 08            |0xcf
RST 10            |0xd7
RST 18            |0xdf
RST 20            |0xe7
RST 28            |0xef
RST 30            |0xf7
RST 38            |0xff
RST               |0xc7
SBC A',A'         |0x9f
SBC A,A           |0x9f
SBC A',B'         |0x98
SBC A',B          |0x98
SBC A,B'          |0x98
SBC A,B           |0x98
SBC A',C'         |0x99
SBC A',C          |0x99
SBC A,C'          |0x99
SBC A,C           |0x99
SBC A',D'         |0x9a
SBC A',D          |0x9a
SBC A,D'          |0x9a
SBC A,D           |0x9a
SBC A',E'         |0x9b
SBC A',E          |0x9b
SBC A,E'          |0x9b
SBC A,E           |0x9b
SBC A',H'         |0x9c
SBC A',H          |0x9c
SBC A,H'          |0x9c
SBC A,H           |0x9c
SBC A',(HL')      |0x9e
SBC A',(HL)       |0x9e
SBC A,(HL')       |0x9e
SBC A,(HL)        |0x9e
SBC A',IXH        |0x9cdd
SBC A',HX         |0x9cdd
SBC A,IXH         |0x9cdd
SBC A,HX          |0x9cdd
SBC A',IXL        |0x9ddd
SBC A',LX         |0x9ddd
SBC A,IXL         |0x9ddd
SBC A,LX          |0x9ddd
SBC A',(IX+n)     |0x9edd
SBC A,(IX+n)      |0x9edd
SBC A',IYH        |0x9cfd
SBC A',HY         |0x9cfd
SBC A,IYH         |0x9cfd
SBC A,HY          |0x9cfd
SBC A',IYL        |0x9dfd
SBC A',LY         |0x9dfd
SBC A,IYL         |0x9dfd
SBC A,LY          |0x9dfd
SBC A',(IY+n)     |0x9efd
SBC A,(IY+n)      |0x9efd
SBC A',L'         |0x9d
SBC A',L          |0x9d
SBC A,L'          |0x9d
SBC A,L           |0x9d
SBC A',n          |0xde
SBC A,n           |0xde
SBC HL',BC'       |0x42ed
SBC HL,BC         |0x42ed
SBC HL',DE'       |0x52ed
SBC HL,DE         |0x52ed
SBC HL',HL'       |0x62ed
SBC HL,HL         |0x62ed
SBC HL',SP        |0x72ed
SBC HL,SP         |0x72ed
SBC A'            |0x9f
SBC A             |0x9f
SBC B'            |0x98
SBC B             |0x98
SBC C'            |0x99
SBC C             |0x99
SBC D'            |0x9a
SBC D             |0x9a
SBC E'            |0x9b
SBC E             |0x9b
SBC H'            |0x9c
SBC H             |0x9c
SBC (HL')         |0x9e
SBC (HL)          |0x9e
SBC IXH           |0x9cdd
SBC HX            |0x9cdd
SBC IXL           |0x9ddd
SBC LX            |0x9ddd
SBC (IX+n)        |0x9edd
SBC IYH           |0x9cfd
SBC HY            |0x9cfd
SBC IYL           |0x9dfd
SBC LY            |0x9dfd
SBC (IY+n)        |0x9efd
SBC L'            |0x9d
SBC L             |0x9d
SBC n             |0xde
SCF               |0x37
SET 0,A'          |0xc7cb
SET 0,A           |0xc7cb
SET 0,B'          |0xc0cb
SET 0,B           |0xc0cb
SET 0,C'          |0xc1cb
SET 0,C           |0xc1cb
SET 0,D'          |0xc2cb
SET 0,D           |0xc2cb
SET 0,E'          |0xc3cb
SET 0,E           |0xc3cb
SET 0,H'          |0xc4cb
SET 0,H           |0xc4cb
SET 0,(HL')       |0xc6cb
SET 0,(HL)        |0xc6cb
SET 0,(IX+n)      |0xc6cbdd
SET 0,(IY+n)      |0xc6cbfd
SET 0,L'          |0xc5cb
SET 0,L           |0xc5cb
SET 1,A'          |0xcfcb
SET 1,A           |0xcfcb
SET 1,B'          |0xc8cb
SET 1,B           |0xc8cb
SET 1,C'          |0xc9cb
SET 1,C           |0xc9cb
SET 1,D'          |0xcacb
SET 1,D           |0xcacb
SET 1,E'          |0xcbcb
SET 1,E           |0xcbcb
SET 1,H'          |0xcccb
SET 1,H           |0xcccb
SET 1,(HL')       |0xcecb
SET 1,(HL)        |0xcecb
SET 1,(IX+n)      |0xcecbdd
SET 1,(IY+n)      |0xcecbfd
SET 1,L'          |0xcdcb
SET 1,L           |0xcdcb
SET 2,A'          |0xd7cb
SET 2,A           |0xd7cb
SET 2,B'          |0xd0cb
SET 2,B           |0xd0cb
SET 2,C'          |0xd1cb
SET 2,C           |0xd1cb
SET 2,D'          |0xd2cb
SET 2,D           |0xd2cb
SET 2,E'          |0xd3cb
SET 2,E           |0xd3cb
SET 2,H'          |0xd4cb
SET 2,H           |0xd4cb
SET 2,(HL')       |0xd6cb
SET 2,(HL)        |0xd6cb
SET 2,(IX+n)      |0xd6cbdd
SET 2,(IY+n)      |0xd6cbfd
SET 2,L'          |0xd5cb
SET 2,L           |0xd5cb
SET 3,A'          |0xdfcb
SET 3,A           |0xdfcb
SET 3,B'          |0xd8cb
SET 3,B           |0xd8cb
SET 3,C'          |0xd9cb
SET 3,C           |0xd9cb
SET 3,D'          |0xdacb
SET 3,D           |0xdacb
SET 3,E'          |0xdbcb
SET 3,E           |0xdbcb
SET 3,H'          |0xdccb
SET 3,H           |0xdccb
SET 3,(HL')       |0xdecb
SET 3,(HL)        |0xdecb
SET 3,(IX+n)      |0xdecbdd
SET 3,(IY+n)      |0xdecbfd
SET 3,L'          |0xddcb
SET 3,L           |0xddcb
SET 4,A'          |0xe7cb
SET 4,A           |0xe7cb
SET 4,B'          |0xe0cb
SET 4,B           |0xe0cb
SET 4,C'          |0xe1cb
SET 4,C           |0xe1cb
SET 4,D'          |0xe2cb
SET 4,D           |0xe2cb
SET 4,E'          |0xe3cb
SET 4,E           |0xe3cb
SET 4,H'          |0xe4cb
SET 4,H           |0xe4cb
SET 4,(HL')       |0xe6cb
SET 4,(HL)        |0xe6cb
SET 4,(IX+n)      |0xe6cbdd
SET 4,(IY+n)      |0xe6cbfd
SET 4,L'          |0xe5cb
SET 4,L           |0xe5cb
SET 5,A'          |0xefcb
SET 5,A           |0xefcb
SET 5,B'          |0xe8cb
SET 5,B           |0xe8cb
SET 5,C'          |0xe9cb
SET 5,C           |0xe9cb
SET 5,D'          |0xeacb
SET 5,D           |0xeacb
SET 5,E'          |0xebcb
SET 5,E           |0xebcb
SET 5,H'          |0xeccb
SET 5,H           |0xeccb
SET 5,(HL')       |0xeecb
SET 5,(HL)        |0xeecb
SET 5,(IX+n)      |0xeecbdd
SET 5,(IY+n)      |0xeecbfd
SET 5,L'          |0xedcb
SET 5,L           |0xedcb
SET 6,A'          |0xf7cb
SET 6,A           |0xf7cb
SET 6,B'          |0xf0cb
SET 6,B           |0xf0cb
SET 6,C'          |0xf1cb
SET 6,C           |0xf1cb
SET 6,D'          |0xf2cb
SET 6,D           |0xf2cb
SET 6,E'          |0xf3cb
SET 6,E           |0xf3cb
SET 6,H'          |0xf4cb
SET 6,H           |0xf4cb
SET 6,(HL')       |0xf6cb
SET 6,(HL)        |0xf6cb
SET 6,(IX+n)      |0xf6cbdd
SET 6,(IY+n)      |0xf6cbfd
SET 6,L'          |0xf5cb
SET 6,L           |0xf5cb
SET 7,A'          |0xffcb
SET 7,A           |0xffcb
SET 7,B'          |0xf8cb
SET 7,B           |0xf8cb
SET 7,C'          |0xf9cb
SET 7,C           |0xf9cb
SET 7,D'          |0xfacb
SET 7,D           |0xfacb
SET 7,E'          |0xfbcb
SET 7,E           |0xfbcb
SET 7,H'          |0xfccb
SET 7,H           |0xfccb
SET 7,(HL')       |0xfecb
SET 7,(HL)        |0xfecb
SET 7,(IX+n)      |0xfecbdd
SET 7,(IY+n)      |0xfecbfd
SET 7,L'          |0xfdcb
SET 7,L           |0xfdcb
SLA A'            |0x27cb
SLA A             |0x27cb
SLA B'            |0x20cb
SLA B             |0x20cb
SLA C'            |0x21cb
SLA C             |0x21cb
SLA D'            |0x22cb
SLA D             |0x22cb
SLA E'            |0x23cb
SLA E             |0x23cb
SLA H'            |0x24cb
SLA H             |0x24cb
SLA (HL')         |0x26cb
SLA (HL)          |0x26cb
SLA (IX+n)        |0x26cbdd
SLA (IY+n)        |0x26cbfd
SLA L'            |0x25cb
SLA L             |0x25cb
SLL A'            |0x37cb
SLL A             |0x37cb
SLL B'            |0x30cb
SLL B             |0x30cb
SLL C'            |0x31cb
SLL C             |0x31cb
SLL D'            |0x32cb
SLL D             |0x32cb
SLL E'            |0x33cb
SLL E             |0x33cb
SLL H'            |0x34cb
SLL H             |0x34cb
SLL (HL')         |0x36cb
SLL (HL)          |0x36cb
SLL (IX+n)        |0x36cbdd
SLL (IY+n)        |0x36cbfd
SLL L'            |0x35cb
SLL L             |0x35cb
SRA A'            |0x2fcb
SRA A             |0x2fcb
SRA B'            |0x28cb
SRA B             |0x28cb
SRA C'            |0x29cb
SRA C             |0x29cb
SRA D'            |0x2acb
SRA D             |0x2acb
SRA E'            |0x2bcb
SRA E             |0x2bcb
SRA H'            |0x2ccb
SRA H             |0x2ccb
SRA (HL')         |0x2ecb
SRA (HL)          |0x2ecb
SRA (IX+n)        |0x2ecbdd
SRA (IY+n)        |0x2ecbfd
SRA L'            |0x2dcb
SRA L             |0x2dcb
SRL A'            |0x3fcb
SRL A             |0x3fcb
SRL B'            |0x38cb
SRL B             |0x38cb
SRL C'            |0x39cb
SRL C             |0x39cb
SRL D'            |0x3acb
SRL D             |0x3acb
SRL E'            |0x3bcb
SRL E             |0x3bcb
SRL H'            |0x3ccb
SRL H             |0x3ccb
SRL (HL')         |0x3ecb
SRL (HL)          |0x3ecb
SRL (IX+n)        |0x3ecbdd
SRL (IY+n)        |0x3ecbfd
SRL L'            |0x3dcb
SRL L             |0x3dcb
SUB A',A'         |0x97
SUB A,A           |0x97
SUB A',B'         |0x90
SUB A',B          |0x90
SUB A,B'          |0x90
SUB A,B           |0x90
SUB A',C'         |0x91
SUB A',C          |0x91
SUB A,C'          |0x91
SUB A,C           |0x91
SUB A',D'         |0x92
SUB A',D          |0x92
SUB A,D'          |0x92
SUB A,D           |0x92
SUB A',E'         |0x93
SUB A',E          |0x93
SUB A,E'          |0x93
SUB A,E           |0x93
SUB A',H'         |0x94
SUB A',H          |0x94
SUB A,H'          |0x94
SUB A,H           |0x94
SUB A',L'         |0x95
SUB A',L          |0x95
SUB A,L'          |0x95
SUB A,L           |0x95
SUB A',IXH        |0x94dd
SUB A',HX         |0x94dd
SUB A,IXH         |0x94dd
SUB A,HX          |0x94dd
SUB A',IXL        |0x95dd
SUB A',LX         |0x95dd
SUB A,IXL         |0x95dd
SUB A,LX          |0x95dd
SUB A',(IX+n)     |0x96dd
SUB A,(IX+n)      |0x96dd
SUB A',(IY+n)     |0x96fd
SUB A,(IY+n)      |0x96fd
SUB A',(HL')      |0x96
SUB A',(HL)       |0x96
SUB A,(HL')       |0x96
SUB A,(HL)        |0x96
SUB A',IYH        |0x94fd
SUB A',HY         |0x94fd
SUB A,IYH         |0x94fd
SUB A,HY          |0x94fd
SUB A',IYL        |0x95fd
SUB A',LY         |0x95fd
SUB A,IYL         |0x95fd
SUB A,LY          |0x95fd
SUB A',n          |0xd6
SUB A,n           |0xd6
SUB A'            |0x97
SUB A             |0x97
SUB B'            |0x90
SUB B             |0x90
SUB C'            |0x91
SUB C             |0x91
SUB D'            |0x92
SUB D             |0x92
SUB E'            |0x93
SUB E             |0x93
SUB H'            |0x94
SUB H             |0x94
SUB (HL')         |0x96
SUB (HL)          |0x96
SUB IXH           |0x94dd
SUB HX            |0x94dd
SUB IXL           |0x95dd
SUB LX            |0x95dd
SUB IYH           |0x94fd
SUB HY            |0x94fd
SUB IYL           |0x95fd
SUB LY            |0x95fd
SUB (IX+n)        |0x96dd
SUB (IY+n)        |0x96fd
SUB L'            |0x95
SUB L             |0x95
SUB n             |0xd6
XOR A',A'         |0xaf
XOR A,A           |0xaf
XOR A',B'         |0xa8
XOR A',B          |0xa8
XOR A,B'          |0xa8
XOR A,B           |0xa8
XOR A',C'         |0xa9
XOR A',C          |0xa9
XOR A,C'          |0xa9
XOR A,C           |0xa9
XOR A',D'         |0xaa
XOR A',D          |0xaa
XOR A,D'          |0xaa
XOR A,D           |0xaa
XOR A',E'         |0xab
XOR A',E          |0xab
XOR A,E'          |0xab
XOR A,E           |0xab
XOR A',H'         |0xac
XOR A',H          |0xac
XOR A,H'          |0xac
XOR A,H           |0xac
XOR A',(HL')      |0xae
XOR A',(HL)       |0xae
XOR A,(HL')       |0xae
XOR A,(HL)        |0xae
XOR A',IXH        |0xacdd
XOR A',HX         |0xacdd
XOR A,IXH         |0xacdd
XOR A,HX          |0xacdd
XOR A',IXL        |0xaddd
XOR A',LX         |0xaddd
XOR A,IXL         |0xaddd
XOR A,LX          |0xaddd
XOR A',(IX+n)     |0xaedd
XOR A,(IX+n)      |0xaedd
XOR A',IYH        |0xacfd
XOR A',HY         |0xacfd
XOR A,IYH         |0xacfd
XOR A,HY          |0xacfd
XOR A',IYL        |0xadfd
XOR A',LY         |0xadfd
XOR A,IYL         |0xadfd
XOR A,LY          |0xadfd
XOR A',(IY+n)     |0xaefd
XOR A,(IY+n)      |0xaefd
XOR A',L'         |0xad
XOR A',L          |0xad
XOR A,L'          |0xad
XOR A,L           |0xad
XOR A',n          |0xee
XOR A,n           |0xee
XOR A'            |0xaf
XOR A             |0xaf
XOR B'            |0xa8
XOR B             |0xa8
XOR C'            |0xa9
XOR C             |0xa9
XOR D'            |0xaa
XOR D             |0xaa
XOR E'            |0xab
XOR E             |0xab
XOR H'            |0xac
XOR H             |0xac
XOR (HL')         |0xae
XOR (HL)          |0xae
XOR IXH           |0xacdd
XOR HX            |0xacdd
XOR IXL           |0xaddd
XOR LX            |0xaddd
XOR (IX+n)        |0xaedd
XOR IYH           |0xacfd
XOR HY            |0xacfd
XOR IYL           |0xadfd
XOR LY            |0xadfd
XOR (IY+n)        |0xaefd
XOR L'            |0xad
XOR L             |0xad
XOR n             |0xee
E                 |0x100
)CSV";

static void toUpper(string& str) {
    std::for_each(str.begin(), str.end(), [](char& c) { c = (char) std::toupper(c); });
}

static void removeAllWhiteSpaces(string& str) {
    std::regex match(" ");

    str = std::regex_replace(str, regex{" "}, "");
}

Z80InstructionEncoder::Z80InstructionEncoder() {
    initializeInstructionTable();
}

std::vector<unsigned char> Z80InstructionEncoder::encodeInstructionWithoutImmediateBytes(std::string_view instruction) {
    if (instructionHasImmediateBytes(instruction)) {
        throw std::runtime_error("The Instruction (" + string(instruction) + ") has immediate bytes.");
    }

    vector<unsigned char> bytes;

    auto opCode = performInstructionLookup(instruction);

    buildBytes(opCode, bytes);

    return bytes;
}

std::vector<unsigned char>
Z80InstructionEncoder::encodeInstructionWithImmediateBytes(std::string_view instruction,
                                                           std::vector<unsigned char> immediateBytes) { // NOLINT
    if (!instructionHasImmediateBytes(instruction)) {
        throw std::runtime_error("The instruction (" + string(instruction) + ") doesn't have any immediate bytes.");
    }

    vector<unsigned char> bytes;

    auto opCode = performInstructionLookup(instruction);

    buildBytes(opCode, bytes);

    for (auto& immediateByte : immediateBytes) {
        bytes.push_back(immediateByte);
    }

    return bytes;

}

int Z80InstructionEncoder::performInstructionLookup(std::string_view instruction) { // NOLINT
    string keyString = instructionToKey(instruction);


    if (instructionTable.count(keyString) > 0) {
        return instructionTable[keyString];
    }

    throw std::runtime_error("Unknown instruction (" + string(instruction) + ").");
}


void Z80InstructionEncoder::buildBytes(int opCode, std::vector<unsigned char>& bytes) { // NOLINT
    if (opCode > 0x00ffff) {
        auto thirdByte = (opCode & 0xFF); // NOLINT
        auto secondByte = (opCode >> 8) & 0xFF;//NOLINT
        auto firstByte = (opCode >> 16) & 0xFF;//NOLINT

        bytes.push_back(thirdByte);
        bytes.push_back(secondByte);
        bytes.push_back(firstByte);
    } else if (opCode > 0xFF) {
        auto secondByte = (opCode & 0xFF); // NOLINT
        auto firstByte = (opCode >> 8) & 0xFF;//NOLINT

        bytes.push_back(secondByte);
        bytes.push_back(firstByte);
    } else {
        bytes.push_back(opCode);
    }
}

std::string Z80InstructionEncoder::instructionToKey(std::string_view instruction) { // NOLINT
    std::string str = string(instruction);
    toUpper(str);
    removeAllWhiteSpaces(str);

    return str;
}

bool Z80InstructionEncoder::instructionHasImmediateBytes(std::string_view& instruction) { // NOLINT
    return regex_match(string(instruction), RE_IMMEDIATE_DATA_PATTERN);
}

void Z80InstructionEncoder::initializeInstructionTable() {
    stringstream ss;
    ss << CSV_STRING;

    CSVReader<2, trim_chars<' ', '\t'>, no_quote_escape<'|'>> in(string{"im_memory.csv"}, ss);

    string opCodeString;
    string instruction;

    while (in.read_row(instruction, opCodeString)) {
        auto key = instructionToKey(instruction);

        instructionTable[key] = stoi(opCodeString, nullptr, 16);
    }
}

#include <cstdarg>

std::vector<unsigned char> Z80InstructionEncoder::encodeInstructionWithImmediateBytes(std::string_view instruction, int numberOfBytes, ...) {
    std::va_list args;
    std::vector<unsigned char> vec{};

    va_start(args, numberOfBytes);

    for (int i = 0; i < numberOfBytes; ++i) {
        auto ch = va_arg(args, int); // NOLINT
        vec.push_back(ch);
    }

    va_end(args);

    return encodeInstructionWithImmediateBytes(instruction, vec);
}
