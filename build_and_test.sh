#!/bin/bash

# Build script for AtCoder Template tests

echo "Setting up build directory..."
mkdir -p build
cd build

echo "Configuring with CMake..."
cmake ..

echo "Building tests..."
make -j$(nproc)

echo "Running tests..."
./UtilityTest

echo "Build and test complete!"
