#include <gtest/gtest.h>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

// Include your utility headers
#include "gcd_lcm.hpp"
#include "ispalindrome.hpp"
#include "isprime.hpp"
#include "powmod.hpp"
#include "combinations.hpp"
#include "unique_erase.hpp"

using namespace std;

// Test GCD function
TEST(UtilityTest, GCD) {
    EXPECT_EQ(GCD(12, 18), 6);
    EXPECT_EQ(GCD(7, 13), 1);
    EXPECT_EQ(GCD(0, 5), 5);
    EXPECT_EQ(GCD(5, 0), 5);
    EXPECT_EQ(GCD(0, 0), 0);
    EXPECT_EQ(GCD(100, 25), 25);
    EXPECT_EQ(GCD(123456789, 987654321), 9);
}

// Test LCM function
TEST(UtilityTest, LCM) {
    EXPECT_EQ(LCM(12, 18), 36);
    EXPECT_EQ(LCM(7, 13), 91);
    EXPECT_EQ(LCM(4, 6), 12);
    EXPECT_EQ(LCM(15, 20), 60);
    EXPECT_EQ(LCM(1, 1), 1);
}

// Test palindrome function
TEST(UtilityTest, IsPalindrome) {
    EXPECT_TRUE(ISPALINDROME("racecar"));
    EXPECT_TRUE(ISPALINDROME("anna"));
    EXPECT_TRUE(ISPALINDROME(""));
    EXPECT_TRUE(ISPALINDROME("a"));
    EXPECT_TRUE(ISPALINDROME("aa"));
    EXPECT_FALSE(ISPALINDROME("hello"));
    EXPECT_FALSE(ISPALINDROME("abc"));
    EXPECT_TRUE(ISPALINDROME("madam"));
}

// Test prime function
TEST(UtilityTest, IsPrime) {
    EXPECT_TRUE(ISPRIME(2));
    EXPECT_TRUE(ISPRIME(3));
    EXPECT_TRUE(ISPRIME(5));
    EXPECT_TRUE(ISPRIME(7));
    EXPECT_TRUE(ISPRIME(11));
    EXPECT_TRUE(ISPRIME(13));
    EXPECT_FALSE(ISPRIME(1));
    EXPECT_FALSE(ISPRIME(4));
    EXPECT_FALSE(ISPRIME(6));
    EXPECT_FALSE(ISPRIME(8));
    EXPECT_FALSE(ISPRIME(9));
    EXPECT_FALSE(ISPRIME(10));
    EXPECT_TRUE(ISPRIME(17));
    EXPECT_TRUE(ISPRIME(19));
    EXPECT_FALSE(ISPRIME(21));
}

// Test powmod function
TEST(UtilityTest, PowMod) {
    EXPECT_EQ(POWMOD(2, 3, 5), 3);
    EXPECT_EQ(POWMOD(3, 4, 7), 4);
    EXPECT_EQ(POWMOD(5, 0, 10), 1);
    EXPECT_EQ(POWMOD(2, 10, 1000), 24);
    EXPECT_EQ(POWMOD(10, 5, 1000000), 100000);
    EXPECT_EQ(POWMOD(7, 3, 13), 5);
}

// Test unique_erase function
TEST(UtilityTest, UniqueErase) {
    vector<int> v1 = {1, 2, 2, 3, 3, 3, 4, 5, 5};
    vector<int> expected1 = {1, 2, 3, 4, 5};
    UNIQUE_ERASE(v1);
    EXPECT_EQ(v1, expected1);
    
    vector<string> v2 = {"hello", "hello", "world", "world", "test"};
    vector<string> expected2 = {"hello", "test", "world"};
    UNIQUE_ERASE(v2);
    EXPECT_EQ(v2, expected2);
    
    vector<int> v3 = {1, 1, 1, 1};
    vector<int> expected3 = {1};
    UNIQUE_ERASE(v3);
    EXPECT_EQ(v3, expected3);
    
    vector<int> v4 = {};
    vector<int> expected4 = {};
    UNIQUE_ERASE(v4);
    EXPECT_EQ(v4, expected4);
}

// Test combinations function (mathematical combinations, not vector combinations)
TEST(UtilityTest, Combinations) {
    EXPECT_EQ(COMBINATIONS(5, 2), 10);
    EXPECT_EQ(COMBINATIONS(4, 2), 6);
    EXPECT_EQ(COMBINATIONS(6, 3), 20);
    EXPECT_EQ(COMBINATIONS(10, 1), 10);
    EXPECT_EQ(COMBINATIONS(10, 0), 1);
    EXPECT_EQ(COMBINATIONS(0, 0), 1);
}

// Test edge cases and boundary conditions
TEST(UtilityTest, EdgeCases) {
    
    // Large numbers
    EXPECT_EQ(GCD(1000000007, 1000000009), 1);
    
    
    // Prime with large number
    EXPECT_FALSE(ISPRIME(1000000000));
    
    // Powmod with large numbers
    EXPECT_EQ(POWMOD(2, 30, 1000000007), 73741817);
}

// Performance test for large inputs
TEST(UtilityTest, Performance) {
    // Test GCD performance with large numbers
    for (int i = 0; i < 1000; ++i) {
        EXPECT_EQ(GCD(123456789, 987654321), 9);
    }
    
    // Test palindrome performance
    string long_palindrome = "racecar";
    for (int i = 0; i < 1000; ++i) {
        EXPECT_TRUE(ISPALINDROME(long_palindrome));
    }
    
    // Test prime performance
    for (int i = 0; i < 100; ++i) {
        EXPECT_TRUE(ISPRIME(17));
        EXPECT_FALSE(ISPRIME(21));
    }
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
