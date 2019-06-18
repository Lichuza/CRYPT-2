#include "oneTimePad.h"

oneTimePad::oneTimePad(const string msg)
{
	s=msg;

	//Формировнаие ключа
	srand(time(NULL));
	for (int i = 0; i < s.length(); i++)
	{
		f: key.push_back((char)(32+rand() % 254));
		cout << key[i];
    }
	cout << endl;
}


void oneTimePad::encrypt_oTP()
{
	cout << "Зашифрованное сообщение:  ";
	for (int i = 0; i < s.length(); i++) 
	{
		encrypt.push_back(((char)s[i]^ (char)key[i]));
		cout << encrypt[i];
	}
	cout << endl;
}


void oneTimePad::decrypt_oTP()
{
	cout << "Расшифрованное сообщение:  ";
	for (int i = 0; i < encrypt.size(); i++)
	{
		decrypt.push_back(((char)encrypt[i]^ (char)key[i]));
		cout << decrypt[i];
	}
	cout << endl;
}

