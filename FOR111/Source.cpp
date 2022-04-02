#include <iostream>
using namespace std;

//#define FOR_SYNTAX

void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef FOR_SYNTAX
	int n; //количество итераций
	cout << "¬ведите количество итераций "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << i << "\t";
	}
	cout << endl;
#endif 

	int n;
	long long f = 1;
	cout << "¬ведите число дл€ вычислени€ факториала "; cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f = f * i;
		cout << f << endl;
	}
	cout << endl;

	

}