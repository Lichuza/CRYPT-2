#include "XORencrypt.h"

XORencrypt::XORencrypt(const string msg)
{ 
	s = msg;
	int sum=0;

	//Вычисление ключа
	for (int i=0; i < s.length(); i++)
	{
		sum += s[i];	
	}
	key = sum / s.length();

	cout << key;
	cout << endl;
}


void XORencrypt::encrypt_XOR() 
{
	cout << "Зашифрованное сообщение: ";
	for (int i = 0; i < s.length(); i++)
	{
		s[i] = s[i] ^ key;
		cout << char(s[i]);
	}
	cout << endl;
}

void XORencrypt::decrypt_XOR() 
{
	cout << "Расшифрованное сообщение:  ";

	for (int i = 0; i < s.length(); i++)
	{
		s[i] = s[i] ^ key;
		cout << hex << char(s[i]);
	}
	cout << endl;
}

