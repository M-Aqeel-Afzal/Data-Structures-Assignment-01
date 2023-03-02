#pragma once
#include<sstream>
using namespace std;
string hex_to_bin(const string s);  //function for hex to binary conversion

int bin_to_dec(const string s);//function for binary to decimal conversion

string dec_to_bin(const int num);   //function for decimal to binary conversion

string initKeyPermutation(string key); 

string halfCircularShift(string half_key, int index);

string roundPermutation(string key); 
//text 

string initTextPermutation(string text); 

string expandHalfText(string rightHalfText); 
string XOR(string text, string key); 
string calcSBox(string text); 