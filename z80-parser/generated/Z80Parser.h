
// Generated from Z80.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  Z80Parser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, T__37 = 38, 
    T__38 = 39, T__39 = 40, T__40 = 41, T__41 = 42, T__42 = 43, T__43 = 44, 
    T__44 = 45, T__45 = 46, T__46 = 47, T__47 = 48, T__48 = 49, T__49 = 50, 
    T__50 = 51, T__51 = 52, T__52 = 53, T__53 = 54, T__54 = 55, T__55 = 56, 
    T__56 = 57, T__57 = 58, T__58 = 59, T__59 = 60, T__60 = 61, T__61 = 62, 
    T__62 = 63, T__63 = 64, T__64 = 65, T__65 = 66, T__66 = 67, T__67 = 68, 
    T__68 = 69, T__69 = 70, T__70 = 71, T__71 = 72, T__72 = 73, T__73 = 74, 
    T__74 = 75, T__75 = 76, T__76 = 77, T__77 = 78, T__78 = 79, T__79 = 80, 
    T__80 = 81, T__81 = 82, T__82 = 83, T__83 = 84, T__84 = 85, T__85 = 86, 
    T__86 = 87, T__87 = 88, T__88 = 89, T__89 = 90, T__90 = 91, T__91 = 92, 
    T__92 = 93, T__93 = 94, T__94 = 95, T__95 = 96, T__96 = 97, T__97 = 98, 
    T__98 = 99, T__99 = 100, T__100 = 101, T__101 = 102, T__102 = 103, T__103 = 104, 
    T__104 = 105, T__105 = 106, T__106 = 107, T__107 = 108, T__108 = 109, 
    T__109 = 110, T__110 = 111, T__111 = 112, T__112 = 113, T__113 = 114, 
    T__114 = 115, T__115 = 116, T__116 = 117, T__117 = 118, T__118 = 119, 
    T__119 = 120, T__120 = 121, T__121 = 122, T__122 = 123, T__123 = 124, 
    T__124 = 125, T__125 = 126, T__126 = 127, T__127 = 128, T__128 = 129, 
    T__129 = 130, T__130 = 131, T__131 = 132, T__132 = 133, T__133 = 134, 
    T__134 = 135, T__135 = 136, T__136 = 137, T__137 = 138, T__138 = 139, 
    T__139 = 140, T__140 = 141, T__141 = 142, T__142 = 143, T__143 = 144, 
    T__144 = 145, T__145 = 146, T__146 = 147, T__147 = 148, T__148 = 149, 
    T__149 = 150, T__150 = 151, T__151 = 152, T__152 = 153, T__153 = 154, 
    T__154 = 155, T__155 = 156, T__156 = 157, T__157 = 158, T__158 = 159, 
    T__159 = 160, T__160 = 161, T__161 = 162, T__162 = 163, T__163 = 164, 
    T__164 = 165, T__165 = 166, T__166 = 167, T__167 = 168, T__168 = 169, 
    T__169 = 170, T__170 = 171, T__171 = 172, T__172 = 173, T__173 = 174, 
    T__174 = 175, T__175 = 176, T__176 = 177, T__177 = 178, T__178 = 179, 
    T__179 = 180, T__180 = 181, T__181 = 182, T__182 = 183, T__183 = 184, 
    T__184 = 185, T__185 = 186, T__186 = 187, T__187 = 188, T__188 = 189, 
    T__189 = 190, T__190 = 191, T__191 = 192, T__192 = 193, T__193 = 194, 
    T__194 = 195, T__195 = 196, T__196 = 197, T__197 = 198, T__198 = 199, 
    T__199 = 200, T__200 = 201, T__201 = 202, T__202 = 203, T__203 = 204, 
    T__204 = 205, T__205 = 206, T__206 = 207, T__207 = 208, T__208 = 209, 
    T__209 = 210, T__210 = 211, T__211 = 212, T__212 = 213, T__213 = 214, 
    T__214 = 215, T__215 = 216, T__216 = 217, T__217 = 218, T__218 = 219, 
    T__219 = 220, T__220 = 221, T__221 = 222, T__222 = 223, T__223 = 224, 
    T__224 = 225, DECIMAL = 226, HEX_DIGITS_1 = 227, HEX_DIGITS_2 = 228, 
    HEX_DIGITS_3 = 229, NAME = 230, CHAR = 231, STRING = 232, COMMENT = 233, 
    EOL = 234, WS = 235
  };

  enum {
    RuleProgram = 0, RuleStatement = 1, RuleInstruction = 2, RuleAShadowRegister = 3, 
    RuleFShadowRegister = 4, RuleBShadowRegister = 5, RuleCShadowRegister = 6, 
    RuleDShadowRegister = 7, RuleEShadowRegister = 8, RuleHShadowRegister = 9, 
    RuleLShadowRegister = 10, RuleARegister = 11, RuleFRegister = 12, RuleAfRegister = 13, 
    RuleAfShadowRegister = 14, RuleBcShadowRegister = 15, RuleDeShadowRegister = 16, 
    RuleHlShadowRegister = 17, RuleBRegister = 18, RuleCRegister = 19, RuleBcRegister = 20, 
    RuleDRegister = 21, RuleERegister = 22, RuleDeRegister = 23, RuleHRegister = 24, 
    RuleLRegister = 25, RuleHlRegister = 26, RuleIRegister = 27, RuleRRegister = 28, 
    RuleIxRegister = 29, RuleIyRegister = 30, RuleIxHighRegister = 31, RuleIxLowRegister = 32, 
    RuleIyHighRegister = 33, RuleIyLowRegister = 34, RuleSpRegister = 35, 
    RulePcRegister = 36, RuleHlPointer = 37, RuleBcPointer = 38, RuleDePointer = 39, 
    RuleSpPointer = 40, RuleCPointer = 41, RuleIxPointerWithOffset = 42, 
    RuleIyPointerWithOffset = 43, RuleNumberPointer = 44, RuleSimpleByteRegister = 45, 
    RuleLoadCommandName = 46, RuleLoadByteRegisterWithByteRegister = 47, 
    RuleLoadByteRegisterWithImmediateByte = 48, RuleLoadByteRegisterWithHLPointer = 49, 
    RuleLoadByteRegisterWithIXOffset = 50, RuleLoadByteRegisterWithIYOffset = 51, 
    RuleLoadHLPointerWithRegister = 52, RuleLoadIXOffsetWithRegister = 53, 
    RuleLoadIYOffsetWithRegister = 54, RuleLoadHLPointerWithImmediateByte = 55, 
    RuleLoadIXOffsetWithImmediateByte = 56, RuleLoadIYOffsetWithImmediateByte = 57, 
    RuleLoadAWithBCPointer = 58, RuleLoadAWithDEPointer = 59, RuleLoadAWithNNPointer = 60, 
    RuleLoadBCPointerWithA = 61, RuleLoadDEPointerWithA = 62, RuleLoadNNPointerWithA = 63, 
    RuleLoadAWithI = 64, RuleLoadAWithR = 65, RuleLoadIWithA = 66, RuleLoadRWithA = 67, 
    RuleLoadRegisterWithIXHigh = 68, RuleLoadRegisterWithIXLow = 69, RuleLoadRegisterWithIYHigh = 70, 
    RuleLoadRegisterWithIYLow = 71, RuleLoadIXHighWithRegister = 72, RuleIxHighOrLowRegister = 73, 
    RuleIyHighOrLowRegister = 74, RuleLoadIXNibbles = 75, RuleLoadIYNibbles = 76, 
    RuleLoadIXLowWithRegister = 77, RuleLoadIYHighWithRegister = 78, RuleLoadIYLowWithRegister = 79, 
    RuleByteLoadCommand = 80, RuleSimpleWordRegister = 81, RuleLoadWordWithImmediateWord = 82, 
    RuleLoadIXWithImmediateWord = 83, RuleLoadIYWithImmediateWord = 84, 
    RuleLoadWordRegisterWithNNPointer = 85, RuleLoadIXWithNNPointer = 86, 
    RuleLoadIYWithNNPointer = 87, RuleLoadNNPointerWithWordRegister = 88, 
    RuleLoadNNPointerWithIX = 89, RuleLoadNNPointerWithIY = 90, RuleLoadSPWithHL = 91, 
    RuleLoadSPWithIX = 92, RuleLoadSPWithIY = 93, RulePushCommandName = 94, 
    RulePopCommandName = 95, RulePushAndPopRegister = 96, RulePushWordRegister = 97, 
    RulePushIX = 98, RulePushIY = 99, RulePopWordRegister = 100, RulePopIX = 101, 
    RulePopIY = 102, RuleWordLoadCommand = 103, RuleExchangeCommandName = 104, 
    RuleExchangeDEWithHL = 105, RuleExchangeAFWithShadowAF = 106, RuleExchangeMultipleWordRegisters = 107, 
    RuleExchangeSPPointerWithHL = 108, RuleExchangeSPPointerWithIX = 109, 
    RuleExchangeSPPointerWithIY = 110, RuleLoadHLPointerIntoDEThenDecrementBCAndIncrementHL = 111, 
    RuleLoadDEPointerWithHLPointerThenDecrementBCAndIncrementHLRepeat = 112, 
    RuleLoadDEPointerWithHLPointerThenDecrementBCAndHL = 113, RuleLoadDEPointerWithHLPointerThenDecrementBCAndHLRepeat = 114, 
    RuleCompareAToHLPointerThenIncrementHLAndDecrementBC = 115, RuleCompareAToHLPointerThenIncrementHLAndDecrementBCRepeat = 116, 
    RuleCompareAToHLPointerThenDecrementHLAndBC = 117, RuleCompareAToHLPointerThenDecrementHLAndBCRepeat = 118, 
    RuleExchagneAndBlockTransfrerCommand = 119, RuleAddCommandName = 120, 
    RuleAddWithCarryCommandName = 121, RuleSubtractCommandName = 122, RuleSubtractWithBorrowCommandName = 123, 
    RuleAndCommandName = 124, RuleOrCommandName = 125, RuleXorCommandName = 126, 
    RuleCompareCommandName = 127, RuleIncrementCommandName = 128, RuleDecrementCommandName = 129, 
    RuleAddAAndRegister = 130, RuleAddAAndImmediateByte = 131, RuleAddAAndIXH = 132, 
    RuleAddAAndIXL = 133, RuleAddAAndIYH = 134, RuleAddAAndIYL = 135, RuleAddAAndHLPointer = 136, 
    RuleAddAAndIXOffset = 137, RuleAddAAndIYOffset = 138, RuleAddWithCarryAAndRegister = 139, 
    RuleAddWithCarryAAndHLPointer = 140, RuleAddWithCarryAAndImmediate = 141, 
    RuleAddWithCarryAAndIXOffset = 142, RuleAddWithCarryAAndIYOffset = 143, 
    RuleAddWithCarryAAndIXH = 144, RuleAddWithCarryAAndIXL = 145, RuleAddWithCarryAAndIYH = 146, 
    RuleAddWithCarryAAndIYL = 147, RuleSubtractRegisterFromA = 148, RuleSubtractHLPointerFromA = 149, 
    RuleSubtractImmediateFromA = 150, RuleSubtractIXOffsetFromA = 151, RuleSubtractIYOffsetFromA = 152, 
    RuleSubtractIXHighOrLowFromA = 153, RuleSubtractIYHighOrLowFromA = 154, 
    RuleSubtractWithBorrowRegisterFromA = 155, RuleSubtractWithBorrowHLPointerFromA = 156, 
    RuleSubtractWithBorrowIXOffsetFromA = 157, RuleSubtractWithBorrowIYOffsetFromA = 158, 
    RuleSubtractWithBorrowImmediateFromA = 159, RuleSubtractWithBorrowIXHFromA = 160, 
    RuleSubtractWithBorrowIXLFromA = 161, RuleSubtractWithBorrowIYHFromA = 162, 
    RuleSubtractWithBorrowIYLFromA = 163, RuleAndAWithRegister = 164, RuleAndAWithImmediate = 165, 
    RuleAndAWithHLPointer = 166, RuleAndAWithIXOffset = 167, RuleAndAWithIYOffset = 168, 
    RuleAndAWithIXH = 169, RuleAndAWithIXL = 170, RuleAndAWithIYH = 171, 
    RuleAndAWithIYL = 172, RuleOrAWithRegister = 173, RuleOrAWithImmediate = 174, 
    RuleOrAWithHLPointer = 175, RuleOrAWithIXOffset = 176, RuleOrAWithIYOffset = 177, 
    RuleOrAWithIXH = 178, RuleOrAWithIXL = 179, RuleOrAWithIYH = 180, RuleOrAWithIYL = 181, 
    RuleXorAWithRegister = 182, RuleXorAWithImmediate = 183, RuleXorAWithHLPointer = 184, 
    RuleXorAWithIXOffset = 185, RuleXorAWithIYOffset = 186, RuleXorAWithIXH = 187, 
    RuleXorAWithIXL = 188, RuleXorAWithIYH = 189, RuleXorAWithIYL = 190, 
    RuleCompareAWithRegister = 191, RuleCompareAWithHLPointer = 192, RuleCompareAWithImmediate = 193, 
    RuleCompareAWithIXOffset = 194, RuleCompareAWithIYOffset = 195, RuleCompareAWithIXH = 196, 
    RuleCompareAWithIXL = 197, RuleCompareAWithIYH = 198, RuleCompareAWithIYL = 199, 
    RuleIncrementRegister = 200, RuleIncrementIXH = 201, RuleIncrementIXL = 202, 
    RuleIncrementIYH = 203, RuleIncrementIYL = 204, RuleIncrementHLPointer = 205, 
    RuleIncrementIXOffset = 206, RuleIncrementIYOffset = 207, RuleDecrementRegister = 208, 
    RuleDecrementIXH = 209, RuleDecrementIXL = 210, RuleDecrementIYH = 211, 
    RuleDecrementIYL = 212, RuleDecrementHLPointer = 213, RuleDecrementIXOffset = 214, 
    RuleDecrementIYOffset = 215, RuleArithmeticCommand = 216, RuleDecimalAdjustA = 217, 
    RuleComplementA = 218, RuleNegateA = 219, RuleComplementCarryFlag = 220, 
    RuleSetCarryFlag = 221, RuleNop = 222, RuleHalt = 223, RuleDisableInterrupts = 224, 
    RuleEnableInterrupts = 225, RuleSetInterruptMode = 226, RuleArithmeticControlCommand = 227, 
    RuleAddHLAndWordRegister = 228, RuleAddWithCarryHLAndWordRegister = 229, 
    RuleSubtractWithCarryWordRegisterFromHL = 230, RuleSimpleIXAdditionRegister = 231, 
    RuleSimpleIYAdditionRegister = 232, RuleAddIXWithRegister = 233, RuleAddIYWithRegister = 234, 
    RuleIncrementWordRegister = 235, RuleIncrementIX = 236, RuleIncrementIY = 237, 
    RuleDecrementWordRegister = 238, RuleDecrementIX = 239, RuleDecrementIY = 240, 
    RuleWordArithemeticCommand = 241, RuleRotateLeftCircularA = 242, RuleRotateLeftThroughCarryA = 243, 
    RuleRotateRightCircularA = 244, RuleRotateRightThroughCarryA = 245, 
    RuleRotateLeftCircularCommandName = 246, RuleRotateLeftThroughCarryCommandName = 247, 
    RuleRotateRightCircularCommandName = 248, RuleRotateRightThroughCarryCommandName = 249, 
    RuleShiftLeftArithmeticCommandName = 250, RuleShiftLeftLogicalCommandName = 251, 
    RuleShiftRightArithmeticCommandName = 252, RuleShiftRightLogicalCommandName = 253, 
    RuleRotateDigitLeftCommandName = 254, RuleRotateDigitRightCommandName = 255, 
    RuleRotateLeftCircularRegister = 256, RuleRotateLeftCircularHLPointer = 257, 
    RuleRotateLeftCircularIXOffset = 258, RuleRotateLeftCircularIYOffset = 259, 
    RuleRotateLeftThroughCarryRegister = 260, RuleRotateLeftThroughCarryHLPointer = 261, 
    RuleRotateLeftThroughCarryIXOffset = 262, RuleRotateLeftThroughCarryIYOffset = 263, 
    RuleRotateRightCircularRegister = 264, RuleRotateRightCircularHLPointer = 265, 
    RuleRotateRightCircularIXOffset = 266, RuleRotateRightCircularIYOffset = 267, 
    RuleRotateRightThroughCarryRegister = 268, RuleRotateRightThroughCarryHLPointer = 269, 
    RuleRotateRightThroughCarryIXOffset = 270, RuleRotateRightThroughCarryIYOffset = 271, 
    RuleShiftLeftArithmetic = 272, RuleShiftLeftLogical = 273, RuleShiftRightArithmetic = 274, 
    RuleShiftRightLogical = 275, RuleRotateDigitLeft = 276, RuleRotateDigitRight = 277, 
    RuleRotateCommand = 278, RuleBitCommandName = 279, RuleSetCommandName = 280, 
    RuleResetBitCommandName = 281, RuleTestBitInRegister = 282, RuleTestBitInHLPointer = 283, 
    RuleTestBitInIXOffset = 284, RuleTestBitInIYOffset = 285, RuleSetBitInRegister = 286, 
    RuleSetBitInHLPointer = 287, RuleSetBitInIXOffset = 288, RuleSetBitInIYOffset = 289, 
    RuleResetBitInRegister = 290, RuleResetBitHLPointer = 291, RuleResetBitIXOffset = 292, 
    RuleResetBitIYOffset = 293, RuleBitManipulationCommand = 294, RuleJumpCondition = 295, 
    RuleJumpCommandName = 296, RuleJumpRelativeCommandName = 297, RuleJumpRelativeAndDecrementCommandName = 298, 
    RuleCallCommandName = 299, RuleReturnCommandName = 300, RuleReturnAndEnableInterruptCommandName = 301, 
    RuleReturnFromNonMaskableInterruptCommandName = 302, RuleRestartCommandName = 303, 
    RuleJumpToAbsoluteAddress = 304, RuleJumpToAbsoluteAddressGivenCondition = 305, 
    RuleJumpToRelativeAddress = 306, RuleJumpToRelativeAddressGivenCondition = 307, 
    RuleJumpToHL = 308, RuleJumpToIX = 309, RuleJumpToIY = 310, RuleJumpRelativeAndDecrement = 311, 
    RuleCallSubroutine = 312, RuleCallSubroutineWithCondition = 313, RuleReturnFromSubroutine = 314, 
    RuleReturnFromSubroutineGivenCondition = 315, RuleReturnAndEnableInterrupt = 316, 
    RuleReturnFromNonMaskableInterrupt = 317, RuleRestartCommand = 318, 
    RuleBranchCommand = 319, RuleInputCommandName = 320, RuleOutCommandName = 321, 
    RuleInputDataIntoA = 322, RuleInputDataIntoRegister = 323, RuleIni = 324, 
    RuleInir = 325, RuleInd = 326, RuleIndr = 327, RuleOutputAIntoDataPointer = 328, 
    RuleOutputRegisterIntoCPointer = 329, RuleOuti = 330, RuleOtir = 331, 
    RuleOutd = 332, RuleOtdr = 333, RuleInputAndOutpuCommand = 334, RuleLabel = 335, 
    RuleOrgDirective = 336, RuleCharNumber = 337, RuleName = 338, RuleNumber = 339, 
    RuleDecimalNumber = 340, RuleHexNumber = 341, RuleComment = 342
  };

  Z80Parser(antlr4::TokenStream *input);
  ~Z80Parser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgramContext;
  class StatementContext;
  class InstructionContext;
  class AShadowRegisterContext;
  class FShadowRegisterContext;
  class BShadowRegisterContext;
  class CShadowRegisterContext;
  class DShadowRegisterContext;
  class EShadowRegisterContext;
  class HShadowRegisterContext;
  class LShadowRegisterContext;
  class ARegisterContext;
  class FRegisterContext;
  class AfRegisterContext;
  class AfShadowRegisterContext;
  class BcShadowRegisterContext;
  class DeShadowRegisterContext;
  class HlShadowRegisterContext;
  class BRegisterContext;
  class CRegisterContext;
  class BcRegisterContext;
  class DRegisterContext;
  class ERegisterContext;
  class DeRegisterContext;
  class HRegisterContext;
  class LRegisterContext;
  class HlRegisterContext;
  class IRegisterContext;
  class RRegisterContext;
  class IxRegisterContext;
  class IyRegisterContext;
  class IxHighRegisterContext;
  class IxLowRegisterContext;
  class IyHighRegisterContext;
  class IyLowRegisterContext;
  class SpRegisterContext;
  class PcRegisterContext;
  class HlPointerContext;
  class BcPointerContext;
  class DePointerContext;
  class SpPointerContext;
  class CPointerContext;
  class IxPointerWithOffsetContext;
  class IyPointerWithOffsetContext;
  class NumberPointerContext;
  class SimpleByteRegisterContext;
  class LoadCommandNameContext;
  class LoadByteRegisterWithByteRegisterContext;
  class LoadByteRegisterWithImmediateByteContext;
  class LoadByteRegisterWithHLPointerContext;
  class LoadByteRegisterWithIXOffsetContext;
  class LoadByteRegisterWithIYOffsetContext;
  class LoadHLPointerWithRegisterContext;
  class LoadIXOffsetWithRegisterContext;
  class LoadIYOffsetWithRegisterContext;
  class LoadHLPointerWithImmediateByteContext;
  class LoadIXOffsetWithImmediateByteContext;
  class LoadIYOffsetWithImmediateByteContext;
  class LoadAWithBCPointerContext;
  class LoadAWithDEPointerContext;
  class LoadAWithNNPointerContext;
  class LoadBCPointerWithAContext;
  class LoadDEPointerWithAContext;
  class LoadNNPointerWithAContext;
  class LoadAWithIContext;
  class LoadAWithRContext;
  class LoadIWithAContext;
  class LoadRWithAContext;
  class LoadRegisterWithIXHighContext;
  class LoadRegisterWithIXLowContext;
  class LoadRegisterWithIYHighContext;
  class LoadRegisterWithIYLowContext;
  class LoadIXHighWithRegisterContext;
  class IxHighOrLowRegisterContext;
  class IyHighOrLowRegisterContext;
  class LoadIXNibblesContext;
  class LoadIYNibblesContext;
  class LoadIXLowWithRegisterContext;
  class LoadIYHighWithRegisterContext;
  class LoadIYLowWithRegisterContext;
  class ByteLoadCommandContext;
  class SimpleWordRegisterContext;
  class LoadWordWithImmediateWordContext;
  class LoadIXWithImmediateWordContext;
  class LoadIYWithImmediateWordContext;
  class LoadWordRegisterWithNNPointerContext;
  class LoadIXWithNNPointerContext;
  class LoadIYWithNNPointerContext;
  class LoadNNPointerWithWordRegisterContext;
  class LoadNNPointerWithIXContext;
  class LoadNNPointerWithIYContext;
  class LoadSPWithHLContext;
  class LoadSPWithIXContext;
  class LoadSPWithIYContext;
  class PushCommandNameContext;
  class PopCommandNameContext;
  class PushAndPopRegisterContext;
  class PushWordRegisterContext;
  class PushIXContext;
  class PushIYContext;
  class PopWordRegisterContext;
  class PopIXContext;
  class PopIYContext;
  class WordLoadCommandContext;
  class ExchangeCommandNameContext;
  class ExchangeDEWithHLContext;
  class ExchangeAFWithShadowAFContext;
  class ExchangeMultipleWordRegistersContext;
  class ExchangeSPPointerWithHLContext;
  class ExchangeSPPointerWithIXContext;
  class ExchangeSPPointerWithIYContext;
  class LoadHLPointerIntoDEThenDecrementBCAndIncrementHLContext;
  class LoadDEPointerWithHLPointerThenDecrementBCAndIncrementHLRepeatContext;
  class LoadDEPointerWithHLPointerThenDecrementBCAndHLContext;
  class LoadDEPointerWithHLPointerThenDecrementBCAndHLRepeatContext;
  class CompareAToHLPointerThenIncrementHLAndDecrementBCContext;
  class CompareAToHLPointerThenIncrementHLAndDecrementBCRepeatContext;
  class CompareAToHLPointerThenDecrementHLAndBCContext;
  class CompareAToHLPointerThenDecrementHLAndBCRepeatContext;
  class ExchagneAndBlockTransfrerCommandContext;
  class AddCommandNameContext;
  class AddWithCarryCommandNameContext;
  class SubtractCommandNameContext;
  class SubtractWithBorrowCommandNameContext;
  class AndCommandNameContext;
  class OrCommandNameContext;
  class XorCommandNameContext;
  class CompareCommandNameContext;
  class IncrementCommandNameContext;
  class DecrementCommandNameContext;
  class AddAAndRegisterContext;
  class AddAAndImmediateByteContext;
  class AddAAndIXHContext;
  class AddAAndIXLContext;
  class AddAAndIYHContext;
  class AddAAndIYLContext;
  class AddAAndHLPointerContext;
  class AddAAndIXOffsetContext;
  class AddAAndIYOffsetContext;
  class AddWithCarryAAndRegisterContext;
  class AddWithCarryAAndHLPointerContext;
  class AddWithCarryAAndImmediateContext;
  class AddWithCarryAAndIXOffsetContext;
  class AddWithCarryAAndIYOffsetContext;
  class AddWithCarryAAndIXHContext;
  class AddWithCarryAAndIXLContext;
  class AddWithCarryAAndIYHContext;
  class AddWithCarryAAndIYLContext;
  class SubtractRegisterFromAContext;
  class SubtractHLPointerFromAContext;
  class SubtractImmediateFromAContext;
  class SubtractIXOffsetFromAContext;
  class SubtractIYOffsetFromAContext;
  class SubtractIXHighOrLowFromAContext;
  class SubtractIYHighOrLowFromAContext;
  class SubtractWithBorrowRegisterFromAContext;
  class SubtractWithBorrowHLPointerFromAContext;
  class SubtractWithBorrowIXOffsetFromAContext;
  class SubtractWithBorrowIYOffsetFromAContext;
  class SubtractWithBorrowImmediateFromAContext;
  class SubtractWithBorrowIXHFromAContext;
  class SubtractWithBorrowIXLFromAContext;
  class SubtractWithBorrowIYHFromAContext;
  class SubtractWithBorrowIYLFromAContext;
  class AndAWithRegisterContext;
  class AndAWithImmediateContext;
  class AndAWithHLPointerContext;
  class AndAWithIXOffsetContext;
  class AndAWithIYOffsetContext;
  class AndAWithIXHContext;
  class AndAWithIXLContext;
  class AndAWithIYHContext;
  class AndAWithIYLContext;
  class OrAWithRegisterContext;
  class OrAWithImmediateContext;
  class OrAWithHLPointerContext;
  class OrAWithIXOffsetContext;
  class OrAWithIYOffsetContext;
  class OrAWithIXHContext;
  class OrAWithIXLContext;
  class OrAWithIYHContext;
  class OrAWithIYLContext;
  class XorAWithRegisterContext;
  class XorAWithImmediateContext;
  class XorAWithHLPointerContext;
  class XorAWithIXOffsetContext;
  class XorAWithIYOffsetContext;
  class XorAWithIXHContext;
  class XorAWithIXLContext;
  class XorAWithIYHContext;
  class XorAWithIYLContext;
  class CompareAWithRegisterContext;
  class CompareAWithHLPointerContext;
  class CompareAWithImmediateContext;
  class CompareAWithIXOffsetContext;
  class CompareAWithIYOffsetContext;
  class CompareAWithIXHContext;
  class CompareAWithIXLContext;
  class CompareAWithIYHContext;
  class CompareAWithIYLContext;
  class IncrementRegisterContext;
  class IncrementIXHContext;
  class IncrementIXLContext;
  class IncrementIYHContext;
  class IncrementIYLContext;
  class IncrementHLPointerContext;
  class IncrementIXOffsetContext;
  class IncrementIYOffsetContext;
  class DecrementRegisterContext;
  class DecrementIXHContext;
  class DecrementIXLContext;
  class DecrementIYHContext;
  class DecrementIYLContext;
  class DecrementHLPointerContext;
  class DecrementIXOffsetContext;
  class DecrementIYOffsetContext;
  class ArithmeticCommandContext;
  class DecimalAdjustAContext;
  class ComplementAContext;
  class NegateAContext;
  class ComplementCarryFlagContext;
  class SetCarryFlagContext;
  class NopContext;
  class HaltContext;
  class DisableInterruptsContext;
  class EnableInterruptsContext;
  class SetInterruptModeContext;
  class ArithmeticControlCommandContext;
  class AddHLAndWordRegisterContext;
  class AddWithCarryHLAndWordRegisterContext;
  class SubtractWithCarryWordRegisterFromHLContext;
  class SimpleIXAdditionRegisterContext;
  class SimpleIYAdditionRegisterContext;
  class AddIXWithRegisterContext;
  class AddIYWithRegisterContext;
  class IncrementWordRegisterContext;
  class IncrementIXContext;
  class IncrementIYContext;
  class DecrementWordRegisterContext;
  class DecrementIXContext;
  class DecrementIYContext;
  class WordArithemeticCommandContext;
  class RotateLeftCircularAContext;
  class RotateLeftThroughCarryAContext;
  class RotateRightCircularAContext;
  class RotateRightThroughCarryAContext;
  class RotateLeftCircularCommandNameContext;
  class RotateLeftThroughCarryCommandNameContext;
  class RotateRightCircularCommandNameContext;
  class RotateRightThroughCarryCommandNameContext;
  class ShiftLeftArithmeticCommandNameContext;
  class ShiftLeftLogicalCommandNameContext;
  class ShiftRightArithmeticCommandNameContext;
  class ShiftRightLogicalCommandNameContext;
  class RotateDigitLeftCommandNameContext;
  class RotateDigitRightCommandNameContext;
  class RotateLeftCircularRegisterContext;
  class RotateLeftCircularHLPointerContext;
  class RotateLeftCircularIXOffsetContext;
  class RotateLeftCircularIYOffsetContext;
  class RotateLeftThroughCarryRegisterContext;
  class RotateLeftThroughCarryHLPointerContext;
  class RotateLeftThroughCarryIXOffsetContext;
  class RotateLeftThroughCarryIYOffsetContext;
  class RotateRightCircularRegisterContext;
  class RotateRightCircularHLPointerContext;
  class RotateRightCircularIXOffsetContext;
  class RotateRightCircularIYOffsetContext;
  class RotateRightThroughCarryRegisterContext;
  class RotateRightThroughCarryHLPointerContext;
  class RotateRightThroughCarryIXOffsetContext;
  class RotateRightThroughCarryIYOffsetContext;
  class ShiftLeftArithmeticContext;
  class ShiftLeftLogicalContext;
  class ShiftRightArithmeticContext;
  class ShiftRightLogicalContext;
  class RotateDigitLeftContext;
  class RotateDigitRightContext;
  class RotateCommandContext;
  class BitCommandNameContext;
  class SetCommandNameContext;
  class ResetBitCommandNameContext;
  class TestBitInRegisterContext;
  class TestBitInHLPointerContext;
  class TestBitInIXOffsetContext;
  class TestBitInIYOffsetContext;
  class SetBitInRegisterContext;
  class SetBitInHLPointerContext;
  class SetBitInIXOffsetContext;
  class SetBitInIYOffsetContext;
  class ResetBitInRegisterContext;
  class ResetBitHLPointerContext;
  class ResetBitIXOffsetContext;
  class ResetBitIYOffsetContext;
  class BitManipulationCommandContext;
  class JumpConditionContext;
  class JumpCommandNameContext;
  class JumpRelativeCommandNameContext;
  class JumpRelativeAndDecrementCommandNameContext;
  class CallCommandNameContext;
  class ReturnCommandNameContext;
  class ReturnAndEnableInterruptCommandNameContext;
  class ReturnFromNonMaskableInterruptCommandNameContext;
  class RestartCommandNameContext;
  class JumpToAbsoluteAddressContext;
  class JumpToAbsoluteAddressGivenConditionContext;
  class JumpToRelativeAddressContext;
  class JumpToRelativeAddressGivenConditionContext;
  class JumpToHLContext;
  class JumpToIXContext;
  class JumpToIYContext;
  class JumpRelativeAndDecrementContext;
  class CallSubroutineContext;
  class CallSubroutineWithConditionContext;
  class ReturnFromSubroutineContext;
  class ReturnFromSubroutineGivenConditionContext;
  class ReturnAndEnableInterruptContext;
  class ReturnFromNonMaskableInterruptContext;
  class RestartCommandContext;
  class BranchCommandContext;
  class InputCommandNameContext;
  class OutCommandNameContext;
  class InputDataIntoAContext;
  class InputDataIntoRegisterContext;
  class IniContext;
  class InirContext;
  class IndContext;
  class IndrContext;
  class OutputAIntoDataPointerContext;
  class OutputRegisterIntoCPointerContext;
  class OutiContext;
  class OtirContext;
  class OutdContext;
  class OtdrContext;
  class InputAndOutpuCommandContext;
  class LabelContext;
  class OrgDirectiveContext;
  class CharNumberContext;
  class NameContext;
  class NumberContext;
  class DecimalNumberContext;
  class HexNumberContext;
  class CommentContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProgramContext* program();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOL();
    LabelContext *label();
    InstructionContext *instruction();
    CommentContext *comment();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementContext* statement();

  class  InstructionContext : public antlr4::ParserRuleContext {
  public:
    InstructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ByteLoadCommandContext *byteLoadCommand();
    WordLoadCommandContext *wordLoadCommand();
    ExchagneAndBlockTransfrerCommandContext *exchagneAndBlockTransfrerCommand();
    ArithmeticCommandContext *arithmeticCommand();
    ArithmeticControlCommandContext *arithmeticControlCommand();
    WordArithemeticCommandContext *wordArithemeticCommand();
    RotateCommandContext *rotateCommand();
    BitManipulationCommandContext *bitManipulationCommand();
    BranchCommandContext *branchCommand();
    InputAndOutpuCommandContext *inputAndOutpuCommand();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InstructionContext* instruction();

  class  AShadowRegisterContext : public antlr4::ParserRuleContext {
  public:
    AShadowRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AShadowRegisterContext* aShadowRegister();

  class  FShadowRegisterContext : public antlr4::ParserRuleContext {
  public:
    FShadowRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FShadowRegisterContext* fShadowRegister();

  class  BShadowRegisterContext : public antlr4::ParserRuleContext {
  public:
    BShadowRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BShadowRegisterContext* bShadowRegister();

  class  CShadowRegisterContext : public antlr4::ParserRuleContext {
  public:
    CShadowRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CShadowRegisterContext* cShadowRegister();

  class  DShadowRegisterContext : public antlr4::ParserRuleContext {
  public:
    DShadowRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DShadowRegisterContext* dShadowRegister();

  class  EShadowRegisterContext : public antlr4::ParserRuleContext {
  public:
    EShadowRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EShadowRegisterContext* eShadowRegister();

  class  HShadowRegisterContext : public antlr4::ParserRuleContext {
  public:
    HShadowRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  HShadowRegisterContext* hShadowRegister();

  class  LShadowRegisterContext : public antlr4::ParserRuleContext {
  public:
    LShadowRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LShadowRegisterContext* lShadowRegister();

  class  ARegisterContext : public antlr4::ParserRuleContext {
  public:
    ARegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AShadowRegisterContext *aShadowRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ARegisterContext* aRegister();

  class  FRegisterContext : public antlr4::ParserRuleContext {
  public:
    FRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FShadowRegisterContext *fShadowRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FRegisterContext* fRegister();

  class  AfRegisterContext : public antlr4::ParserRuleContext {
  public:
    AfRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AfShadowRegisterContext *afShadowRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AfRegisterContext* afRegister();

  class  AfShadowRegisterContext : public antlr4::ParserRuleContext {
  public:
    AfShadowRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AfShadowRegisterContext* afShadowRegister();

  class  BcShadowRegisterContext : public antlr4::ParserRuleContext {
  public:
    BcShadowRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BcShadowRegisterContext* bcShadowRegister();

  class  DeShadowRegisterContext : public antlr4::ParserRuleContext {
  public:
    DeShadowRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeShadowRegisterContext* deShadowRegister();

  class  HlShadowRegisterContext : public antlr4::ParserRuleContext {
  public:
    HlShadowRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  HlShadowRegisterContext* hlShadowRegister();

  class  BRegisterContext : public antlr4::ParserRuleContext {
  public:
    BRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BShadowRegisterContext *bShadowRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BRegisterContext* bRegister();

  class  CRegisterContext : public antlr4::ParserRuleContext {
  public:
    CRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CShadowRegisterContext *cShadowRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CRegisterContext* cRegister();

  class  BcRegisterContext : public antlr4::ParserRuleContext {
  public:
    BcRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BcShadowRegisterContext *bcShadowRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BcRegisterContext* bcRegister();

  class  DRegisterContext : public antlr4::ParserRuleContext {
  public:
    DRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DShadowRegisterContext *dShadowRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DRegisterContext* dRegister();

  class  ERegisterContext : public antlr4::ParserRuleContext {
  public:
    ERegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EShadowRegisterContext *eShadowRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ERegisterContext* eRegister();

  class  DeRegisterContext : public antlr4::ParserRuleContext {
  public:
    DeRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeShadowRegisterContext *deShadowRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeRegisterContext* deRegister();

  class  HRegisterContext : public antlr4::ParserRuleContext {
  public:
    HRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HShadowRegisterContext *hShadowRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  HRegisterContext* hRegister();

  class  LRegisterContext : public antlr4::ParserRuleContext {
  public:
    LRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LShadowRegisterContext *lShadowRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LRegisterContext* lRegister();

  class  HlRegisterContext : public antlr4::ParserRuleContext {
  public:
    HlRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HlShadowRegisterContext *hlShadowRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  HlRegisterContext* hlRegister();

  class  IRegisterContext : public antlr4::ParserRuleContext {
  public:
    IRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IRegisterContext* iRegister();

  class  RRegisterContext : public antlr4::ParserRuleContext {
  public:
    RRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RRegisterContext* rRegister();

  class  IxRegisterContext : public antlr4::ParserRuleContext {
  public:
    IxRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IxRegisterContext* ixRegister();

  class  IyRegisterContext : public antlr4::ParserRuleContext {
  public:
    IyRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IyRegisterContext* iyRegister();

  class  IxHighRegisterContext : public antlr4::ParserRuleContext {
  public:
    IxHighRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IxHighRegisterContext* ixHighRegister();

  class  IxLowRegisterContext : public antlr4::ParserRuleContext {
  public:
    IxLowRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IxLowRegisterContext* ixLowRegister();

  class  IyHighRegisterContext : public antlr4::ParserRuleContext {
  public:
    IyHighRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IyHighRegisterContext* iyHighRegister();

  class  IyLowRegisterContext : public antlr4::ParserRuleContext {
  public:
    IyLowRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IyLowRegisterContext* iyLowRegister();

  class  SpRegisterContext : public antlr4::ParserRuleContext {
  public:
    SpRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SpRegisterContext* spRegister();

  class  PcRegisterContext : public antlr4::ParserRuleContext {
  public:
    PcRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PcRegisterContext* pcRegister();

  class  HlPointerContext : public antlr4::ParserRuleContext {
  public:
    HlPointerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HlRegisterContext *hlRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  HlPointerContext* hlPointer();

  class  BcPointerContext : public antlr4::ParserRuleContext {
  public:
    BcPointerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BcRegisterContext *bcRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BcPointerContext* bcPointer();

  class  DePointerContext : public antlr4::ParserRuleContext {
  public:
    DePointerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeRegisterContext *deRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DePointerContext* dePointer();

  class  SpPointerContext : public antlr4::ParserRuleContext {
  public:
    SpPointerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SpRegisterContext *spRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SpPointerContext* spPointer();

  class  CPointerContext : public antlr4::ParserRuleContext {
  public:
    CPointerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CRegisterContext *cRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CPointerContext* cPointer();

  class  IxPointerWithOffsetContext : public antlr4::ParserRuleContext {
  public:
    IxPointerWithOffsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IxRegisterContext *ixRegister();
    NumberContext *number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IxPointerWithOffsetContext* ixPointerWithOffset();

  class  IyPointerWithOffsetContext : public antlr4::ParserRuleContext {
  public:
    IyPointerWithOffsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IyRegisterContext *iyRegister();
    NumberContext *number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IyPointerWithOffsetContext* iyPointerWithOffset();

  class  NumberPointerContext : public antlr4::ParserRuleContext {
  public:
    NumberPointerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NumberPointerContext* numberPointer();

  class  SimpleByteRegisterContext : public antlr4::ParserRuleContext {
  public:
    SimpleByteRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BRegisterContext *bRegister();
    CRegisterContext *cRegister();
    DRegisterContext *dRegister();
    ERegisterContext *eRegister();
    HRegisterContext *hRegister();
    LRegisterContext *lRegister();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SimpleByteRegisterContext* simpleByteRegister();

  class  LoadCommandNameContext : public antlr4::ParserRuleContext {
  public:
    LoadCommandNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadCommandNameContext* loadCommandName();

  class  LoadByteRegisterWithByteRegisterContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::SimpleByteRegisterContext *dest = nullptr;;
    Z80Parser::SimpleByteRegisterContext *source = nullptr;;
    LoadByteRegisterWithByteRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadCommandNameContext *loadCommandName();
    std::vector<SimpleByteRegisterContext *> simpleByteRegister();
    SimpleByteRegisterContext* simpleByteRegister(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadByteRegisterWithByteRegisterContext* loadByteRegisterWithByteRegister();

  class  LoadByteRegisterWithImmediateByteContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::SimpleByteRegisterContext *dest = nullptr;;
    Z80Parser::NumberContext *source = nullptr;;
    LoadByteRegisterWithImmediateByteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadCommandNameContext *loadCommandName();
    SimpleByteRegisterContext *simpleByteRegister();
    NumberContext *number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadByteRegisterWithImmediateByteContext* loadByteRegisterWithImmediateByte();

  class  LoadByteRegisterWithHLPointerContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::SimpleByteRegisterContext *dest = nullptr;;
    Z80Parser::HlPointerContext *source = nullptr;;
    LoadByteRegisterWithHLPointerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadCommandNameContext *loadCommandName();
    SimpleByteRegisterContext *simpleByteRegister();
    HlPointerContext *hlPointer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadByteRegisterWithHLPointerContext* loadByteRegisterWithHLPointer();

  class  LoadByteRegisterWithIXOffsetContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::SimpleByteRegisterContext *dest = nullptr;;
    Z80Parser::IxPointerWithOffsetContext *source = nullptr;;
    LoadByteRegisterWithIXOffsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadCommandNameContext *loadCommandName();
    SimpleByteRegisterContext *simpleByteRegister();
    IxPointerWithOffsetContext *ixPointerWithOffset();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadByteRegisterWithIXOffsetContext* loadByteRegisterWithIXOffset();

  class  LoadByteRegisterWithIYOffsetContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::SimpleByteRegisterContext *dest = nullptr;;
    Z80Parser::IyPointerWithOffsetContext *source = nullptr;;
    LoadByteRegisterWithIYOffsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadCommandNameContext *loadCommandName();
    SimpleByteRegisterContext *simpleByteRegister();
    IyPointerWithOffsetContext *iyPointerWithOffset();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadByteRegisterWithIYOffsetContext* loadByteRegisterWithIYOffset();

  class  LoadHLPointerWithRegisterContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::HlPointerContext *dest = nullptr;;
    Z80Parser::SimpleByteRegisterContext *source = nullptr;;
    LoadHLPointerWithRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadCommandNameContext *loadCommandName();
    HlPointerContext *hlPointer();
    SimpleByteRegisterContext *simpleByteRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadHLPointerWithRegisterContext* loadHLPointerWithRegister();

  class  LoadIXOffsetWithRegisterContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IxPointerWithOffsetContext *dest = nullptr;;
    Z80Parser::SimpleByteRegisterContext *source = nullptr;;
    LoadIXOffsetWithRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadCommandNameContext *loadCommandName();
    IxPointerWithOffsetContext *ixPointerWithOffset();
    SimpleByteRegisterContext *simpleByteRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadIXOffsetWithRegisterContext* loadIXOffsetWithRegister();

  class  LoadIYOffsetWithRegisterContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IyPointerWithOffsetContext *dest = nullptr;;
    Z80Parser::SimpleByteRegisterContext *source = nullptr;;
    LoadIYOffsetWithRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadCommandNameContext *loadCommandName();
    IyPointerWithOffsetContext *iyPointerWithOffset();
    SimpleByteRegisterContext *simpleByteRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadIYOffsetWithRegisterContext* loadIYOffsetWithRegister();

  class  LoadHLPointerWithImmediateByteContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::HlPointerContext *dest = nullptr;;
    Z80Parser::NumberContext *source = nullptr;;
    LoadHLPointerWithImmediateByteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadCommandNameContext *loadCommandName();
    HlPointerContext *hlPointer();
    NumberContext *number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadHLPointerWithImmediateByteContext* loadHLPointerWithImmediateByte();

  class  LoadIXOffsetWithImmediateByteContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IxPointerWithOffsetContext *dest = nullptr;;
    Z80Parser::NumberContext *source = nullptr;;
    LoadIXOffsetWithImmediateByteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadCommandNameContext *loadCommandName();
    IxPointerWithOffsetContext *ixPointerWithOffset();
    NumberContext *number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadIXOffsetWithImmediateByteContext* loadIXOffsetWithImmediateByte();

  class  LoadIYOffsetWithImmediateByteContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IyPointerWithOffsetContext *dest = nullptr;;
    Z80Parser::NumberContext *source = nullptr;;
    LoadIYOffsetWithImmediateByteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadCommandNameContext *loadCommandName();
    IyPointerWithOffsetContext *iyPointerWithOffset();
    NumberContext *number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadIYOffsetWithImmediateByteContext* loadIYOffsetWithImmediateByte();

  class  LoadAWithBCPointerContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::ARegisterContext *dest = nullptr;;
    Z80Parser::BcPointerContext *source = nullptr;;
    LoadAWithBCPointerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadCommandNameContext *loadCommandName();
    ARegisterContext *aRegister();
    BcPointerContext *bcPointer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadAWithBCPointerContext* loadAWithBCPointer();

  class  LoadAWithDEPointerContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::ARegisterContext *dest = nullptr;;
    Z80Parser::DePointerContext *source = nullptr;;
    LoadAWithDEPointerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadCommandNameContext *loadCommandName();
    ARegisterContext *aRegister();
    DePointerContext *dePointer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadAWithDEPointerContext* loadAWithDEPointer();

  class  LoadAWithNNPointerContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::ARegisterContext *dest = nullptr;;
    Z80Parser::NumberPointerContext *source = nullptr;;
    LoadAWithNNPointerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadCommandNameContext *loadCommandName();
    ARegisterContext *aRegister();
    NumberPointerContext *numberPointer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadAWithNNPointerContext* loadAWithNNPointer();

  class  LoadBCPointerWithAContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::BcPointerContext *dest = nullptr;;
    Z80Parser::ARegisterContext *source = nullptr;;
    LoadBCPointerWithAContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadCommandNameContext *loadCommandName();
    BcPointerContext *bcPointer();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadBCPointerWithAContext* loadBCPointerWithA();

  class  LoadDEPointerWithAContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::DePointerContext *dest = nullptr;;
    Z80Parser::ARegisterContext *source = nullptr;;
    LoadDEPointerWithAContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadCommandNameContext *loadCommandName();
    DePointerContext *dePointer();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadDEPointerWithAContext* loadDEPointerWithA();

  class  LoadNNPointerWithAContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::NumberPointerContext *dest = nullptr;;
    Z80Parser::ARegisterContext *source = nullptr;;
    LoadNNPointerWithAContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadCommandNameContext *loadCommandName();
    NumberPointerContext *numberPointer();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadNNPointerWithAContext* loadNNPointerWithA();

  class  LoadAWithIContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::ARegisterContext *dest = nullptr;;
    Z80Parser::IRegisterContext *source = nullptr;;
    LoadAWithIContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadCommandNameContext *loadCommandName();
    ARegisterContext *aRegister();
    IRegisterContext *iRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadAWithIContext* loadAWithI();

  class  LoadAWithRContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::ARegisterContext *dest = nullptr;;
    Z80Parser::RRegisterContext *source = nullptr;;
    LoadAWithRContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadCommandNameContext *loadCommandName();
    ARegisterContext *aRegister();
    RRegisterContext *rRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadAWithRContext* loadAWithR();

  class  LoadIWithAContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IRegisterContext *dest = nullptr;;
    Z80Parser::ARegisterContext *source = nullptr;;
    LoadIWithAContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadCommandNameContext *loadCommandName();
    IRegisterContext *iRegister();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadIWithAContext* loadIWithA();

  class  LoadRWithAContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::RRegisterContext *dest = nullptr;;
    Z80Parser::ARegisterContext *source = nullptr;;
    LoadRWithAContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadCommandNameContext *loadCommandName();
    RRegisterContext *rRegister();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadRWithAContext* loadRWithA();

  class  LoadRegisterWithIXHighContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::SimpleByteRegisterContext *dest = nullptr;;
    Z80Parser::IxHighRegisterContext *source = nullptr;;
    LoadRegisterWithIXHighContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadCommandNameContext *loadCommandName();
    SimpleByteRegisterContext *simpleByteRegister();
    IxHighRegisterContext *ixHighRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadRegisterWithIXHighContext* loadRegisterWithIXHigh();

  class  LoadRegisterWithIXLowContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::SimpleByteRegisterContext *dest = nullptr;;
    Z80Parser::IxLowRegisterContext *source = nullptr;;
    LoadRegisterWithIXLowContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadCommandNameContext *loadCommandName();
    SimpleByteRegisterContext *simpleByteRegister();
    IxLowRegisterContext *ixLowRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadRegisterWithIXLowContext* loadRegisterWithIXLow();

  class  LoadRegisterWithIYHighContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::SimpleByteRegisterContext *dest = nullptr;;
    Z80Parser::IyHighRegisterContext *source = nullptr;;
    LoadRegisterWithIYHighContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadCommandNameContext *loadCommandName();
    SimpleByteRegisterContext *simpleByteRegister();
    IyHighRegisterContext *iyHighRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadRegisterWithIYHighContext* loadRegisterWithIYHigh();

  class  LoadRegisterWithIYLowContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::SimpleByteRegisterContext *dest = nullptr;;
    Z80Parser::IyLowRegisterContext *source = nullptr;;
    LoadRegisterWithIYLowContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadCommandNameContext *loadCommandName();
    SimpleByteRegisterContext *simpleByteRegister();
    IyLowRegisterContext *iyLowRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadRegisterWithIYLowContext* loadRegisterWithIYLow();

  class  LoadIXHighWithRegisterContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IxHighRegisterContext *dest = nullptr;;
    Z80Parser::SimpleByteRegisterContext *source = nullptr;;
    LoadIXHighWithRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadCommandNameContext *loadCommandName();
    IxHighRegisterContext *ixHighRegister();
    SimpleByteRegisterContext *simpleByteRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadIXHighWithRegisterContext* loadIXHighWithRegister();

  class  IxHighOrLowRegisterContext : public antlr4::ParserRuleContext {
  public:
    IxHighOrLowRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IxHighRegisterContext *ixHighRegister();
    IxLowRegisterContext *ixLowRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IxHighOrLowRegisterContext* ixHighOrLowRegister();

  class  IyHighOrLowRegisterContext : public antlr4::ParserRuleContext {
  public:
    IyHighOrLowRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IyHighRegisterContext *iyHighRegister();
    IyLowRegisterContext *iyLowRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IyHighOrLowRegisterContext* iyHighOrLowRegister();

  class  LoadIXNibblesContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IxHighOrLowRegisterContext *dest = nullptr;;
    Z80Parser::IxHighOrLowRegisterContext *source = nullptr;;
    LoadIXNibblesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadCommandNameContext *loadCommandName();
    std::vector<IxHighOrLowRegisterContext *> ixHighOrLowRegister();
    IxHighOrLowRegisterContext* ixHighOrLowRegister(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadIXNibblesContext* loadIXNibbles();

  class  LoadIYNibblesContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IyHighOrLowRegisterContext *dest = nullptr;;
    Z80Parser::IyHighOrLowRegisterContext *source = nullptr;;
    LoadIYNibblesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadCommandNameContext *loadCommandName();
    std::vector<IyHighOrLowRegisterContext *> iyHighOrLowRegister();
    IyHighOrLowRegisterContext* iyHighOrLowRegister(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadIYNibblesContext* loadIYNibbles();

  class  LoadIXLowWithRegisterContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IxLowRegisterContext *dest = nullptr;;
    Z80Parser::SimpleByteRegisterContext *source = nullptr;;
    LoadIXLowWithRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadCommandNameContext *loadCommandName();
    IxLowRegisterContext *ixLowRegister();
    SimpleByteRegisterContext *simpleByteRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadIXLowWithRegisterContext* loadIXLowWithRegister();

  class  LoadIYHighWithRegisterContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IyHighRegisterContext *dest = nullptr;;
    Z80Parser::SimpleByteRegisterContext *source = nullptr;;
    LoadIYHighWithRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadCommandNameContext *loadCommandName();
    IyHighRegisterContext *iyHighRegister();
    SimpleByteRegisterContext *simpleByteRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadIYHighWithRegisterContext* loadIYHighWithRegister();

  class  LoadIYLowWithRegisterContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IyLowRegisterContext *dest = nullptr;;
    Z80Parser::SimpleByteRegisterContext *source = nullptr;;
    LoadIYLowWithRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadCommandNameContext *loadCommandName();
    IyLowRegisterContext *iyLowRegister();
    SimpleByteRegisterContext *simpleByteRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadIYLowWithRegisterContext* loadIYLowWithRegister();

  class  ByteLoadCommandContext : public antlr4::ParserRuleContext {
  public:
    ByteLoadCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadByteRegisterWithByteRegisterContext *loadByteRegisterWithByteRegister();
    LoadByteRegisterWithImmediateByteContext *loadByteRegisterWithImmediateByte();
    LoadByteRegisterWithHLPointerContext *loadByteRegisterWithHLPointer();
    LoadByteRegisterWithIXOffsetContext *loadByteRegisterWithIXOffset();
    LoadByteRegisterWithIYOffsetContext *loadByteRegisterWithIYOffset();
    LoadHLPointerWithRegisterContext *loadHLPointerWithRegister();
    LoadIXOffsetWithRegisterContext *loadIXOffsetWithRegister();
    LoadIYOffsetWithRegisterContext *loadIYOffsetWithRegister();
    LoadHLPointerWithImmediateByteContext *loadHLPointerWithImmediateByte();
    LoadIXOffsetWithImmediateByteContext *loadIXOffsetWithImmediateByte();
    LoadIYOffsetWithImmediateByteContext *loadIYOffsetWithImmediateByte();
    LoadAWithBCPointerContext *loadAWithBCPointer();
    LoadAWithDEPointerContext *loadAWithDEPointer();
    LoadAWithNNPointerContext *loadAWithNNPointer();
    LoadBCPointerWithAContext *loadBCPointerWithA();
    LoadDEPointerWithAContext *loadDEPointerWithA();
    LoadNNPointerWithAContext *loadNNPointerWithA();
    LoadAWithIContext *loadAWithI();
    LoadAWithRContext *loadAWithR();
    LoadIWithAContext *loadIWithA();
    LoadRWithAContext *loadRWithA();
    LoadRegisterWithIXHighContext *loadRegisterWithIXHigh();
    LoadRegisterWithIXLowContext *loadRegisterWithIXLow();
    LoadRegisterWithIYHighContext *loadRegisterWithIYHigh();
    LoadRegisterWithIYLowContext *loadRegisterWithIYLow();
    LoadIXHighWithRegisterContext *loadIXHighWithRegister();
    LoadIXLowWithRegisterContext *loadIXLowWithRegister();
    LoadIYHighWithRegisterContext *loadIYHighWithRegister();
    LoadIYLowWithRegisterContext *loadIYLowWithRegister();
    LoadIYNibblesContext *loadIYNibbles();
    LoadIXNibblesContext *loadIXNibbles();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ByteLoadCommandContext* byteLoadCommand();

  class  SimpleWordRegisterContext : public antlr4::ParserRuleContext {
  public:
    SimpleWordRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BcRegisterContext *bcRegister();
    DeRegisterContext *deRegister();
    HlRegisterContext *hlRegister();
    SpRegisterContext *spRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SimpleWordRegisterContext* simpleWordRegister();

  class  LoadWordWithImmediateWordContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::SimpleWordRegisterContext *dest = nullptr;;
    Z80Parser::NumberContext *source = nullptr;;
    LoadWordWithImmediateWordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadCommandNameContext *loadCommandName();
    SimpleWordRegisterContext *simpleWordRegister();
    NumberContext *number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadWordWithImmediateWordContext* loadWordWithImmediateWord();

  class  LoadIXWithImmediateWordContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IxRegisterContext *dest = nullptr;;
    Z80Parser::NumberContext *source = nullptr;;
    LoadIXWithImmediateWordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadCommandNameContext *loadCommandName();
    IxRegisterContext *ixRegister();
    NumberContext *number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadIXWithImmediateWordContext* loadIXWithImmediateWord();

  class  LoadIYWithImmediateWordContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IyRegisterContext *dest = nullptr;;
    Z80Parser::NumberContext *source = nullptr;;
    LoadIYWithImmediateWordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadCommandNameContext *loadCommandName();
    IyRegisterContext *iyRegister();
    NumberContext *number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadIYWithImmediateWordContext* loadIYWithImmediateWord();

  class  LoadWordRegisterWithNNPointerContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::SimpleWordRegisterContext *dest = nullptr;;
    Z80Parser::NumberPointerContext *source = nullptr;;
    LoadWordRegisterWithNNPointerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadCommandNameContext *loadCommandName();
    SimpleWordRegisterContext *simpleWordRegister();
    NumberPointerContext *numberPointer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadWordRegisterWithNNPointerContext* loadWordRegisterWithNNPointer();

  class  LoadIXWithNNPointerContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IxRegisterContext *dest = nullptr;;
    Z80Parser::NumberPointerContext *source = nullptr;;
    LoadIXWithNNPointerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadCommandNameContext *loadCommandName();
    IxRegisterContext *ixRegister();
    NumberPointerContext *numberPointer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadIXWithNNPointerContext* loadIXWithNNPointer();

  class  LoadIYWithNNPointerContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IyRegisterContext *dest = nullptr;;
    Z80Parser::NumberPointerContext *source = nullptr;;
    LoadIYWithNNPointerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadCommandNameContext *loadCommandName();
    IyRegisterContext *iyRegister();
    NumberPointerContext *numberPointer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadIYWithNNPointerContext* loadIYWithNNPointer();

  class  LoadNNPointerWithWordRegisterContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::NumberPointerContext *dest = nullptr;;
    Z80Parser::SimpleWordRegisterContext *source = nullptr;;
    LoadNNPointerWithWordRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadCommandNameContext *loadCommandName();
    NumberPointerContext *numberPointer();
    SimpleWordRegisterContext *simpleWordRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadNNPointerWithWordRegisterContext* loadNNPointerWithWordRegister();

  class  LoadNNPointerWithIXContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::NumberPointerContext *dest = nullptr;;
    Z80Parser::IxRegisterContext *source = nullptr;;
    LoadNNPointerWithIXContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadCommandNameContext *loadCommandName();
    NumberPointerContext *numberPointer();
    IxRegisterContext *ixRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadNNPointerWithIXContext* loadNNPointerWithIX();

  class  LoadNNPointerWithIYContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::NumberPointerContext *dest = nullptr;;
    Z80Parser::IyRegisterContext *source = nullptr;;
    LoadNNPointerWithIYContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadCommandNameContext *loadCommandName();
    NumberPointerContext *numberPointer();
    IyRegisterContext *iyRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadNNPointerWithIYContext* loadNNPointerWithIY();

  class  LoadSPWithHLContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::SpRegisterContext *dest = nullptr;;
    Z80Parser::HlRegisterContext *source = nullptr;;
    LoadSPWithHLContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadCommandNameContext *loadCommandName();
    SpRegisterContext *spRegister();
    HlRegisterContext *hlRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadSPWithHLContext* loadSPWithHL();

  class  LoadSPWithIXContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::SpRegisterContext *dest = nullptr;;
    Z80Parser::IxRegisterContext *source = nullptr;;
    LoadSPWithIXContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadCommandNameContext *loadCommandName();
    SpRegisterContext *spRegister();
    IxRegisterContext *ixRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadSPWithIXContext* loadSPWithIX();

  class  LoadSPWithIYContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::SpRegisterContext *dest = nullptr;;
    Z80Parser::IyRegisterContext *source = nullptr;;
    LoadSPWithIYContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadCommandNameContext *loadCommandName();
    SpRegisterContext *spRegister();
    IyRegisterContext *iyRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadSPWithIYContext* loadSPWithIY();

  class  PushCommandNameContext : public antlr4::ParserRuleContext {
  public:
    PushCommandNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PushCommandNameContext* pushCommandName();

  class  PopCommandNameContext : public antlr4::ParserRuleContext {
  public:
    PopCommandNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PopCommandNameContext* popCommandName();

  class  PushAndPopRegisterContext : public antlr4::ParserRuleContext {
  public:
    PushAndPopRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BcRegisterContext *bcRegister();
    DeRegisterContext *deRegister();
    HlRegisterContext *hlRegister();
    AfRegisterContext *afRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PushAndPopRegisterContext* pushAndPopRegister();

  class  PushWordRegisterContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::PushAndPopRegisterContext *source = nullptr;;
    PushWordRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PushCommandNameContext *pushCommandName();
    PushAndPopRegisterContext *pushAndPopRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PushWordRegisterContext* pushWordRegister();

  class  PushIXContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IxRegisterContext *source = nullptr;;
    PushIXContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PushCommandNameContext *pushCommandName();
    IxRegisterContext *ixRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PushIXContext* pushIX();

  class  PushIYContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IyRegisterContext *source = nullptr;;
    PushIYContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PushCommandNameContext *pushCommandName();
    IyRegisterContext *iyRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PushIYContext* pushIY();

  class  PopWordRegisterContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::PushAndPopRegisterContext *source = nullptr;;
    PopWordRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PopCommandNameContext *popCommandName();
    PushAndPopRegisterContext *pushAndPopRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PopWordRegisterContext* popWordRegister();

  class  PopIXContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IxRegisterContext *source = nullptr;;
    PopIXContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PopCommandNameContext *popCommandName();
    IxRegisterContext *ixRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PopIXContext* popIX();

  class  PopIYContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IyRegisterContext *source = nullptr;;
    PopIYContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PopCommandNameContext *popCommandName();
    IyRegisterContext *iyRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PopIYContext* popIY();

  class  WordLoadCommandContext : public antlr4::ParserRuleContext {
  public:
    WordLoadCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadWordWithImmediateWordContext *loadWordWithImmediateWord();
    LoadIXWithImmediateWordContext *loadIXWithImmediateWord();
    LoadIYWithImmediateWordContext *loadIYWithImmediateWord();
    LoadWordRegisterWithNNPointerContext *loadWordRegisterWithNNPointer();
    LoadIXWithNNPointerContext *loadIXWithNNPointer();
    LoadIYWithNNPointerContext *loadIYWithNNPointer();
    LoadNNPointerWithIXContext *loadNNPointerWithIX();
    LoadNNPointerWithIYContext *loadNNPointerWithIY();
    LoadNNPointerWithWordRegisterContext *loadNNPointerWithWordRegister();
    LoadSPWithHLContext *loadSPWithHL();
    LoadSPWithIXContext *loadSPWithIX();
    LoadSPWithIYContext *loadSPWithIY();
    PushWordRegisterContext *pushWordRegister();
    PushIXContext *pushIX();
    PushIYContext *pushIY();
    PopWordRegisterContext *popWordRegister();
    PopIXContext *popIX();
    PopIYContext *popIY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WordLoadCommandContext* wordLoadCommand();

  class  ExchangeCommandNameContext : public antlr4::ParserRuleContext {
  public:
    ExchangeCommandNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExchangeCommandNameContext* exchangeCommandName();

  class  ExchangeDEWithHLContext : public antlr4::ParserRuleContext {
  public:
    ExchangeDEWithHLContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExchangeCommandNameContext *exchangeCommandName();
    DeRegisterContext *deRegister();
    HlRegisterContext *hlRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExchangeDEWithHLContext* exchangeDEWithHL();

  class  ExchangeAFWithShadowAFContext : public antlr4::ParserRuleContext {
  public:
    ExchangeAFWithShadowAFContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExchangeCommandNameContext *exchangeCommandName();
    std::vector<AfRegisterContext *> afRegister();
    AfRegisterContext* afRegister(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExchangeAFWithShadowAFContext* exchangeAFWithShadowAF();

  class  ExchangeMultipleWordRegistersContext : public antlr4::ParserRuleContext {
  public:
    ExchangeMultipleWordRegistersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExchangeMultipleWordRegistersContext* exchangeMultipleWordRegisters();

  class  ExchangeSPPointerWithHLContext : public antlr4::ParserRuleContext {
  public:
    ExchangeSPPointerWithHLContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExchangeCommandNameContext *exchangeCommandName();
    SpPointerContext *spPointer();
    HlRegisterContext *hlRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExchangeSPPointerWithHLContext* exchangeSPPointerWithHL();

  class  ExchangeSPPointerWithIXContext : public antlr4::ParserRuleContext {
  public:
    ExchangeSPPointerWithIXContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExchangeCommandNameContext *exchangeCommandName();
    SpPointerContext *spPointer();
    IxRegisterContext *ixRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExchangeSPPointerWithIXContext* exchangeSPPointerWithIX();

  class  ExchangeSPPointerWithIYContext : public antlr4::ParserRuleContext {
  public:
    ExchangeSPPointerWithIYContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExchangeCommandNameContext *exchangeCommandName();
    SpPointerContext *spPointer();
    IyRegisterContext *iyRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExchangeSPPointerWithIYContext* exchangeSPPointerWithIY();

  class  LoadHLPointerIntoDEThenDecrementBCAndIncrementHLContext : public antlr4::ParserRuleContext {
  public:
    LoadHLPointerIntoDEThenDecrementBCAndIncrementHLContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadHLPointerIntoDEThenDecrementBCAndIncrementHLContext* loadHLPointerIntoDEThenDecrementBCAndIncrementHL();

  class  LoadDEPointerWithHLPointerThenDecrementBCAndIncrementHLRepeatContext : public antlr4::ParserRuleContext {
  public:
    LoadDEPointerWithHLPointerThenDecrementBCAndIncrementHLRepeatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadDEPointerWithHLPointerThenDecrementBCAndIncrementHLRepeatContext* loadDEPointerWithHLPointerThenDecrementBCAndIncrementHLRepeat();

  class  LoadDEPointerWithHLPointerThenDecrementBCAndHLContext : public antlr4::ParserRuleContext {
  public:
    LoadDEPointerWithHLPointerThenDecrementBCAndHLContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadDEPointerWithHLPointerThenDecrementBCAndHLContext* loadDEPointerWithHLPointerThenDecrementBCAndHL();

  class  LoadDEPointerWithHLPointerThenDecrementBCAndHLRepeatContext : public antlr4::ParserRuleContext {
  public:
    LoadDEPointerWithHLPointerThenDecrementBCAndHLRepeatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadDEPointerWithHLPointerThenDecrementBCAndHLRepeatContext* loadDEPointerWithHLPointerThenDecrementBCAndHLRepeat();

  class  CompareAToHLPointerThenIncrementHLAndDecrementBCContext : public antlr4::ParserRuleContext {
  public:
    CompareAToHLPointerThenIncrementHLAndDecrementBCContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompareAToHLPointerThenIncrementHLAndDecrementBCContext* compareAToHLPointerThenIncrementHLAndDecrementBC();

  class  CompareAToHLPointerThenIncrementHLAndDecrementBCRepeatContext : public antlr4::ParserRuleContext {
  public:
    CompareAToHLPointerThenIncrementHLAndDecrementBCRepeatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompareAToHLPointerThenIncrementHLAndDecrementBCRepeatContext* compareAToHLPointerThenIncrementHLAndDecrementBCRepeat();

  class  CompareAToHLPointerThenDecrementHLAndBCContext : public antlr4::ParserRuleContext {
  public:
    CompareAToHLPointerThenDecrementHLAndBCContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompareAToHLPointerThenDecrementHLAndBCContext* compareAToHLPointerThenDecrementHLAndBC();

  class  CompareAToHLPointerThenDecrementHLAndBCRepeatContext : public antlr4::ParserRuleContext {
  public:
    CompareAToHLPointerThenDecrementHLAndBCRepeatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompareAToHLPointerThenDecrementHLAndBCRepeatContext* compareAToHLPointerThenDecrementHLAndBCRepeat();

  class  ExchagneAndBlockTransfrerCommandContext : public antlr4::ParserRuleContext {
  public:
    ExchagneAndBlockTransfrerCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExchangeDEWithHLContext *exchangeDEWithHL();
    ExchangeAFWithShadowAFContext *exchangeAFWithShadowAF();
    ExchangeMultipleWordRegistersContext *exchangeMultipleWordRegisters();
    ExchangeSPPointerWithHLContext *exchangeSPPointerWithHL();
    ExchangeSPPointerWithIXContext *exchangeSPPointerWithIX();
    ExchangeSPPointerWithIYContext *exchangeSPPointerWithIY();
    LoadHLPointerIntoDEThenDecrementBCAndIncrementHLContext *loadHLPointerIntoDEThenDecrementBCAndIncrementHL();
    LoadDEPointerWithHLPointerThenDecrementBCAndIncrementHLRepeatContext *loadDEPointerWithHLPointerThenDecrementBCAndIncrementHLRepeat();
    LoadDEPointerWithHLPointerThenDecrementBCAndHLContext *loadDEPointerWithHLPointerThenDecrementBCAndHL();
    LoadDEPointerWithHLPointerThenDecrementBCAndHLRepeatContext *loadDEPointerWithHLPointerThenDecrementBCAndHLRepeat();
    CompareAToHLPointerThenIncrementHLAndDecrementBCContext *compareAToHLPointerThenIncrementHLAndDecrementBC();
    CompareAToHLPointerThenIncrementHLAndDecrementBCRepeatContext *compareAToHLPointerThenIncrementHLAndDecrementBCRepeat();
    CompareAToHLPointerThenDecrementHLAndBCContext *compareAToHLPointerThenDecrementHLAndBC();
    CompareAToHLPointerThenDecrementHLAndBCRepeatContext *compareAToHLPointerThenDecrementHLAndBCRepeat();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExchagneAndBlockTransfrerCommandContext* exchagneAndBlockTransfrerCommand();

  class  AddCommandNameContext : public antlr4::ParserRuleContext {
  public:
    AddCommandNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AddCommandNameContext* addCommandName();

  class  AddWithCarryCommandNameContext : public antlr4::ParserRuleContext {
  public:
    AddWithCarryCommandNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AddWithCarryCommandNameContext* addWithCarryCommandName();

  class  SubtractCommandNameContext : public antlr4::ParserRuleContext {
  public:
    SubtractCommandNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubtractCommandNameContext* subtractCommandName();

  class  SubtractWithBorrowCommandNameContext : public antlr4::ParserRuleContext {
  public:
    SubtractWithBorrowCommandNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubtractWithBorrowCommandNameContext* subtractWithBorrowCommandName();

  class  AndCommandNameContext : public antlr4::ParserRuleContext {
  public:
    AndCommandNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AndCommandNameContext* andCommandName();

  class  OrCommandNameContext : public antlr4::ParserRuleContext {
  public:
    OrCommandNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OrCommandNameContext* orCommandName();

  class  XorCommandNameContext : public antlr4::ParserRuleContext {
  public:
    XorCommandNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  XorCommandNameContext* xorCommandName();

  class  CompareCommandNameContext : public antlr4::ParserRuleContext {
  public:
    CompareCommandNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompareCommandNameContext* compareCommandName();

  class  IncrementCommandNameContext : public antlr4::ParserRuleContext {
  public:
    IncrementCommandNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IncrementCommandNameContext* incrementCommandName();

  class  DecrementCommandNameContext : public antlr4::ParserRuleContext {
  public:
    DecrementCommandNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DecrementCommandNameContext* decrementCommandName();

  class  AddAAndRegisterContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::SimpleByteRegisterContext *source = nullptr;;
    AddAAndRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AddCommandNameContext *addCommandName();
    SimpleByteRegisterContext *simpleByteRegister();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AddAAndRegisterContext* addAAndRegister();

  class  AddAAndImmediateByteContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::NumberContext *source = nullptr;;
    AddAAndImmediateByteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AddCommandNameContext *addCommandName();
    NumberContext *number();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AddAAndImmediateByteContext* addAAndImmediateByte();

  class  AddAAndIXHContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IxHighRegisterContext *source = nullptr;;
    AddAAndIXHContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AddCommandNameContext *addCommandName();
    IxHighRegisterContext *ixHighRegister();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AddAAndIXHContext* addAAndIXH();

  class  AddAAndIXLContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IxLowRegisterContext *source = nullptr;;
    AddAAndIXLContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AddCommandNameContext *addCommandName();
    IxLowRegisterContext *ixLowRegister();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AddAAndIXLContext* addAAndIXL();

  class  AddAAndIYHContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IyHighRegisterContext *source = nullptr;;
    AddAAndIYHContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AddCommandNameContext *addCommandName();
    IyHighRegisterContext *iyHighRegister();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AddAAndIYHContext* addAAndIYH();

  class  AddAAndIYLContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IyLowRegisterContext *source = nullptr;;
    AddAAndIYLContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AddCommandNameContext *addCommandName();
    IyLowRegisterContext *iyLowRegister();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AddAAndIYLContext* addAAndIYL();

  class  AddAAndHLPointerContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::HlPointerContext *source = nullptr;;
    AddAAndHLPointerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AddCommandNameContext *addCommandName();
    HlPointerContext *hlPointer();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AddAAndHLPointerContext* addAAndHLPointer();

  class  AddAAndIXOffsetContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IxPointerWithOffsetContext *source = nullptr;;
    AddAAndIXOffsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AddCommandNameContext *addCommandName();
    IxPointerWithOffsetContext *ixPointerWithOffset();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AddAAndIXOffsetContext* addAAndIXOffset();

  class  AddAAndIYOffsetContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IyPointerWithOffsetContext *source = nullptr;;
    AddAAndIYOffsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AddCommandNameContext *addCommandName();
    IyPointerWithOffsetContext *iyPointerWithOffset();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AddAAndIYOffsetContext* addAAndIYOffset();

  class  AddWithCarryAAndRegisterContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::SimpleByteRegisterContext *source = nullptr;;
    AddWithCarryAAndRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AddWithCarryCommandNameContext *addWithCarryCommandName();
    SimpleByteRegisterContext *simpleByteRegister();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AddWithCarryAAndRegisterContext* addWithCarryAAndRegister();

  class  AddWithCarryAAndHLPointerContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::HlPointerContext *source = nullptr;;
    AddWithCarryAAndHLPointerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AddWithCarryCommandNameContext *addWithCarryCommandName();
    HlPointerContext *hlPointer();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AddWithCarryAAndHLPointerContext* addWithCarryAAndHLPointer();

  class  AddWithCarryAAndImmediateContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::NumberContext *source = nullptr;;
    AddWithCarryAAndImmediateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AddWithCarryCommandNameContext *addWithCarryCommandName();
    NumberContext *number();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AddWithCarryAAndImmediateContext* addWithCarryAAndImmediate();

  class  AddWithCarryAAndIXOffsetContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IxPointerWithOffsetContext *source = nullptr;;
    AddWithCarryAAndIXOffsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AddWithCarryCommandNameContext *addWithCarryCommandName();
    IxPointerWithOffsetContext *ixPointerWithOffset();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AddWithCarryAAndIXOffsetContext* addWithCarryAAndIXOffset();

  class  AddWithCarryAAndIYOffsetContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IyPointerWithOffsetContext *source = nullptr;;
    AddWithCarryAAndIYOffsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AddWithCarryCommandNameContext *addWithCarryCommandName();
    IyPointerWithOffsetContext *iyPointerWithOffset();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AddWithCarryAAndIYOffsetContext* addWithCarryAAndIYOffset();

  class  AddWithCarryAAndIXHContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IxHighRegisterContext *source = nullptr;;
    AddWithCarryAAndIXHContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AddWithCarryCommandNameContext *addWithCarryCommandName();
    IxHighRegisterContext *ixHighRegister();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AddWithCarryAAndIXHContext* addWithCarryAAndIXH();

  class  AddWithCarryAAndIXLContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IxLowRegisterContext *source = nullptr;;
    AddWithCarryAAndIXLContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AddWithCarryCommandNameContext *addWithCarryCommandName();
    IxLowRegisterContext *ixLowRegister();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AddWithCarryAAndIXLContext* addWithCarryAAndIXL();

  class  AddWithCarryAAndIYHContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IyHighRegisterContext *source = nullptr;;
    AddWithCarryAAndIYHContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AddWithCarryCommandNameContext *addWithCarryCommandName();
    IyHighRegisterContext *iyHighRegister();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AddWithCarryAAndIYHContext* addWithCarryAAndIYH();

  class  AddWithCarryAAndIYLContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IyLowRegisterContext *source = nullptr;;
    AddWithCarryAAndIYLContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AddWithCarryCommandNameContext *addWithCarryCommandName();
    IyLowRegisterContext *iyLowRegister();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AddWithCarryAAndIYLContext* addWithCarryAAndIYL();

  class  SubtractRegisterFromAContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::SimpleByteRegisterContext *source = nullptr;;
    SubtractRegisterFromAContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SubtractCommandNameContext *subtractCommandName();
    SimpleByteRegisterContext *simpleByteRegister();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubtractRegisterFromAContext* subtractRegisterFromA();

  class  SubtractHLPointerFromAContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::HlPointerContext *source = nullptr;;
    SubtractHLPointerFromAContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SubtractCommandNameContext *subtractCommandName();
    HlPointerContext *hlPointer();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubtractHLPointerFromAContext* subtractHLPointerFromA();

  class  SubtractImmediateFromAContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::NumberContext *source = nullptr;;
    SubtractImmediateFromAContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SubtractCommandNameContext *subtractCommandName();
    NumberContext *number();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubtractImmediateFromAContext* subtractImmediateFromA();

  class  SubtractIXOffsetFromAContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IxPointerWithOffsetContext *source = nullptr;;
    SubtractIXOffsetFromAContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SubtractCommandNameContext *subtractCommandName();
    IxPointerWithOffsetContext *ixPointerWithOffset();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubtractIXOffsetFromAContext* subtractIXOffsetFromA();

  class  SubtractIYOffsetFromAContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IyPointerWithOffsetContext *source = nullptr;;
    SubtractIYOffsetFromAContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SubtractCommandNameContext *subtractCommandName();
    IyPointerWithOffsetContext *iyPointerWithOffset();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubtractIYOffsetFromAContext* subtractIYOffsetFromA();

  class  SubtractIXHighOrLowFromAContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IxHighOrLowRegisterContext *source = nullptr;;
    SubtractIXHighOrLowFromAContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SubtractCommandNameContext *subtractCommandName();
    IxHighOrLowRegisterContext *ixHighOrLowRegister();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubtractIXHighOrLowFromAContext* subtractIXHighOrLowFromA();

  class  SubtractIYHighOrLowFromAContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IyHighOrLowRegisterContext *source = nullptr;;
    SubtractIYHighOrLowFromAContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SubtractCommandNameContext *subtractCommandName();
    IyHighOrLowRegisterContext *iyHighOrLowRegister();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubtractIYHighOrLowFromAContext* subtractIYHighOrLowFromA();

  class  SubtractWithBorrowRegisterFromAContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::SimpleByteRegisterContext *source = nullptr;;
    SubtractWithBorrowRegisterFromAContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SubtractWithBorrowCommandNameContext *subtractWithBorrowCommandName();
    SimpleByteRegisterContext *simpleByteRegister();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubtractWithBorrowRegisterFromAContext* subtractWithBorrowRegisterFromA();

  class  SubtractWithBorrowHLPointerFromAContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::HlPointerContext *source = nullptr;;
    SubtractWithBorrowHLPointerFromAContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SubtractWithBorrowCommandNameContext *subtractWithBorrowCommandName();
    HlPointerContext *hlPointer();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubtractWithBorrowHLPointerFromAContext* subtractWithBorrowHLPointerFromA();

  class  SubtractWithBorrowIXOffsetFromAContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IxPointerWithOffsetContext *source = nullptr;;
    SubtractWithBorrowIXOffsetFromAContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SubtractWithBorrowCommandNameContext *subtractWithBorrowCommandName();
    IxPointerWithOffsetContext *ixPointerWithOffset();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubtractWithBorrowIXOffsetFromAContext* subtractWithBorrowIXOffsetFromA();

  class  SubtractWithBorrowIYOffsetFromAContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IyPointerWithOffsetContext *source = nullptr;;
    SubtractWithBorrowIYOffsetFromAContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SubtractWithBorrowCommandNameContext *subtractWithBorrowCommandName();
    IyPointerWithOffsetContext *iyPointerWithOffset();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubtractWithBorrowIYOffsetFromAContext* subtractWithBorrowIYOffsetFromA();

  class  SubtractWithBorrowImmediateFromAContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::NumberContext *source = nullptr;;
    SubtractWithBorrowImmediateFromAContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SubtractWithBorrowCommandNameContext *subtractWithBorrowCommandName();
    NumberContext *number();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubtractWithBorrowImmediateFromAContext* subtractWithBorrowImmediateFromA();

  class  SubtractWithBorrowIXHFromAContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IxHighRegisterContext *source = nullptr;;
    SubtractWithBorrowIXHFromAContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SubtractWithBorrowCommandNameContext *subtractWithBorrowCommandName();
    IxHighRegisterContext *ixHighRegister();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubtractWithBorrowIXHFromAContext* subtractWithBorrowIXHFromA();

  class  SubtractWithBorrowIXLFromAContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IxLowRegisterContext *source = nullptr;;
    SubtractWithBorrowIXLFromAContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SubtractWithBorrowCommandNameContext *subtractWithBorrowCommandName();
    IxLowRegisterContext *ixLowRegister();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubtractWithBorrowIXLFromAContext* subtractWithBorrowIXLFromA();

  class  SubtractWithBorrowIYHFromAContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IyHighRegisterContext *source = nullptr;;
    SubtractWithBorrowIYHFromAContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SubtractWithBorrowCommandNameContext *subtractWithBorrowCommandName();
    IyHighRegisterContext *iyHighRegister();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubtractWithBorrowIYHFromAContext* subtractWithBorrowIYHFromA();

  class  SubtractWithBorrowIYLFromAContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IyLowRegisterContext *source = nullptr;;
    SubtractWithBorrowIYLFromAContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SubtractWithBorrowCommandNameContext *subtractWithBorrowCommandName();
    IyLowRegisterContext *iyLowRegister();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubtractWithBorrowIYLFromAContext* subtractWithBorrowIYLFromA();

  class  AndAWithRegisterContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::SimpleByteRegisterContext *source = nullptr;;
    AndAWithRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AndCommandNameContext *andCommandName();
    SimpleByteRegisterContext *simpleByteRegister();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AndAWithRegisterContext* andAWithRegister();

  class  AndAWithImmediateContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::NumberContext *source = nullptr;;
    AndAWithImmediateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AndCommandNameContext *andCommandName();
    NumberContext *number();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AndAWithImmediateContext* andAWithImmediate();

  class  AndAWithHLPointerContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::HlPointerContext *source = nullptr;;
    AndAWithHLPointerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AndCommandNameContext *andCommandName();
    HlPointerContext *hlPointer();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AndAWithHLPointerContext* andAWithHLPointer();

  class  AndAWithIXOffsetContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IxPointerWithOffsetContext *source = nullptr;;
    AndAWithIXOffsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AndCommandNameContext *andCommandName();
    IxPointerWithOffsetContext *ixPointerWithOffset();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AndAWithIXOffsetContext* andAWithIXOffset();

  class  AndAWithIYOffsetContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IyPointerWithOffsetContext *source = nullptr;;
    AndAWithIYOffsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AndCommandNameContext *andCommandName();
    IyPointerWithOffsetContext *iyPointerWithOffset();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AndAWithIYOffsetContext* andAWithIYOffset();

  class  AndAWithIXHContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IxHighRegisterContext *source = nullptr;;
    AndAWithIXHContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AndCommandNameContext *andCommandName();
    IxHighRegisterContext *ixHighRegister();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AndAWithIXHContext* andAWithIXH();

  class  AndAWithIXLContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IxLowRegisterContext *source = nullptr;;
    AndAWithIXLContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AndCommandNameContext *andCommandName();
    IxLowRegisterContext *ixLowRegister();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AndAWithIXLContext* andAWithIXL();

  class  AndAWithIYHContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IyHighRegisterContext *source = nullptr;;
    AndAWithIYHContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AndCommandNameContext *andCommandName();
    IyHighRegisterContext *iyHighRegister();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AndAWithIYHContext* andAWithIYH();

  class  AndAWithIYLContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IyLowRegisterContext *source = nullptr;;
    AndAWithIYLContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AndCommandNameContext *andCommandName();
    IyLowRegisterContext *iyLowRegister();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AndAWithIYLContext* andAWithIYL();

  class  OrAWithRegisterContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::SimpleByteRegisterContext *source = nullptr;;
    OrAWithRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OrCommandNameContext *orCommandName();
    SimpleByteRegisterContext *simpleByteRegister();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OrAWithRegisterContext* orAWithRegister();

  class  OrAWithImmediateContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::NumberContext *source = nullptr;;
    OrAWithImmediateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OrCommandNameContext *orCommandName();
    NumberContext *number();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OrAWithImmediateContext* orAWithImmediate();

  class  OrAWithHLPointerContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::HlPointerContext *source = nullptr;;
    OrAWithHLPointerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OrCommandNameContext *orCommandName();
    HlPointerContext *hlPointer();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OrAWithHLPointerContext* orAWithHLPointer();

  class  OrAWithIXOffsetContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IxPointerWithOffsetContext *source = nullptr;;
    OrAWithIXOffsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OrCommandNameContext *orCommandName();
    IxPointerWithOffsetContext *ixPointerWithOffset();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OrAWithIXOffsetContext* orAWithIXOffset();

  class  OrAWithIYOffsetContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IyPointerWithOffsetContext *source = nullptr;;
    OrAWithIYOffsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OrCommandNameContext *orCommandName();
    IyPointerWithOffsetContext *iyPointerWithOffset();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OrAWithIYOffsetContext* orAWithIYOffset();

  class  OrAWithIXHContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IxHighRegisterContext *source = nullptr;;
    OrAWithIXHContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OrCommandNameContext *orCommandName();
    IxHighRegisterContext *ixHighRegister();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OrAWithIXHContext* orAWithIXH();

  class  OrAWithIXLContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IxLowRegisterContext *source = nullptr;;
    OrAWithIXLContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OrCommandNameContext *orCommandName();
    IxLowRegisterContext *ixLowRegister();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OrAWithIXLContext* orAWithIXL();

  class  OrAWithIYHContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IyHighRegisterContext *source = nullptr;;
    OrAWithIYHContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OrCommandNameContext *orCommandName();
    IyHighRegisterContext *iyHighRegister();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OrAWithIYHContext* orAWithIYH();

  class  OrAWithIYLContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IyLowRegisterContext *source = nullptr;;
    OrAWithIYLContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OrCommandNameContext *orCommandName();
    IyLowRegisterContext *iyLowRegister();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OrAWithIYLContext* orAWithIYL();

  class  XorAWithRegisterContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::SimpleByteRegisterContext *source = nullptr;;
    XorAWithRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    XorCommandNameContext *xorCommandName();
    SimpleByteRegisterContext *simpleByteRegister();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  XorAWithRegisterContext* xorAWithRegister();

  class  XorAWithImmediateContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::NumberContext *source = nullptr;;
    XorAWithImmediateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    XorCommandNameContext *xorCommandName();
    NumberContext *number();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  XorAWithImmediateContext* xorAWithImmediate();

  class  XorAWithHLPointerContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::HlPointerContext *source = nullptr;;
    XorAWithHLPointerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    XorCommandNameContext *xorCommandName();
    HlPointerContext *hlPointer();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  XorAWithHLPointerContext* xorAWithHLPointer();

  class  XorAWithIXOffsetContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IxPointerWithOffsetContext *source = nullptr;;
    XorAWithIXOffsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    XorCommandNameContext *xorCommandName();
    IxPointerWithOffsetContext *ixPointerWithOffset();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  XorAWithIXOffsetContext* xorAWithIXOffset();

  class  XorAWithIYOffsetContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IyPointerWithOffsetContext *source = nullptr;;
    XorAWithIYOffsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    XorCommandNameContext *xorCommandName();
    IyPointerWithOffsetContext *iyPointerWithOffset();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  XorAWithIYOffsetContext* xorAWithIYOffset();

  class  XorAWithIXHContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IxHighRegisterContext *source = nullptr;;
    XorAWithIXHContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    XorCommandNameContext *xorCommandName();
    IxHighRegisterContext *ixHighRegister();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  XorAWithIXHContext* xorAWithIXH();

  class  XorAWithIXLContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IxLowRegisterContext *source = nullptr;;
    XorAWithIXLContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    XorCommandNameContext *xorCommandName();
    IxLowRegisterContext *ixLowRegister();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  XorAWithIXLContext* xorAWithIXL();

  class  XorAWithIYHContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IyHighRegisterContext *source = nullptr;;
    XorAWithIYHContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    XorCommandNameContext *xorCommandName();
    IyHighRegisterContext *iyHighRegister();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  XorAWithIYHContext* xorAWithIYH();

  class  XorAWithIYLContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IyLowRegisterContext *source = nullptr;;
    XorAWithIYLContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    XorCommandNameContext *xorCommandName();
    IyLowRegisterContext *iyLowRegister();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  XorAWithIYLContext* xorAWithIYL();

  class  CompareAWithRegisterContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::SimpleByteRegisterContext *source = nullptr;;
    CompareAWithRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CompareCommandNameContext *compareCommandName();
    SimpleByteRegisterContext *simpleByteRegister();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompareAWithRegisterContext* compareAWithRegister();

  class  CompareAWithHLPointerContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::HlPointerContext *source = nullptr;;
    CompareAWithHLPointerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CompareCommandNameContext *compareCommandName();
    HlPointerContext *hlPointer();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompareAWithHLPointerContext* compareAWithHLPointer();

  class  CompareAWithImmediateContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::NumberContext *source = nullptr;;
    CompareAWithImmediateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CompareCommandNameContext *compareCommandName();
    NumberContext *number();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompareAWithImmediateContext* compareAWithImmediate();

  class  CompareAWithIXOffsetContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IxPointerWithOffsetContext *source = nullptr;;
    CompareAWithIXOffsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CompareCommandNameContext *compareCommandName();
    IxPointerWithOffsetContext *ixPointerWithOffset();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompareAWithIXOffsetContext* compareAWithIXOffset();

  class  CompareAWithIYOffsetContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IyPointerWithOffsetContext *source = nullptr;;
    CompareAWithIYOffsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CompareCommandNameContext *compareCommandName();
    IyPointerWithOffsetContext *iyPointerWithOffset();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompareAWithIYOffsetContext* compareAWithIYOffset();

  class  CompareAWithIXHContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IxHighRegisterContext *source = nullptr;;
    CompareAWithIXHContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CompareCommandNameContext *compareCommandName();
    IxHighRegisterContext *ixHighRegister();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompareAWithIXHContext* compareAWithIXH();

  class  CompareAWithIXLContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IxLowRegisterContext *source = nullptr;;
    CompareAWithIXLContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CompareCommandNameContext *compareCommandName();
    IxLowRegisterContext *ixLowRegister();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompareAWithIXLContext* compareAWithIXL();

  class  CompareAWithIYHContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IyHighRegisterContext *source = nullptr;;
    CompareAWithIYHContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CompareCommandNameContext *compareCommandName();
    IyHighRegisterContext *iyHighRegister();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompareAWithIYHContext* compareAWithIYH();

  class  CompareAWithIYLContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IyLowRegisterContext *source = nullptr;;
    CompareAWithIYLContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CompareCommandNameContext *compareCommandName();
    IyLowRegisterContext *iyLowRegister();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompareAWithIYLContext* compareAWithIYL();

  class  IncrementRegisterContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::SimpleByteRegisterContext *source = nullptr;;
    IncrementRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IncrementCommandNameContext *incrementCommandName();
    SimpleByteRegisterContext *simpleByteRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IncrementRegisterContext* incrementRegister();

  class  IncrementIXHContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IxHighRegisterContext *source = nullptr;;
    IncrementIXHContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IncrementCommandNameContext *incrementCommandName();
    IxHighRegisterContext *ixHighRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IncrementIXHContext* incrementIXH();

  class  IncrementIXLContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IxLowRegisterContext *source = nullptr;;
    IncrementIXLContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IncrementCommandNameContext *incrementCommandName();
    IxLowRegisterContext *ixLowRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IncrementIXLContext* incrementIXL();

  class  IncrementIYHContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IyHighRegisterContext *source = nullptr;;
    IncrementIYHContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IncrementCommandNameContext *incrementCommandName();
    IyHighRegisterContext *iyHighRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IncrementIYHContext* incrementIYH();

  class  IncrementIYLContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IyLowRegisterContext *source = nullptr;;
    IncrementIYLContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IncrementCommandNameContext *incrementCommandName();
    IyLowRegisterContext *iyLowRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IncrementIYLContext* incrementIYL();

  class  IncrementHLPointerContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::HlPointerContext *source = nullptr;;
    IncrementHLPointerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IncrementCommandNameContext *incrementCommandName();
    HlPointerContext *hlPointer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IncrementHLPointerContext* incrementHLPointer();

  class  IncrementIXOffsetContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IxPointerWithOffsetContext *source = nullptr;;
    IncrementIXOffsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IncrementCommandNameContext *incrementCommandName();
    IxPointerWithOffsetContext *ixPointerWithOffset();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IncrementIXOffsetContext* incrementIXOffset();

  class  IncrementIYOffsetContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IyPointerWithOffsetContext *source = nullptr;;
    IncrementIYOffsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IncrementCommandNameContext *incrementCommandName();
    IyPointerWithOffsetContext *iyPointerWithOffset();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IncrementIYOffsetContext* incrementIYOffset();

  class  DecrementRegisterContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::SimpleByteRegisterContext *source = nullptr;;
    DecrementRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DecrementCommandNameContext *decrementCommandName();
    SimpleByteRegisterContext *simpleByteRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DecrementRegisterContext* decrementRegister();

  class  DecrementIXHContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IxHighRegisterContext *source = nullptr;;
    DecrementIXHContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DecrementCommandNameContext *decrementCommandName();
    IxHighRegisterContext *ixHighRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DecrementIXHContext* decrementIXH();

  class  DecrementIXLContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IxLowRegisterContext *source = nullptr;;
    DecrementIXLContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DecrementCommandNameContext *decrementCommandName();
    IxLowRegisterContext *ixLowRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DecrementIXLContext* decrementIXL();

  class  DecrementIYHContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IyHighRegisterContext *source = nullptr;;
    DecrementIYHContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DecrementCommandNameContext *decrementCommandName();
    IyHighRegisterContext *iyHighRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DecrementIYHContext* decrementIYH();

  class  DecrementIYLContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IyLowRegisterContext *source = nullptr;;
    DecrementIYLContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DecrementCommandNameContext *decrementCommandName();
    IyLowRegisterContext *iyLowRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DecrementIYLContext* decrementIYL();

  class  DecrementHLPointerContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::HlPointerContext *source = nullptr;;
    DecrementHLPointerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DecrementCommandNameContext *decrementCommandName();
    HlPointerContext *hlPointer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DecrementHLPointerContext* decrementHLPointer();

  class  DecrementIXOffsetContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IxPointerWithOffsetContext *source = nullptr;;
    DecrementIXOffsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DecrementCommandNameContext *decrementCommandName();
    IxPointerWithOffsetContext *ixPointerWithOffset();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DecrementIXOffsetContext* decrementIXOffset();

  class  DecrementIYOffsetContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IyPointerWithOffsetContext *source = nullptr;;
    DecrementIYOffsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DecrementCommandNameContext *decrementCommandName();
    IyPointerWithOffsetContext *iyPointerWithOffset();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DecrementIYOffsetContext* decrementIYOffset();

  class  ArithmeticCommandContext : public antlr4::ParserRuleContext {
  public:
    ArithmeticCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AddAAndRegisterContext *addAAndRegister();
    AddAAndImmediateByteContext *addAAndImmediateByte();
    AddAAndIXHContext *addAAndIXH();
    AddAAndIXLContext *addAAndIXL();
    AddAAndIYHContext *addAAndIYH();
    AddAAndIYLContext *addAAndIYL();
    AddAAndHLPointerContext *addAAndHLPointer();
    AddAAndIXOffsetContext *addAAndIXOffset();
    AddAAndIYOffsetContext *addAAndIYOffset();
    AddWithCarryAAndRegisterContext *addWithCarryAAndRegister();
    AddWithCarryAAndHLPointerContext *addWithCarryAAndHLPointer();
    AddWithCarryAAndImmediateContext *addWithCarryAAndImmediate();
    AddWithCarryAAndIXOffsetContext *addWithCarryAAndIXOffset();
    AddWithCarryAAndIYOffsetContext *addWithCarryAAndIYOffset();
    AddWithCarryAAndIXHContext *addWithCarryAAndIXH();
    AddWithCarryAAndIXLContext *addWithCarryAAndIXL();
    AddWithCarryAAndIYHContext *addWithCarryAAndIYH();
    AddWithCarryAAndIYLContext *addWithCarryAAndIYL();
    SubtractRegisterFromAContext *subtractRegisterFromA();
    SubtractHLPointerFromAContext *subtractHLPointerFromA();
    SubtractImmediateFromAContext *subtractImmediateFromA();
    SubtractIXOffsetFromAContext *subtractIXOffsetFromA();
    SubtractIYOffsetFromAContext *subtractIYOffsetFromA();
    SubtractWithBorrowRegisterFromAContext *subtractWithBorrowRegisterFromA();
    SubtractWithBorrowHLPointerFromAContext *subtractWithBorrowHLPointerFromA();
    SubtractWithBorrowIXOffsetFromAContext *subtractWithBorrowIXOffsetFromA();
    SubtractWithBorrowIYOffsetFromAContext *subtractWithBorrowIYOffsetFromA();
    SubtractWithBorrowImmediateFromAContext *subtractWithBorrowImmediateFromA();
    SubtractWithBorrowIXHFromAContext *subtractWithBorrowIXHFromA();
    SubtractWithBorrowIXLFromAContext *subtractWithBorrowIXLFromA();
    SubtractWithBorrowIYHFromAContext *subtractWithBorrowIYHFromA();
    SubtractWithBorrowIYLFromAContext *subtractWithBorrowIYLFromA();
    SubtractIXHighOrLowFromAContext *subtractIXHighOrLowFromA();
    SubtractIYHighOrLowFromAContext *subtractIYHighOrLowFromA();
    AndAWithRegisterContext *andAWithRegister();
    AndAWithImmediateContext *andAWithImmediate();
    AndAWithHLPointerContext *andAWithHLPointer();
    AndAWithIXOffsetContext *andAWithIXOffset();
    AndAWithIYOffsetContext *andAWithIYOffset();
    AndAWithIXHContext *andAWithIXH();
    AndAWithIXLContext *andAWithIXL();
    AndAWithIYHContext *andAWithIYH();
    AndAWithIYLContext *andAWithIYL();
    OrAWithRegisterContext *orAWithRegister();
    OrAWithImmediateContext *orAWithImmediate();
    OrAWithHLPointerContext *orAWithHLPointer();
    OrAWithIXOffsetContext *orAWithIXOffset();
    OrAWithIYOffsetContext *orAWithIYOffset();
    OrAWithIXHContext *orAWithIXH();
    OrAWithIXLContext *orAWithIXL();
    OrAWithIYHContext *orAWithIYH();
    OrAWithIYLContext *orAWithIYL();
    XorAWithRegisterContext *xorAWithRegister();
    XorAWithImmediateContext *xorAWithImmediate();
    XorAWithHLPointerContext *xorAWithHLPointer();
    XorAWithIXOffsetContext *xorAWithIXOffset();
    XorAWithIYOffsetContext *xorAWithIYOffset();
    XorAWithIXHContext *xorAWithIXH();
    XorAWithIXLContext *xorAWithIXL();
    XorAWithIYHContext *xorAWithIYH();
    XorAWithIYLContext *xorAWithIYL();
    CompareAWithRegisterContext *compareAWithRegister();
    CompareAWithHLPointerContext *compareAWithHLPointer();
    CompareAWithImmediateContext *compareAWithImmediate();
    CompareAWithIXOffsetContext *compareAWithIXOffset();
    CompareAWithIYOffsetContext *compareAWithIYOffset();
    CompareAWithIXHContext *compareAWithIXH();
    CompareAWithIXLContext *compareAWithIXL();
    CompareAWithIYHContext *compareAWithIYH();
    CompareAWithIYLContext *compareAWithIYL();
    IncrementRegisterContext *incrementRegister();
    IncrementIXHContext *incrementIXH();
    IncrementIXLContext *incrementIXL();
    IncrementIYHContext *incrementIYH();
    IncrementIYLContext *incrementIYL();
    IncrementHLPointerContext *incrementHLPointer();
    IncrementIXOffsetContext *incrementIXOffset();
    IncrementIYOffsetContext *incrementIYOffset();
    DecrementRegisterContext *decrementRegister();
    DecrementIXHContext *decrementIXH();
    DecrementIXLContext *decrementIXL();
    DecrementIYHContext *decrementIYH();
    DecrementIYLContext *decrementIYL();
    DecrementHLPointerContext *decrementHLPointer();
    DecrementIXOffsetContext *decrementIXOffset();
    DecrementIYOffsetContext *decrementIYOffset();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArithmeticCommandContext* arithmeticCommand();

  class  DecimalAdjustAContext : public antlr4::ParserRuleContext {
  public:
    DecimalAdjustAContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DecimalAdjustAContext* decimalAdjustA();

  class  ComplementAContext : public antlr4::ParserRuleContext {
  public:
    ComplementAContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ComplementAContext* complementA();

  class  NegateAContext : public antlr4::ParserRuleContext {
  public:
    NegateAContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NegateAContext* negateA();

  class  ComplementCarryFlagContext : public antlr4::ParserRuleContext {
  public:
    ComplementCarryFlagContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ComplementCarryFlagContext* complementCarryFlag();

  class  SetCarryFlagContext : public antlr4::ParserRuleContext {
  public:
    SetCarryFlagContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SetCarryFlagContext* setCarryFlag();

  class  NopContext : public antlr4::ParserRuleContext {
  public:
    NopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NopContext* nop();

  class  HaltContext : public antlr4::ParserRuleContext {
  public:
    HaltContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  HaltContext* halt();

  class  DisableInterruptsContext : public antlr4::ParserRuleContext {
  public:
    DisableInterruptsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DisableInterruptsContext* disableInterrupts();

  class  EnableInterruptsContext : public antlr4::ParserRuleContext {
  public:
    EnableInterruptsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnableInterruptsContext* enableInterrupts();

  class  SetInterruptModeContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::NumberContext *source = nullptr;;
    SetInterruptModeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SetInterruptModeContext* setInterruptMode();

  class  ArithmeticControlCommandContext : public antlr4::ParserRuleContext {
  public:
    ArithmeticControlCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DecimalAdjustAContext *decimalAdjustA();
    ComplementAContext *complementA();
    NegateAContext *negateA();
    ComplementCarryFlagContext *complementCarryFlag();
    SetCarryFlagContext *setCarryFlag();
    NopContext *nop();
    HaltContext *halt();
    DisableInterruptsContext *disableInterrupts();
    EnableInterruptsContext *enableInterrupts();
    SetInterruptModeContext *setInterruptMode();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArithmeticControlCommandContext* arithmeticControlCommand();

  class  AddHLAndWordRegisterContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::HlRegisterContext *dest = nullptr;;
    Z80Parser::SimpleWordRegisterContext *source = nullptr;;
    AddHLAndWordRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AddCommandNameContext *addCommandName();
    HlRegisterContext *hlRegister();
    SimpleWordRegisterContext *simpleWordRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AddHLAndWordRegisterContext* addHLAndWordRegister();

  class  AddWithCarryHLAndWordRegisterContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::HlRegisterContext *dest = nullptr;;
    Z80Parser::SimpleWordRegisterContext *source = nullptr;;
    AddWithCarryHLAndWordRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AddWithCarryCommandNameContext *addWithCarryCommandName();
    HlRegisterContext *hlRegister();
    SimpleWordRegisterContext *simpleWordRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AddWithCarryHLAndWordRegisterContext* addWithCarryHLAndWordRegister();

  class  SubtractWithCarryWordRegisterFromHLContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::HlRegisterContext *dest = nullptr;;
    Z80Parser::SimpleWordRegisterContext *source = nullptr;;
    SubtractWithCarryWordRegisterFromHLContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SubtractWithBorrowCommandNameContext *subtractWithBorrowCommandName();
    HlRegisterContext *hlRegister();
    SimpleWordRegisterContext *simpleWordRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubtractWithCarryWordRegisterFromHLContext* subtractWithCarryWordRegisterFromHL();

  class  SimpleIXAdditionRegisterContext : public antlr4::ParserRuleContext {
  public:
    SimpleIXAdditionRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BcRegisterContext *bcRegister();
    DeRegisterContext *deRegister();
    IxRegisterContext *ixRegister();
    SpRegisterContext *spRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SimpleIXAdditionRegisterContext* simpleIXAdditionRegister();

  class  SimpleIYAdditionRegisterContext : public antlr4::ParserRuleContext {
  public:
    SimpleIYAdditionRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BcRegisterContext *bcRegister();
    DeRegisterContext *deRegister();
    IyRegisterContext *iyRegister();
    SpRegisterContext *spRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SimpleIYAdditionRegisterContext* simpleIYAdditionRegister();

  class  AddIXWithRegisterContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IxRegisterContext *dest = nullptr;;
    Z80Parser::SimpleIXAdditionRegisterContext *source = nullptr;;
    AddIXWithRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AddCommandNameContext *addCommandName();
    IxRegisterContext *ixRegister();
    SimpleIXAdditionRegisterContext *simpleIXAdditionRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AddIXWithRegisterContext* addIXWithRegister();

  class  AddIYWithRegisterContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IyRegisterContext *dest = nullptr;;
    Z80Parser::SimpleIYAdditionRegisterContext *source = nullptr;;
    AddIYWithRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AddCommandNameContext *addCommandName();
    IyRegisterContext *iyRegister();
    SimpleIYAdditionRegisterContext *simpleIYAdditionRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AddIYWithRegisterContext* addIYWithRegister();

  class  IncrementWordRegisterContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::SimpleWordRegisterContext *source = nullptr;;
    IncrementWordRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IncrementCommandNameContext *incrementCommandName();
    SimpleWordRegisterContext *simpleWordRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IncrementWordRegisterContext* incrementWordRegister();

  class  IncrementIXContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IxRegisterContext *source = nullptr;;
    IncrementIXContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IncrementCommandNameContext *incrementCommandName();
    IxRegisterContext *ixRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IncrementIXContext* incrementIX();

  class  IncrementIYContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IyRegisterContext *source = nullptr;;
    IncrementIYContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IncrementCommandNameContext *incrementCommandName();
    IyRegisterContext *iyRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IncrementIYContext* incrementIY();

  class  DecrementWordRegisterContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::SimpleWordRegisterContext *source = nullptr;;
    DecrementWordRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DecrementCommandNameContext *decrementCommandName();
    SimpleWordRegisterContext *simpleWordRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DecrementWordRegisterContext* decrementWordRegister();

  class  DecrementIXContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IxRegisterContext *source = nullptr;;
    DecrementIXContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DecrementCommandNameContext *decrementCommandName();
    IxRegisterContext *ixRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DecrementIXContext* decrementIX();

  class  DecrementIYContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IyRegisterContext *source = nullptr;;
    DecrementIYContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DecrementCommandNameContext *decrementCommandName();
    IyRegisterContext *iyRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DecrementIYContext* decrementIY();

  class  WordArithemeticCommandContext : public antlr4::ParserRuleContext {
  public:
    WordArithemeticCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AddHLAndWordRegisterContext *addHLAndWordRegister();
    AddWithCarryHLAndWordRegisterContext *addWithCarryHLAndWordRegister();
    SubtractWithCarryWordRegisterFromHLContext *subtractWithCarryWordRegisterFromHL();
    AddIXWithRegisterContext *addIXWithRegister();
    AddIYWithRegisterContext *addIYWithRegister();
    IncrementWordRegisterContext *incrementWordRegister();
    IncrementIXContext *incrementIX();
    IncrementIYContext *incrementIY();
    DecrementWordRegisterContext *decrementWordRegister();
    DecrementIXContext *decrementIX();
    DecrementIYContext *decrementIY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WordArithemeticCommandContext* wordArithemeticCommand();

  class  RotateLeftCircularAContext : public antlr4::ParserRuleContext {
  public:
    RotateLeftCircularAContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RotateLeftCircularAContext* rotateLeftCircularA();

  class  RotateLeftThroughCarryAContext : public antlr4::ParserRuleContext {
  public:
    RotateLeftThroughCarryAContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RotateLeftThroughCarryAContext* rotateLeftThroughCarryA();

  class  RotateRightCircularAContext : public antlr4::ParserRuleContext {
  public:
    RotateRightCircularAContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RotateRightCircularAContext* rotateRightCircularA();

  class  RotateRightThroughCarryAContext : public antlr4::ParserRuleContext {
  public:
    RotateRightThroughCarryAContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RotateRightThroughCarryAContext* rotateRightThroughCarryA();

  class  RotateLeftCircularCommandNameContext : public antlr4::ParserRuleContext {
  public:
    RotateLeftCircularCommandNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RotateLeftCircularCommandNameContext* rotateLeftCircularCommandName();

  class  RotateLeftThroughCarryCommandNameContext : public antlr4::ParserRuleContext {
  public:
    RotateLeftThroughCarryCommandNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RotateLeftThroughCarryCommandNameContext* rotateLeftThroughCarryCommandName();

  class  RotateRightCircularCommandNameContext : public antlr4::ParserRuleContext {
  public:
    RotateRightCircularCommandNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RotateRightCircularCommandNameContext* rotateRightCircularCommandName();

  class  RotateRightThroughCarryCommandNameContext : public antlr4::ParserRuleContext {
  public:
    RotateRightThroughCarryCommandNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RotateRightThroughCarryCommandNameContext* rotateRightThroughCarryCommandName();

  class  ShiftLeftArithmeticCommandNameContext : public antlr4::ParserRuleContext {
  public:
    ShiftLeftArithmeticCommandNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ShiftLeftArithmeticCommandNameContext* shiftLeftArithmeticCommandName();

  class  ShiftLeftLogicalCommandNameContext : public antlr4::ParserRuleContext {
  public:
    ShiftLeftLogicalCommandNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ShiftLeftLogicalCommandNameContext* shiftLeftLogicalCommandName();

  class  ShiftRightArithmeticCommandNameContext : public antlr4::ParserRuleContext {
  public:
    ShiftRightArithmeticCommandNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ShiftRightArithmeticCommandNameContext* shiftRightArithmeticCommandName();

  class  ShiftRightLogicalCommandNameContext : public antlr4::ParserRuleContext {
  public:
    ShiftRightLogicalCommandNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ShiftRightLogicalCommandNameContext* shiftRightLogicalCommandName();

  class  RotateDigitLeftCommandNameContext : public antlr4::ParserRuleContext {
  public:
    RotateDigitLeftCommandNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RotateDigitLeftCommandNameContext* rotateDigitLeftCommandName();

  class  RotateDigitRightCommandNameContext : public antlr4::ParserRuleContext {
  public:
    RotateDigitRightCommandNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RotateDigitRightCommandNameContext* rotateDigitRightCommandName();

  class  RotateLeftCircularRegisterContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::SimpleByteRegisterContext *source = nullptr;;
    RotateLeftCircularRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RotateLeftCircularCommandNameContext *rotateLeftCircularCommandName();
    SimpleByteRegisterContext *simpleByteRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RotateLeftCircularRegisterContext* rotateLeftCircularRegister();

  class  RotateLeftCircularHLPointerContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::HlPointerContext *source = nullptr;;
    RotateLeftCircularHLPointerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RotateLeftCircularCommandNameContext *rotateLeftCircularCommandName();
    HlPointerContext *hlPointer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RotateLeftCircularHLPointerContext* rotateLeftCircularHLPointer();

  class  RotateLeftCircularIXOffsetContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IxPointerWithOffsetContext *source = nullptr;;
    RotateLeftCircularIXOffsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RotateLeftCircularCommandNameContext *rotateLeftCircularCommandName();
    IxPointerWithOffsetContext *ixPointerWithOffset();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RotateLeftCircularIXOffsetContext* rotateLeftCircularIXOffset();

  class  RotateLeftCircularIYOffsetContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IyPointerWithOffsetContext *source = nullptr;;
    RotateLeftCircularIYOffsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RotateLeftCircularCommandNameContext *rotateLeftCircularCommandName();
    IyPointerWithOffsetContext *iyPointerWithOffset();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RotateLeftCircularIYOffsetContext* rotateLeftCircularIYOffset();

  class  RotateLeftThroughCarryRegisterContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::SimpleByteRegisterContext *source = nullptr;;
    RotateLeftThroughCarryRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RotateLeftThroughCarryCommandNameContext *rotateLeftThroughCarryCommandName();
    SimpleByteRegisterContext *simpleByteRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RotateLeftThroughCarryRegisterContext* rotateLeftThroughCarryRegister();

  class  RotateLeftThroughCarryHLPointerContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::HlPointerContext *source = nullptr;;
    RotateLeftThroughCarryHLPointerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RotateLeftThroughCarryCommandNameContext *rotateLeftThroughCarryCommandName();
    HlPointerContext *hlPointer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RotateLeftThroughCarryHLPointerContext* rotateLeftThroughCarryHLPointer();

  class  RotateLeftThroughCarryIXOffsetContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IxPointerWithOffsetContext *source = nullptr;;
    RotateLeftThroughCarryIXOffsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RotateLeftThroughCarryCommandNameContext *rotateLeftThroughCarryCommandName();
    IxPointerWithOffsetContext *ixPointerWithOffset();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RotateLeftThroughCarryIXOffsetContext* rotateLeftThroughCarryIXOffset();

  class  RotateLeftThroughCarryIYOffsetContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IyPointerWithOffsetContext *source = nullptr;;
    RotateLeftThroughCarryIYOffsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RotateLeftThroughCarryCommandNameContext *rotateLeftThroughCarryCommandName();
    IyPointerWithOffsetContext *iyPointerWithOffset();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RotateLeftThroughCarryIYOffsetContext* rotateLeftThroughCarryIYOffset();

  class  RotateRightCircularRegisterContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::SimpleByteRegisterContext *source = nullptr;;
    RotateRightCircularRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RotateRightCircularCommandNameContext *rotateRightCircularCommandName();
    SimpleByteRegisterContext *simpleByteRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RotateRightCircularRegisterContext* rotateRightCircularRegister();

  class  RotateRightCircularHLPointerContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::HlPointerContext *source = nullptr;;
    RotateRightCircularHLPointerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RotateRightCircularCommandNameContext *rotateRightCircularCommandName();
    HlPointerContext *hlPointer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RotateRightCircularHLPointerContext* rotateRightCircularHLPointer();

  class  RotateRightCircularIXOffsetContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IxPointerWithOffsetContext *source = nullptr;;
    RotateRightCircularIXOffsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RotateRightCircularCommandNameContext *rotateRightCircularCommandName();
    IxPointerWithOffsetContext *ixPointerWithOffset();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RotateRightCircularIXOffsetContext* rotateRightCircularIXOffset();

  class  RotateRightCircularIYOffsetContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IyPointerWithOffsetContext *source = nullptr;;
    RotateRightCircularIYOffsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RotateRightCircularCommandNameContext *rotateRightCircularCommandName();
    IyPointerWithOffsetContext *iyPointerWithOffset();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RotateRightCircularIYOffsetContext* rotateRightCircularIYOffset();

  class  RotateRightThroughCarryRegisterContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::SimpleByteRegisterContext *source = nullptr;;
    RotateRightThroughCarryRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RotateRightThroughCarryCommandNameContext *rotateRightThroughCarryCommandName();
    SimpleByteRegisterContext *simpleByteRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RotateRightThroughCarryRegisterContext* rotateRightThroughCarryRegister();

  class  RotateRightThroughCarryHLPointerContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::HlPointerContext *source = nullptr;;
    RotateRightThroughCarryHLPointerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RotateRightThroughCarryCommandNameContext *rotateRightThroughCarryCommandName();
    HlPointerContext *hlPointer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RotateRightThroughCarryHLPointerContext* rotateRightThroughCarryHLPointer();

  class  RotateRightThroughCarryIXOffsetContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IxPointerWithOffsetContext *source = nullptr;;
    RotateRightThroughCarryIXOffsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RotateRightThroughCarryCommandNameContext *rotateRightThroughCarryCommandName();
    IxPointerWithOffsetContext *ixPointerWithOffset();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RotateRightThroughCarryIXOffsetContext* rotateRightThroughCarryIXOffset();

  class  RotateRightThroughCarryIYOffsetContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::IyPointerWithOffsetContext *source = nullptr;;
    RotateRightThroughCarryIYOffsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RotateRightThroughCarryCommandNameContext *rotateRightThroughCarryCommandName();
    IyPointerWithOffsetContext *iyPointerWithOffset();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RotateRightThroughCarryIYOffsetContext* rotateRightThroughCarryIYOffset();

  class  ShiftLeftArithmeticContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::SimpleByteRegisterContext *source = nullptr;;
    ShiftLeftArithmeticContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ShiftLeftArithmeticCommandNameContext *shiftLeftArithmeticCommandName();
    SimpleByteRegisterContext *simpleByteRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ShiftLeftArithmeticContext* shiftLeftArithmetic();

  class  ShiftLeftLogicalContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::SimpleByteRegisterContext *source = nullptr;;
    ShiftLeftLogicalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ShiftLeftLogicalCommandNameContext *shiftLeftLogicalCommandName();
    SimpleByteRegisterContext *simpleByteRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ShiftLeftLogicalContext* shiftLeftLogical();

  class  ShiftRightArithmeticContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::SimpleByteRegisterContext *source = nullptr;;
    ShiftRightArithmeticContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ShiftRightArithmeticCommandNameContext *shiftRightArithmeticCommandName();
    SimpleByteRegisterContext *simpleByteRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ShiftRightArithmeticContext* shiftRightArithmetic();

  class  ShiftRightLogicalContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::SimpleByteRegisterContext *source = nullptr;;
    ShiftRightLogicalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ShiftRightLogicalCommandNameContext *shiftRightLogicalCommandName();
    SimpleByteRegisterContext *simpleByteRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ShiftRightLogicalContext* shiftRightLogical();

  class  RotateDigitLeftContext : public antlr4::ParserRuleContext {
  public:
    RotateDigitLeftContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RotateDigitLeftCommandNameContext *rotateDigitLeftCommandName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RotateDigitLeftContext* rotateDigitLeft();

  class  RotateDigitRightContext : public antlr4::ParserRuleContext {
  public:
    RotateDigitRightContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RotateDigitRightCommandNameContext *rotateDigitRightCommandName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RotateDigitRightContext* rotateDigitRight();

  class  RotateCommandContext : public antlr4::ParserRuleContext {
  public:
    RotateCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RotateLeftCircularAContext *rotateLeftCircularA();
    RotateLeftThroughCarryAContext *rotateLeftThroughCarryA();
    RotateRightCircularAContext *rotateRightCircularA();
    RotateRightThroughCarryAContext *rotateRightThroughCarryA();
    RotateLeftCircularRegisterContext *rotateLeftCircularRegister();
    RotateLeftCircularHLPointerContext *rotateLeftCircularHLPointer();
    RotateLeftCircularIXOffsetContext *rotateLeftCircularIXOffset();
    RotateLeftCircularIYOffsetContext *rotateLeftCircularIYOffset();
    RotateLeftThroughCarryRegisterContext *rotateLeftThroughCarryRegister();
    RotateLeftThroughCarryHLPointerContext *rotateLeftThroughCarryHLPointer();
    RotateLeftThroughCarryIXOffsetContext *rotateLeftThroughCarryIXOffset();
    RotateLeftThroughCarryIYOffsetContext *rotateLeftThroughCarryIYOffset();
    RotateRightCircularRegisterContext *rotateRightCircularRegister();
    RotateRightCircularHLPointerContext *rotateRightCircularHLPointer();
    RotateRightCircularIXOffsetContext *rotateRightCircularIXOffset();
    RotateRightCircularIYOffsetContext *rotateRightCircularIYOffset();
    RotateRightThroughCarryRegisterContext *rotateRightThroughCarryRegister();
    RotateRightThroughCarryHLPointerContext *rotateRightThroughCarryHLPointer();
    RotateRightThroughCarryIXOffsetContext *rotateRightThroughCarryIXOffset();
    RotateRightThroughCarryIYOffsetContext *rotateRightThroughCarryIYOffset();
    ShiftLeftArithmeticContext *shiftLeftArithmetic();
    ShiftLeftLogicalContext *shiftLeftLogical();
    ShiftRightArithmeticContext *shiftRightArithmetic();
    ShiftRightLogicalContext *shiftRightLogical();
    RotateDigitLeftContext *rotateDigitLeft();
    RotateDigitRightContext *rotateDigitRight();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RotateCommandContext* rotateCommand();

  class  BitCommandNameContext : public antlr4::ParserRuleContext {
  public:
    BitCommandNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BitCommandNameContext* bitCommandName();

  class  SetCommandNameContext : public antlr4::ParserRuleContext {
  public:
    SetCommandNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SetCommandNameContext* setCommandName();

  class  ResetBitCommandNameContext : public antlr4::ParserRuleContext {
  public:
    ResetBitCommandNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ResetBitCommandNameContext* resetBitCommandName();

  class  TestBitInRegisterContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::NumberContext *bit = nullptr;;
    Z80Parser::SimpleByteRegisterContext *source = nullptr;;
    TestBitInRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BitCommandNameContext *bitCommandName();
    NumberContext *number();
    SimpleByteRegisterContext *simpleByteRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TestBitInRegisterContext* testBitInRegister();

  class  TestBitInHLPointerContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::NumberContext *bit = nullptr;;
    Z80Parser::HlPointerContext *source = nullptr;;
    TestBitInHLPointerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BitCommandNameContext *bitCommandName();
    NumberContext *number();
    HlPointerContext *hlPointer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TestBitInHLPointerContext* testBitInHLPointer();

  class  TestBitInIXOffsetContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::NumberContext *bit = nullptr;;
    Z80Parser::IxPointerWithOffsetContext *source = nullptr;;
    TestBitInIXOffsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BitCommandNameContext *bitCommandName();
    NumberContext *number();
    IxPointerWithOffsetContext *ixPointerWithOffset();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TestBitInIXOffsetContext* testBitInIXOffset();

  class  TestBitInIYOffsetContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::NumberContext *bit = nullptr;;
    Z80Parser::IyPointerWithOffsetContext *source = nullptr;;
    TestBitInIYOffsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BitCommandNameContext *bitCommandName();
    NumberContext *number();
    IyPointerWithOffsetContext *iyPointerWithOffset();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TestBitInIYOffsetContext* testBitInIYOffset();

  class  SetBitInRegisterContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::NumberContext *bit = nullptr;;
    Z80Parser::SimpleByteRegisterContext *source = nullptr;;
    SetBitInRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SetCommandNameContext *setCommandName();
    NumberContext *number();
    SimpleByteRegisterContext *simpleByteRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SetBitInRegisterContext* setBitInRegister();

  class  SetBitInHLPointerContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::NumberContext *bit = nullptr;;
    Z80Parser::HlPointerContext *source = nullptr;;
    SetBitInHLPointerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SetCommandNameContext *setCommandName();
    NumberContext *number();
    HlPointerContext *hlPointer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SetBitInHLPointerContext* setBitInHLPointer();

  class  SetBitInIXOffsetContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::NumberContext *bit = nullptr;;
    Z80Parser::IxPointerWithOffsetContext *source = nullptr;;
    SetBitInIXOffsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SetCommandNameContext *setCommandName();
    NumberContext *number();
    IxPointerWithOffsetContext *ixPointerWithOffset();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SetBitInIXOffsetContext* setBitInIXOffset();

  class  SetBitInIYOffsetContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::NumberContext *bit = nullptr;;
    Z80Parser::IyPointerWithOffsetContext *source = nullptr;;
    SetBitInIYOffsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SetCommandNameContext *setCommandName();
    NumberContext *number();
    IyPointerWithOffsetContext *iyPointerWithOffset();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SetBitInIYOffsetContext* setBitInIYOffset();

  class  ResetBitInRegisterContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::NumberContext *bit = nullptr;;
    Z80Parser::SimpleByteRegisterContext *source = nullptr;;
    ResetBitInRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ResetBitCommandNameContext *resetBitCommandName();
    NumberContext *number();
    SimpleByteRegisterContext *simpleByteRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ResetBitInRegisterContext* resetBitInRegister();

  class  ResetBitHLPointerContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::NumberContext *bit = nullptr;;
    Z80Parser::HlPointerContext *source = nullptr;;
    ResetBitHLPointerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ResetBitCommandNameContext *resetBitCommandName();
    NumberContext *number();
    HlPointerContext *hlPointer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ResetBitHLPointerContext* resetBitHLPointer();

  class  ResetBitIXOffsetContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::NumberContext *bit = nullptr;;
    Z80Parser::IxPointerWithOffsetContext *source = nullptr;;
    ResetBitIXOffsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ResetBitCommandNameContext *resetBitCommandName();
    NumberContext *number();
    IxPointerWithOffsetContext *ixPointerWithOffset();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ResetBitIXOffsetContext* resetBitIXOffset();

  class  ResetBitIYOffsetContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::NumberContext *bit = nullptr;;
    Z80Parser::IyPointerWithOffsetContext *source = nullptr;;
    ResetBitIYOffsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ResetBitCommandNameContext *resetBitCommandName();
    NumberContext *number();
    IyPointerWithOffsetContext *iyPointerWithOffset();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ResetBitIYOffsetContext* resetBitIYOffset();

  class  BitManipulationCommandContext : public antlr4::ParserRuleContext {
  public:
    BitManipulationCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TestBitInRegisterContext *testBitInRegister();
    TestBitInHLPointerContext *testBitInHLPointer();
    TestBitInIXOffsetContext *testBitInIXOffset();
    TestBitInIYOffsetContext *testBitInIYOffset();
    SetBitInRegisterContext *setBitInRegister();
    SetBitInHLPointerContext *setBitInHLPointer();
    SetBitInIXOffsetContext *setBitInIXOffset();
    SetBitInIYOffsetContext *setBitInIYOffset();
    ResetBitInRegisterContext *resetBitInRegister();
    ResetBitHLPointerContext *resetBitHLPointer();
    ResetBitIXOffsetContext *resetBitIXOffset();
    ResetBitIYOffsetContext *resetBitIYOffset();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BitManipulationCommandContext* bitManipulationCommand();

  class  JumpConditionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *zero = nullptr;;
    antlr4::Token *notZero = nullptr;;
    antlr4::Token *carry = nullptr;;
    antlr4::Token *notCarry = nullptr;;
    antlr4::Token *parityOdd = nullptr;;
    antlr4::Token *parityEven = nullptr;;
    antlr4::Token *positive = nullptr;;
    antlr4::Token *negative = nullptr;;
    JumpConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  JumpConditionContext* jumpCondition();

  class  JumpCommandNameContext : public antlr4::ParserRuleContext {
  public:
    JumpCommandNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  JumpCommandNameContext* jumpCommandName();

  class  JumpRelativeCommandNameContext : public antlr4::ParserRuleContext {
  public:
    JumpRelativeCommandNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  JumpRelativeCommandNameContext* jumpRelativeCommandName();

  class  JumpRelativeAndDecrementCommandNameContext : public antlr4::ParserRuleContext {
  public:
    JumpRelativeAndDecrementCommandNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  JumpRelativeAndDecrementCommandNameContext* jumpRelativeAndDecrementCommandName();

  class  CallCommandNameContext : public antlr4::ParserRuleContext {
  public:
    CallCommandNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CallCommandNameContext* callCommandName();

  class  ReturnCommandNameContext : public antlr4::ParserRuleContext {
  public:
    ReturnCommandNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReturnCommandNameContext* returnCommandName();

  class  ReturnAndEnableInterruptCommandNameContext : public antlr4::ParserRuleContext {
  public:
    ReturnAndEnableInterruptCommandNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReturnAndEnableInterruptCommandNameContext* returnAndEnableInterruptCommandName();

  class  ReturnFromNonMaskableInterruptCommandNameContext : public antlr4::ParserRuleContext {
  public:
    ReturnFromNonMaskableInterruptCommandNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReturnFromNonMaskableInterruptCommandNameContext* returnFromNonMaskableInterruptCommandName();

  class  RestartCommandNameContext : public antlr4::ParserRuleContext {
  public:
    RestartCommandNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RestartCommandNameContext* restartCommandName();

  class  JumpToAbsoluteAddressContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::NumberContext *address = nullptr;;
    JumpToAbsoluteAddressContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    JumpCommandNameContext *jumpCommandName();
    NumberContext *number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  JumpToAbsoluteAddressContext* jumpToAbsoluteAddress();

  class  JumpToAbsoluteAddressGivenConditionContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::JumpConditionContext *condition = nullptr;;
    Z80Parser::NumberContext *address = nullptr;;
    JumpToAbsoluteAddressGivenConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    JumpCommandNameContext *jumpCommandName();
    JumpConditionContext *jumpCondition();
    NumberContext *number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  JumpToAbsoluteAddressGivenConditionContext* jumpToAbsoluteAddressGivenCondition();

  class  JumpToRelativeAddressContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::NumberContext *address = nullptr;;
    JumpToRelativeAddressContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    JumpRelativeCommandNameContext *jumpRelativeCommandName();
    NumberContext *number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  JumpToRelativeAddressContext* jumpToRelativeAddress();

  class  JumpToRelativeAddressGivenConditionContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::JumpConditionContext *condition = nullptr;;
    Z80Parser::NumberContext *address = nullptr;;
    JumpToRelativeAddressGivenConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    JumpRelativeCommandNameContext *jumpRelativeCommandName();
    JumpConditionContext *jumpCondition();
    NumberContext *number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  JumpToRelativeAddressGivenConditionContext* jumpToRelativeAddressGivenCondition();

  class  JumpToHLContext : public antlr4::ParserRuleContext {
  public:
    JumpToHLContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    JumpCommandNameContext *jumpCommandName();
    HlRegisterContext *hlRegister();
    HlPointerContext *hlPointer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  JumpToHLContext* jumpToHL();

  class  JumpToIXContext : public antlr4::ParserRuleContext {
  public:
    JumpToIXContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    JumpCommandNameContext *jumpCommandName();
    IxRegisterContext *ixRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  JumpToIXContext* jumpToIX();

  class  JumpToIYContext : public antlr4::ParserRuleContext {
  public:
    JumpToIYContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    JumpCommandNameContext *jumpCommandName();
    IyRegisterContext *iyRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  JumpToIYContext* jumpToIY();

  class  JumpRelativeAndDecrementContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::NumberContext *address = nullptr;;
    JumpRelativeAndDecrementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    JumpRelativeAndDecrementCommandNameContext *jumpRelativeAndDecrementCommandName();
    NumberContext *number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  JumpRelativeAndDecrementContext* jumpRelativeAndDecrement();

  class  CallSubroutineContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::NumberContext *address = nullptr;;
    CallSubroutineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CallCommandNameContext *callCommandName();
    NumberContext *number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CallSubroutineContext* callSubroutine();

  class  CallSubroutineWithConditionContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::JumpConditionContext *condition = nullptr;;
    Z80Parser::NumberContext *address = nullptr;;
    CallSubroutineWithConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CallCommandNameContext *callCommandName();
    JumpConditionContext *jumpCondition();
    NumberContext *number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CallSubroutineWithConditionContext* callSubroutineWithCondition();

  class  ReturnFromSubroutineContext : public antlr4::ParserRuleContext {
  public:
    ReturnFromSubroutineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ReturnCommandNameContext *returnCommandName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReturnFromSubroutineContext* returnFromSubroutine();

  class  ReturnFromSubroutineGivenConditionContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::JumpConditionContext *condition = nullptr;;
    ReturnFromSubroutineGivenConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ReturnCommandNameContext *returnCommandName();
    JumpConditionContext *jumpCondition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReturnFromSubroutineGivenConditionContext* returnFromSubroutineGivenCondition();

  class  ReturnAndEnableInterruptContext : public antlr4::ParserRuleContext {
  public:
    ReturnAndEnableInterruptContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ReturnAndEnableInterruptCommandNameContext *returnAndEnableInterruptCommandName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReturnAndEnableInterruptContext* returnAndEnableInterrupt();

  class  ReturnFromNonMaskableInterruptContext : public antlr4::ParserRuleContext {
  public:
    ReturnFromNonMaskableInterruptContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ReturnFromNonMaskableInterruptCommandNameContext *returnFromNonMaskableInterruptCommandName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReturnFromNonMaskableInterruptContext* returnFromNonMaskableInterrupt();

  class  RestartCommandContext : public antlr4::ParserRuleContext {
  public:
    RestartCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RestartCommandNameContext *restartCommandName();
    NumberContext *number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RestartCommandContext* restartCommand();

  class  BranchCommandContext : public antlr4::ParserRuleContext {
  public:
    BranchCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    JumpToAbsoluteAddressContext *jumpToAbsoluteAddress();
    JumpToAbsoluteAddressGivenConditionContext *jumpToAbsoluteAddressGivenCondition();
    JumpToRelativeAddressContext *jumpToRelativeAddress();
    JumpToRelativeAddressGivenConditionContext *jumpToRelativeAddressGivenCondition();
    JumpToHLContext *jumpToHL();
    JumpToIXContext *jumpToIX();
    JumpToIYContext *jumpToIY();
    JumpRelativeAndDecrementContext *jumpRelativeAndDecrement();
    CallSubroutineContext *callSubroutine();
    CallSubroutineWithConditionContext *callSubroutineWithCondition();
    ReturnFromSubroutineContext *returnFromSubroutine();
    ReturnFromSubroutineGivenConditionContext *returnFromSubroutineGivenCondition();
    ReturnAndEnableInterruptContext *returnAndEnableInterrupt();
    ReturnFromNonMaskableInterruptContext *returnFromNonMaskableInterrupt();
    RestartCommandContext *restartCommand();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BranchCommandContext* branchCommand();

  class  InputCommandNameContext : public antlr4::ParserRuleContext {
  public:
    InputCommandNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InputCommandNameContext* inputCommandName();

  class  OutCommandNameContext : public antlr4::ParserRuleContext {
  public:
    OutCommandNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OutCommandNameContext* outCommandName();

  class  InputDataIntoAContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::ARegisterContext *dest = nullptr;;
    Z80Parser::NumberPointerContext *source = nullptr;;
    InputDataIntoAContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InputCommandNameContext *inputCommandName();
    ARegisterContext *aRegister();
    NumberPointerContext *numberPointer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InputDataIntoAContext* inputDataIntoA();

  class  InputDataIntoRegisterContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::SimpleByteRegisterContext *dest = nullptr;;
    Z80Parser::CPointerContext *source = nullptr;;
    InputDataIntoRegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InputCommandNameContext *inputCommandName();
    SimpleByteRegisterContext *simpleByteRegister();
    CPointerContext *cPointer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InputDataIntoRegisterContext* inputDataIntoRegister();

  class  IniContext : public antlr4::ParserRuleContext {
  public:
    IniContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IniContext* ini();

  class  InirContext : public antlr4::ParserRuleContext {
  public:
    InirContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InirContext* inir();

  class  IndContext : public antlr4::ParserRuleContext {
  public:
    IndContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IndContext* ind();

  class  IndrContext : public antlr4::ParserRuleContext {
  public:
    IndrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IndrContext* indr();

  class  OutputAIntoDataPointerContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::NumberPointerContext *dest = nullptr;;
    Z80Parser::ARegisterContext *source = nullptr;;
    OutputAIntoDataPointerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OutCommandNameContext *outCommandName();
    NumberPointerContext *numberPointer();
    ARegisterContext *aRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OutputAIntoDataPointerContext* outputAIntoDataPointer();

  class  OutputRegisterIntoCPointerContext : public antlr4::ParserRuleContext {
  public:
    Z80Parser::CPointerContext *dest = nullptr;;
    Z80Parser::SimpleByteRegisterContext *source = nullptr;;
    OutputRegisterIntoCPointerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OutCommandNameContext *outCommandName();
    CPointerContext *cPointer();
    SimpleByteRegisterContext *simpleByteRegister();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OutputRegisterIntoCPointerContext* outputRegisterIntoCPointer();

  class  OutiContext : public antlr4::ParserRuleContext {
  public:
    OutiContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OutiContext* outi();

  class  OtirContext : public antlr4::ParserRuleContext {
  public:
    OtirContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OtirContext* otir();

  class  OutdContext : public antlr4::ParserRuleContext {
  public:
    OutdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OutdContext* outd();

  class  OtdrContext : public antlr4::ParserRuleContext {
  public:
    OtdrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OtdrContext* otdr();

  class  InputAndOutpuCommandContext : public antlr4::ParserRuleContext {
  public:
    InputAndOutpuCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InputDataIntoAContext *inputDataIntoA();
    InputDataIntoRegisterContext *inputDataIntoRegister();
    IniContext *ini();
    InirContext *inir();
    IndContext *ind();
    IndrContext *indr();
    OutputAIntoDataPointerContext *outputAIntoDataPointer();
    OutputRegisterIntoCPointerContext *outputRegisterIntoCPointer();
    OutiContext *outi();
    OtirContext *otir();
    OutdContext *outd();
    OtdrContext *otdr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InputAndOutpuCommandContext* inputAndOutpuCommand();

  class  LabelContext : public antlr4::ParserRuleContext {
  public:
    LabelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LabelContext* label();

  class  OrgDirectiveContext : public antlr4::ParserRuleContext {
  public:
    OrgDirectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OrgDirectiveContext* orgDirective();

  class  CharNumberContext : public antlr4::ParserRuleContext {
  public:
    CharNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CharNumberContext* charNumber();

  class  NameContext : public antlr4::ParserRuleContext {
  public:
    NameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NameContext* name();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HexNumberContext *hexNumber();
    DecimalNumberContext *decimalNumber();
    CharNumberContext *charNumber();
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NumberContext* number();

  class  DecimalNumberContext : public antlr4::ParserRuleContext {
  public:
    DecimalNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECIMAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DecimalNumberContext* decimalNumber();

  class  HexNumberContext : public antlr4::ParserRuleContext {
  public:
    HexNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HEX_DIGITS_1();
    antlr4::tree::TerminalNode *HEX_DIGITS_2();
    antlr4::tree::TerminalNode *HEX_DIGITS_3();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  HexNumberContext* hexNumber();

  class  CommentContext : public antlr4::ParserRuleContext {
  public:
    CommentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CommentContext* comment();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

