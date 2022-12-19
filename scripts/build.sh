#!/bin/bash

ROOT_PATH=$1

echo "Building project..."
mkdir -p $ROOT_PATH/build
cd $ROOT_PATH/build

if [ $SO_MODEL == WINDOWS ]; then
cmake .. -G Ninja 
set -e
ninja -j 0
echo "Installing project..."
ninja install
elif [ $SO_MODEL == LINUX ]; then
cmake ..
set -e
make -j
echo "Installing project..."
make install
fi

cd $MAIN_ROOT_PATH
