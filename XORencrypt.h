#pragma once
#include<string>
#include<iostream>
using namespace std;
class XORencrypt
{
public:
	XORencrypt(const string msg);
	void encrypt_XOR();
	void decrypt_XOR();
private:
	string s;
	int key=0;
};

