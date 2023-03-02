#include"pch.h"
#include <limits.h>
#include <string>
#include "Header.h"
#include "gtest/gtest.h"
using namespace std;


/*============================
===========KEY TESTS==========
============================*/

TEST(KeyInitPermutationTest, TestOne) {

	// Test initial permutation
	const string key = "1234567890ABCDEF";
	const string permutedKey = "11110000110011001010101000011010010111000110111010001111";

	EXPECT_EQ(permutedKey, initKeyPermutation(key));
}

TEST(KeyCircularShiftTest, TestOne) {

	// Test circular shifting of key
	const string leftHalfKey = "1111000011001100101010100001";
	const string rightHalfKey = "1010010111000110111010001111";
	const string shiftedLeftHalf = "1110000110011001010101000011";
	const string shiftedRightHalf = "0100101110001101110100011111";

	EXPECT_EQ(shiftedLeftHalf, halfCircularShift(leftHalfKey, 1));
	EXPECT_EQ(shiftedRightHalf, halfCircularShift(rightHalfKey, 1));
}

TEST(KeySingleRoundPermutationTest, TestOne) {

	// Test round permutation of key
	const string key = "11100001100110010101010000110100101110001101110100011111";
	const string permutedKey = "000010110000001001101111110101100111100101110100";

	EXPECT_EQ(permutedKey, roundPermutation(key));
}


/*============================
==========TEXT TESTS==========
============================*/

TEST(TextInitPermutationTest, TestOne) {

	// Test initial permutation
	const string text = "FEDCBA0987654321";
	const string permutedText = "0110001100000111001100111111100000010111101001010000111101010101";

	EXPECT_EQ(permutedText, initTextPermutation(text));
}

TEST(TextExpansionTableTest, TestOne) {

	// Test expansion table
	const string rightHalfText = "00010111101001010000111101010101";
	const string expandedRightHalf = "100010101111110100001010100001011110101010101010";

	EXPECT_EQ(expandedRightHalf, expandHalfText(rightHalfText));
}

TEST(TextXORTest, TestOne) {

	// Test text XOR key
	const string text = "100010101111110100001010100001011110101010101010";
	const string key = "000010110000001001101111110101100111100101110100";
	const string XORtext = "100000011111111101100101010100111001001111011110";

	EXPECT_EQ(XORtext, XOR(text, key));
}

TEST(TextSboxTest, TestOne) {

	// Test S Box calculation
	const string text = "100000011111111101100101010100111001001111011110";
	const string output = "01000101001000000011011010100111";

	EXPECT_EQ(output, calcSBox(text));
}

TEST(KeyInitPermutationTest, TestOn) {

	// Test initial permutation
	const string key = "C2345678ABCEDFF9";
	const string permutedKey = "11110001111011011001101011000111010101100110111110001110";

	EXPECT_EQ(permutedKey, initKeyPermutation(key));
}

TEST(KeyCircularShiftTest, TestOn) {

	// Test circular shifting of key
	const string leftHalfKey = "1111000111101101100110101100";
	const string rightHalfKey = "0111010101100110111110001110";
	const string shiftedLeftHalf = "1110001111011011001101011001";
	const string shiftedRightHalf = "1110101011001101111100011100";

	EXPECT_EQ(shiftedLeftHalf, halfCircularShift(leftHalfKey, 1));
	EXPECT_EQ(shiftedRightHalf, halfCircularShift(rightHalfKey, 1));
}

TEST(KeySingleRoundPermutationTest, TestOn) {

	// Test round permutation of key
	const string key = "11100011110110110011010110011110101011001101111100011100";
	const string permutedKey = "000110111001011001110111111110100111100001110010";

	EXPECT_EQ(permutedKey, roundPermutation(key));
}


/*============================
==========TEXT TESTS==========
============================*/

TEST(TextInitPermutationTest, TestOn) {

	// Test initial permutation
	const string text = "C123456789CBCDEF";
	const string permutedText = "1110110100000000110011001111111111110001100010101111000010101010";

	EXPECT_EQ(permutedText, initTextPermutation(text));
}

TEST(TextExpansionTableTest, TestOn) {

	// Test expansion table
	const string rightHalfText = "11110001100010101111000010101010";
	const string expandedRightHalf = "011110100011110001010101011110100001010101010101";

	EXPECT_EQ(expandedRightHalf, expandHalfText(rightHalfText));
}

TEST(TextXORTest, TestOn) {

	// Test text XOR key
	const string text = "011110100011110001010101011110100001010101010101";
	const string key = "000110111001011001110111111110100111100001110010";
	const string XORtext = "011000011010101000100010100000000110110100100111";

	EXPECT_EQ(XORtext, XOR(text, key));
}

TEST(TextSboxTest, TestOn) {

	// Test S Box calculation
	const string text = "011000011010101000100010100000000110110100100111";
	const string output = "01010000100001100100111101100111";

	EXPECT_EQ(output, calcSBox(text));
}













TEST(KeyInitPermutationTest, TestO) {

	// Test initial permutation
	const string key = "1234567890ABCDEF";
	const string permutedKey = "11110000110011001010101000011010010111000110111010001111";

	EXPECT_EQ(permutedKey, initKeyPermutation(key));
}

TEST(KeyCircularShiftTest, TestO) {

	// Test circular shifting of key
	const string leftHalfKey = "1111000011001100101010100001";
	const string rightHalfKey = "1010010111000110111010001111";
	const string shiftedLeftHalf = "1110000110011001010101000011";
	const string shiftedRightHalf = "0100101110001101110100011111";

	EXPECT_EQ(shiftedLeftHalf, halfCircularShift(leftHalfKey, 1));
	EXPECT_EQ(shiftedRightHalf, halfCircularShift(rightHalfKey, 1));
}

TEST(KeySingleRoundPermutationTest, TestO) {

	// Test round permutation of key
	const string key = "11100001100110010101010000110100101110001101110100011111";
	const string permutedKey = "000010110000001001101111110101100111100101110100";

	EXPECT_EQ(permutedKey, roundPermutation(key));
}


/*============================
==========TEXT TESTS==========
============================*/

TEST(TextInitPermutationTest, TestO) {

	// Test initial permutation
	const string text = "0123456789ABCDEF";
	const string permutedText = "1100110000000000110011001111111111110000101010101111000010101010";

	EXPECT_EQ(permutedText, initTextPermutation(text));
}

TEST(TextExpansionTableTest, TestO) {

	// Test expansion table
	const string rightHalfText = "11110000101010101111000010101010";
	const string expandedRightHalf = "011110100001010101010101011110100001010101010101";

	EXPECT_EQ(expandedRightHalf, expandHalfText(rightHalfText));
}

TEST(TextXORTest, TestO) {

	// Test text XOR key
	const string text = "011110100001010101010101011110100001010101010101";
	const string key = "000010110000001001101111110101100111100101110100";
	const string XORtext = "011100010001011100111010101011000110110000100001";

	EXPECT_EQ(XORtext, XOR(text, key));
}

TEST(TextSboxTest, TestO) {

	// Test S Box calculation
	const string text = "011100010001011100111010101011000110110000100001";
	const string output = "00001100001000101110111110100010";

	EXPECT_EQ(output, calcSBox(text));
}