#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	double a;
	int n;
	double N = 1;
	cout << "¬ведите основание степени "; cin >> a;
	cout << "¬ведите стпень "; cin >> n;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
		
	}
	cout << N << endl;
}