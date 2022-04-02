#include<iostream>
using namespace std;

//#define SQARE
//#define TRIANGLE_1
#define TRIANGLE_2
#define TRIANGLE_3
#define TRIANGLE_4

void main()
{
	setlocale(LC_ALL, "Russian");

	int n;
	cout << "¬ведите число "; cin >> n;
#if defined SQARE
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif
#if defined TRIANGLE_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i ; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}

}