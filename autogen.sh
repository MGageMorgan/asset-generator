#!/bin/sh
echo "# CDing into src/logo (1/8)"
cd src/logo/
echo "# Copying a required file to top of tree (2/8)"
cp main_window.ui ../..
echo "# Getting out of logo folder (3/8)"
cd ..
echo "# Getting out of src folder (4/8)"
cd ..
echo "# Checking for holy autohell changes (5/8)"
./autoreconf 
echo "# Still checking for holy autohell changes... (6/8)"
./automake
echo "# Configuring... (7/8)"
./configure
echo "# Running make... (8/8)"
make

