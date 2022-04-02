#include<iostream>
#include <conio.h> //_getch()
using namespace std;

//#define WHILE
//#define DO_WHILE
//#define SYMBOL
void main()
{
	setlocale(LC_ALL, "Russian");
#if defined WHILE
	int n; //Количечтво итераций (итерация - это однократное выполнение тела цикла)
	int i = 0;// Счетчик цикла (считает сколько раз будет выполнен цикл)
	cout << "Введите количество итераций"; cin >> n;
	while (i < n)
	{
		cout << i << "Hello" << endl;
		i++;
	}
#endif

#if defined DO_WHILE
	char key; //Будет хранить код клавиши
	do
	{
		key = _getch();//ожидает нажатие клавиши, и возвращает ASCII - код нажатой клавиши
		cout << (int)key << "\t" << key << endl;
		//(int)key - явное преобразование типов char в int
	} while (key != 27);
	
#endif
#if defined SYMBOL
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
	}

#endif

}
