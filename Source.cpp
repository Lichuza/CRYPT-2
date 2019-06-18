#include "XORencrypt.h"
#include"oneTimePad.h"
#include<windows.h>

int main() 
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	string msg;

	cout << "Введите текс для шифрования: ";
	cin >> msg;
	cout << endl;

	cout << "Ключ XOR" << endl;
	XORencrypt X(msg);
	cout << "Страница одноразового блокнота" << endl;
	oneTimePad oTP(msg);
	
	cout << endl;

	cout << "XOR - шифрование: "<<endl;
	X.encrypt_XOR();
	X.decrypt_XOR();

	cout << endl;
	cout << "Шифрование методом одноразового блокнота: " << endl;
	oTP.encrypt_oTP();
	oTP.decrypt_oTP();
	
	system("pause");
	return 0;
}

