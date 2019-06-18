#include "XORencrypt.h"
#include"oneTimePad.h"
#include<windows.h>

int main() 
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	string msg;

	cout << "������� ���� ��� ����������: ";
	cin >> msg;
	cout << endl;

	cout << "���� XOR" << endl;
	XORencrypt X(msg);
	cout << "�������� ������������ ��������" << endl;
	oneTimePad oTP(msg);
	
	cout << endl;

	cout << "XOR - ����������: "<<endl;
	X.encrypt_XOR();
	X.decrypt_XOR();

	cout << endl;
	cout << "���������� ������� ������������ ��������: " << endl;
	oTP.encrypt_oTP();
	oTP.decrypt_oTP();
	
	system("pause");
	return 0;
}

