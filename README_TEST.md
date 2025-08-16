# AtCoder Template Tests

This directory contains comprehensive tests for the AtCoder template utility functions using Google Test.

## Prerequisites

- CMake 3.17 or higher
- C++17 compatible compiler (GCC, Clang, or MSVC)
- Internet connection (for downloading Google Test)

## Quick Start

1. **Run the build script:**
   ```bash
   ./build_and_test.sh
   ```

   This will:
   - Create a `build` directory
   - Download and configure Google Test
   - Build the test executable
   - Run all tests

## Manual Build

If you prefer to build manually:

```bash
# Create build directory
mkdir build
cd build

# Configure with CMake
cmake ..

# Build
make -j$(nproc)

# Run tests
./UtilityTest
```

## Test Coverage

The test suite covers the following utility functions:

### Mathematical Functions
- **GCD**: Greatest Common Divisor
- **LCM**: Least Common Multiple
- **ISPRIME**: Prime number detection
- **POWMOD**: Modular exponentiation
- **COMBINATIONS**: Mathematical combinations (nCr)

### String Functions
- **ISPALINDROME**: Palindrome detection

### Container Functions
- **UNIQUE_ERASE**: Remove duplicates from sorted vectors

## Test Categories

1. **Basic Functionality**: Tests normal usage with expected inputs
2. **Edge Cases**: Tests boundary conditions and special cases
3. **Performance**: Tests with repeated calls to ensure efficiency
4. **Large Numbers**: Tests with large inputs to verify correctness

## Expected Output

When tests pass, you should see output similar to:
```
[==========] Running 7 tests from 1 test suite.
[----------] Global test environment set-up.
[----------] 7 tests from UtilityTest
[ RUN      ] UtilityTest.GCD
[       OK ] UtilityTest.GCD (0 ms)
[ RUN      ] UtilityTest.LCM
[       OK ] UtilityTest.LCM (0 ms)
[ RUN      ] UtilityTest.IsPalindrome
[       OK ] UtilityTest.IsPalindrome (0 ms)
[ RUN      ] UtilityTest.IsPrime
[       OK ] UtilityTest.IsPrime (0 ms)
[ RUN      ] UtilityTest.PowMod
[       OK ] UtilityTest.PowMod (0 ms)
[ RUN      ] UtilityTest.UniqueErase
[       OK ] UtilityTest.UniqueErase (0 ms)
[ RUN      ] UtilityTest.Combinations
[       OK ] UtilityTest.Combinations (0 ms)
[----------] 7 tests from UtilityTest (1 ms total)

[----------] Global test environment tear-down
[==========] 7 tests ran. (1 ms total)
[  PASSED  ] 7 tests.
```

## Troubleshooting

### CMake not found
Install CMake:
```bash
# Ubuntu/Debian
sudo apt install cmake

# macOS
brew install cmake

# Windows
# Download from https://cmake.org/download/
```

### Compiler not found
Install a C++17 compatible compiler:
```bash
# Ubuntu/Debian
sudo apt install g++

# macOS
xcode-select --install

# Windows
# Install Visual Studio or MinGW
```

### Build errors
- Ensure you have internet connection for Google Test download
- Check that all header files are in the correct location
- Verify C++17 support in your compiler

## Adding New Tests

To add tests for new utility functions:

1. Add the test to `test_utilities.cpp`
2. Follow the existing pattern:
   ```cpp
   TEST(UtilityTest, NewFunction) {
       EXPECT_EQ(NEW_FUNCTION(input), expected_output);
   }
   ```
3. Rebuild and run tests

## Test Structure

Each test follows Google Test conventions:
- `TEST(TestSuiteName, TestName)` for test cases
- `EXPECT_EQ()`, `EXPECT_TRUE()`, `EXPECT_FALSE()` for assertions
- Descriptive test names that explain what is being tested
