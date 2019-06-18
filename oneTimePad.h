#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<ctime>
using namespace std;

class oneTimePad
{
public:
	void encrypt_oTP();
	void decrypt_oTP();
	oneTimePad(const string msg);
private:
	vector<char> alf = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','_' };
	vector<char> key;
	string s;
	vector<char>encrypt;
	vector<char>decrypt;
};

