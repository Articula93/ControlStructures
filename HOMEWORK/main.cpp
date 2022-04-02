#include <iostream>
#include <conio.h>
using namespace std;

// #define PALINDROME
// #define SHOOTER
// #define SHOOTER_2
#define HAPPY_TICKET






void main()
{
	setlocale(LC_ALL, "Russian");
#if defined PALINDROME
	int number;
	int reverse = 0;
	cout << "������� �����: "; cin >> number;
	int buffer = number;

	while (buffer>0)
	{
		reverse *= 10;
		reverse += buffer % 10;
		buffer /= 10;
	}
	cout << number << endl;
	cout << reverse << endl;

	if (number == reverse)
	{
		cout << "����� ���������" << endl;
	}
	else
	{
		cout << "����� �� ���������" << endl;
	}


#endif

#if defined SHOOTER
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		if (key == 'w' || key == 'W') cout << "������" << endl;
		else if (key == 's' || key == 'S') cout << "�����" << endl;
		else if (key == 'a' || key == 'A') cout << "�����" << endl;
		else if (key == 'd' || key == 'D') cout << "������" << endl;
		else if (key == 32) cout << "������" << endl;
		else cout << "Error: ��� ������ ��������." << endl;
	} while (key != 27);

#endif

#if defined SHOOTER_2
	char key;
	while (true)
	{
		key = _getch();

		switch (key)
		{
		case 119: key = 'w';
			cout << "������" << endl;
			break;
		case 115: key = 's';
			cout << "�����" << endl;
			break;
		case 97: key = 'a';
			cout << "�����" << endl;
			break;
		case 100: key = 'd';
			cout << "������" << endl;
			break;
		case 32: key = 32;
			cout << "������" << endl;
			break;
		case 13: key = 13;
			cout << "�����!" << endl;
			break;
		default:
			cout << "������!" << endl;
			break;
		}

	}


		
#endif

#if defined HAPPY_TICKET
	int number = 0;
	cout << "������� ����� ������: ";
	cin >> number;
	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
	a = number % 10;
	b = (number / 10) % 10;
	c = (number / 100) % 10;
	d = (number / 1000) % 10;
	e = (number / 10000) % 10;
	f = (number / 100000) % 10;
	if (a + b + c == e + d + f)
	{
		cout << "��� ����� ����������" << endl;
	}
	else
	{
		cout << "��� ����� ������������" << endl;
	}
#endif
}