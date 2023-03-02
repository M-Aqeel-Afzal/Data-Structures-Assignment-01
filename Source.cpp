#include"pch.h"
#include"Header.h"
using namespace std;
string hex_to_bin(const string s)  //function for hex to binary conversion
{
	char c1;
	int a, b = 0;
	a = s.length();   //finding length of string
	string s1, s2;
	while (a != 0)
	{
		c1 = s[b];
		switch (c1)
		{
		case '0':s1 = "0000"; break;
		case '1':s1 = "0001"; break;
		case '2':s1 = "0010"; break;
		case '3':s1 = "0011"; break;
		case '4':s1 = "0100"; break;
		case '5':s1 = "0101"; break;
		case '6':s1 = "0110"; break;
		case '7':s1 = "0111"; break;
		case '8':s1 = "1000"; break;
		case '9':s1 = "1001"; break;
		case 'A':s1 = "1010"; break;
		case 'B':s1 = "1011"; break;
		case 'C':s1 = "1100"; break;
		case 'D':s1 = "1101"; break;
		case 'E':s1 = "1110"; break;
		case 'F':s1 = "1111"; break;
		}
		--a, ++b;
		s2 = s2 + s1;
	}
	return s2;
}
int bin_to_dec(const string s)//function for binary to decimal conversion
{
	int integer, l = s.length();   //finding length of string
	if (l == 4)
	{
		stringstream s1(s);   //finding length of string

		s1 >> integer;
		switch (integer)
		{
		case 0:integer = 0; break;
		case 1:integer = 1; break;
		case 10:integer = 2; break;
		case 11:integer = 3; break;
		case 100:integer = 4; break;
		case 101:integer = 5; break;
		case 110:integer = 6; break;
		case 111:integer = 7; break;
		case 1000:integer = 8; break;
		case 1001:integer = 9; break;
		case 1010:integer = 10; break;
		case 1011:integer = 11; break;
		case 1100:integer = 12; break;
		case 1101:integer = 13; break;
		case 1110:integer = 14; break;
		case 1111:integer = 15; break;
		}
	}
	if (l == 2)
	{
		stringstream s1(s);   //string to integer conversion

		s1 >> integer;
		switch (integer)
		{
		case 00:integer = 0; break;
		case 01:integer = 1; break;
		case 10:integer = 2; break;
		case 11:integer = 3; break;
		}
	}
	return integer;
}
string dec_to_bin(const int num)   //function for decimal to binary conversion
{


	string s;
	switch (num)
	{
	case 0:s = "0000"; break;
	case 1:s = "0001"; break;
	case 2:s = "0010"; break;
	case 3:s = "0011"; break;
	case 4:s = "0100"; break;
	case 5:s = "0101"; break;
	case 6:s = "0110"; break;
	case 7:s = "0111"; break;
	case 8:s = "1000"; break;
	case 9:s = "1001"; break;
	case 10:s = "1010"; break;
	case 11:s = "1011"; break;
	case 12:s = "1100"; break;
	case 13:s = "1101"; break;
	case 14:s = "1110"; break;
	case 15:s = "1111"; break;
	}
	return s;
}
string initKeyPermutation(string key) { //one time function call
	int pc1[] = { 57,49,41,33,25,17,9,1,58,50,42,34,26,18,10,2,59,51,43,35,
			27,19,11,3,60,52,44,36,63,55,47,39,3,23,15,7,62,54,46,38,30,22,
		14,6,61,53,45,37,29,21,13,5,28,20,12,4 };
	string s1, s2 = "";
	s1 = hex_to_bin(key);
	for (int i = 0; i < 56; i++)
	{
		int j = 0;
		j = pc1[i] - 1;
		s2 = s2 + s1[j];
	}
	return s2;
}

string halfCircularShift(string half_key, int index) { //shift 
	string s1 = "";
	int l = half_key.length();
	for (int i = index; i < l; i++)
	{
		s1 += half_key[i];
	}
	for (int i = 0; i < index; i++)
	{
		s1 += half_key[i];
	}

	return s1;
}

string roundPermutation(string key) {  //56 to 48 bit conversion
	int pc2[] = { 14,17,11,24,1,5,3,28,15,6,21,10,23,19,12,4,
		26,8,16,7,27,20,13,2,41,52,31,37,47,55,30,40,51,45,33,
		48,44,49,39,56,34,53,46,42,50,36,29,32 };
	string s2 = "";
	for (int i = 0; i < 48; i++)
	{
		int j = 0;
		j = pc2[i] - 1;
		s2 = s2 + key[j];
	}
	return s2;
}

//text 

string initTextPermutation(string text) {
	int pc3[] = { 58,50,42,34,26,18,10,2,60,52,
		44,36,28,20,12,4,62,54,46,38,30,22,14,6,
		64,56,48,40,32,24,16,8,57,49,41,33,25,17,
		9,1,59,51,43,35,27,19,11,3,61,53,45,37,29,
		21,13,5,63,55,47,39,31,23,15,7 };
	string s1, s2 = "";
	s1 = hex_to_bin(text);
	for (int i = 0; i < 64; i++)
	{
		int j = 0;
		j = pc3[i] - 1;
		s2 = s2 + s1[j];
	}
	return s2;
}

