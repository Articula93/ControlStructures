#include<iostream>
using namespace std;
//#define MULTIPLICATION_TABLE
//#define SIMPLE_NUMBERS
//#define PIFAGOR
//#define FIGURA_1
//#define FIGURA_2
//#define FIGURA_3
//#define FIGURA_4
//#define FIGURA_5
//#define FIGURA_6
//#define FIGURA_7
//#define FIGURA_8
#define FIGURA_9
int main()
{
#if defined MULTIPLICATION_TABLE
	setlocale(LC_ALL, "Russian");
	int n = 10;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << i << "*" << j << " = " << i * j << endl;
		}
		cout << endl;
	}
#endif
#if defined SIMPLE_NUMBERS
	int n;
	cout << "введите число "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		bool simple = true;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)simple = false;
		}
		if (simple)cout << i << "\t";

	}
	cout << endl;
#endif
#if defined PIFAGOR
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout << i * j << "\t";
		}
		cout << endl;
	}

#endif
#if defined FIGURA_1
	for (int i = 0; i < 5; i++)
		cout << "*****" << endl;
#endif
#if defined FIGURA_2
	char zvezda = '*';

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << zvezda;
		}
		cout << endl;

	}


#endif
#if defined FIGURA_3
	char zvezda = '*';

	for (int i = 5; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			cout << zvezda;
		}
		cout << endl;
	}

#endif
#if defined FIGURA_4

	for (int i = 0; i <= 5; i++)
	{
		for (int j = 0; j <= 5; j++)
			if (j <= (5 - i))
				cout << " ";
			else
				cout << "*";
		cout << endl;
	}
#endif
#if defined FIGURA_5
	for (int i = 0; i <= 5; i++)
	{
		for (int j = 0; j <= 5; j++)
			if (j <= (0 + i))
				cout << " ";
			else
				cout << "*";
		cout << endl;
	}
#endif
#if defined FIGURA_6
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i % 2 != 0 && j % 2 == 0)
			{
				cout << " - ";
			}
			else if (i % 2 == 0 && j % 2 != 0)
			{
				cout << " - ";
			}
			else
			{
				cout << " + ";
			}
			
		}
		cout << endl;
	}

#endif
#if defined FIGURA_7
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < i; j++) cout << "  ";
		for (int j = i; j < 5; j++) cout << "* ";
		cout << endl;
	}
#endif
#if defined FIGURA_8
	for (int i = 0; i < 5; i++)
	{
		for (int j = i + 1; j < 5; j++) cout << "  ";
		for (int j = 0; j <= i; j++) cout << "* ";
		cout << endl;
	}
#endif
#if defined FIGURA_9
	for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 5; j++) cout << " "; cout << "/";
		for (int j = 0; j < i; j++) cout << "  "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < i + 1; j++) cout << " "; cout << "\\";
		for (int j = i + 1; j < 5; j++) cout << "  "; cout << "/";
		cout << endl;
	}
	
	
#endif
}
