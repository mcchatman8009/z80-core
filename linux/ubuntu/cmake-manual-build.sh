#!/usr/bin/env bash
CMAKE_VERSION=3.16
BUILD_NUMBER=2
TEMP_DIR=~/temp
NUMBER_OF_PROCESSORS=$(nproc)

#
# Create/set directory
#
mkdir -p $TEMP_DIR
cd $TEMP_DIR

#
# Download/extract contents
#
wget https://cmake.org/files/v$CMAKE_VERSION/cmake-$CMAKE_VERSION.$BUILD_NUMBER.tar.gz
tar -xzvf cmake-$CMAKE_VERSION.$BUILD_NUMBER.tar.gz
cd cmake-$CMAKE_VERSION.$BUILD_NUMBER/

#
# Build/install
#
echo "Building using $NUMBER_OF_PROCESSORS processors..."
./bootstrap
make -j$NUMBER_OF_PROCESSORS
sudo make install

#
# Cleanup
#
rm -rf $TEMP_DIR