string expandHalfText(string rightHalfText) {
	int pc4[] = { 32,1,2,3,4,5,4,5,6,7,8,9,8,9,10,11,12,13,
		12,13,14,15,16,17,16,17,18,19,20,21,20,21,22,23,24,
		25,24,25,26,27,28,29,28,29,30,31,32,1 };
	string s2 = "";
	for (int i = 0; i < 48; i++)
	{
		int j = 0;
		j = pc4[i] - 1;
		s2 = s2 + rightHalfText[j];
	}
	return s2;
}
string XOR(string text, string key) {
	string s2 = "";
	int flag = text.length();
	for (int i = 0; i < flag; i++)
	{
		if (text[i] == key[i])
			s2 += '0';
		else
			s2 += '1';
	}
	return s2;
}

string calcSBox(string text) {
	int SBOX[8][4][16] = {   //8 different boxes
		{
			{14,4,13,1,2,15,11,8,3,10,6,12,5,9,0,7},
				{0,15,7,4,14,2,13,1,10,6,12,11,9,5,3,8},
				{4,1,14,8,13,6,2,11,15,12,9,7,3,10,5,0},
				{15,12,8,2,4,9,1,7,5,11,3,14,10,0,6,13}
			},
		{
			{15,1,8,14,6,11,3,4,9,7,2,13,12,0,5,10},
				{3,13,4,7,15,2,8,14,12,0,1,10,6,9,11,5},
				{0,14,7,11,10,4,13,1,5,8,12,6,9,3,2,15},
				{13,8,10,1,3,15,4,2,11,6,7,12,0,5,14,9}
			},

		{
			{10,0,9,14,6,3,15,5,1,13,12,7,11,4,2,8},
				{13,7,0,9,3,4,6,10,2,8,5,14,12,11,15,1},
				{13,6,4,9,8,15,3,0,11,1,2,12,5,10,14,7},
				{1,10,13,0,6,9,8,7,4,15,14,3,11,5,2,12}
			},
		{
			{7,13,14,3,0,6,9,10,1,2,8,5,11,12,4,15},
				{13,8,11,5,6,15,0,3,4,7,2,12,1,10,14,9},
				{10,6,9,0,12,11,7,13,15,1,3,14,5,2,8,4},
				{3,15,0,6,10,1,13,8,9,4,5,11,12,7,2,14}
			},

		{
			{2,12,4,1,7,10,11,6,8,5,3,15,13,0,14,9},
				{14,11,2,12,4,7,13,1,5,0,15,10,3,9,8,6},
				{4,2,1,11,10,13,7,8,15,9,12,5,6,3,0,14},
				{11,8,12,7,1,14,2,13,6,15,0,9,10,4,5,3}
			},

		{
			{12,1,10,15,9,2,6,8,0,13,3,4,14,7,5,11},
				{10,15,4,2,7,12,9,5,6,1,13,14,0,11,3,8},
				{9,14,15,5,2,8,12,3,7,0,4,10,1,13,11,6},
				{4,3,2,12,9,5,15,10,11,14,1,7,6,0,8,13}
			},

		{
			{4,11,2,14,15,0,8,13,3,12,9,7,5,10,6,1},
				{13,0,11,7,4,9,1,10,14,3,5,12,2,15,8,6},
				{1,4,11,13,12,3,7,14,10,15,6,8,0,5,9,2},
				{6,11,13,8,1,4,10,7,9,5,0,15,14,2,3,12}
			},

		{
			{13,2,8,4,6,15,11,1,10,9,3,14,5,0,12,7},
				{1,15,13,8,10,3,7,4,12,5,6,11,0,14,9,2},
				{7,11,4,1,9,12,14,2,0,6,10,13,15,3,5,8},
				{2,1,14,7,4,10,8,13,15,12,9,0,3,5,6,11}}
	};
	int bit_6 = 0, row, col, flag = 6;
	string s1 = "", s2 = "", s3 = "", s4 = "";
	for (int i = 0; i < 8; i++)          //loop for boxes iteration
	{
		for (int j = bit_6; j < flag; j++) //loop for spliting the given string into 6_bits formate
		{
			s1 += text[j];

			++bit_6;
		}
		flag += 6;
		s2 += s1[0];          // 1st and last bit combining
		s2 += s1[5];
		row = bin_to_dec(s2);    //finding row of box

		for (int j = 1; j < 5; j++)   //loop for geting 4-bit binary for colunm
		{
			s3 += s1[j];

		}

		col = bin_to_dec(s3);     //finding column
		s4 += dec_to_bin(SBOX[i][row][col]);   //finding desired binary and concadinating the string
		s1 = "", s2 = "", s3 = "";

	}
	return s4;
}