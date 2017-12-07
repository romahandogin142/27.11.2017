#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int nz = 0;
start:

	cout << "Ведите номер задания";
	cin >> nz;

	/*1.	Дано натуральное(целое неотрицательное)
	число, а и целое положительное число d.Вычислить частное
	q и остаток r при делении, а на d*/
	if (nz == 1)
	{
		int a, d, q, r;
		cout << "Вести число";
		cin >> a;
		cout << "целое положительное число";
		cin >> d;
		if (q = a / d)
		{
			cout << "Частное:" << q << endl;
		}
		else if (r = a%d)
		{
			cout << "Остаток от деления:" << r << endl;
		}
	}




	/*2.	Напишите функцию int f(int x, int y), которая возвращает 0, если значения x и y оба
	равны нулю, 12 / x, если y равен 0, 12 / y, если x равен 0, иначе 144 / (x*y).*/
	if (nz == 2)
	{
		int x, y, f;
		cout << "Ведите число ";
		cin >> x;
		cout << "Ведите число ";
		cin >> y;
		if (x == 0 && y == 0)
		{
			f = 0;
			cout << "Ответ" << f << endl;
		}
		else if (y != 0 && x == 0)
		{
			f = 12 / x;
			cout << "Ответ" << f << endl;
		}
		else if (y == 0 && x != 0)
		{
			f = 12 / y;
			cout << "Ответ" << f << endl;
		}
		else
		{
			f = 144 / (x* y);
			cout << "Ответ" << f << endl;
		}

	}


	/*3.	Напишите функцию int f(int x, int y), которая возвращает x - y,
	если x больше y, иначе возвращает y - x*/
	if (nz == 3)
	{
		int x, y, f;
		cout << "Ведите число ";
		cin >> x;
		cout << "Ведите число ";
		cin >> y;
		if (x > y)
		{
			f = x - y;
			cout << "Ответ" << f << endl;
		}
		else if (x < y)
		{
			f = y - x;
			cout << "Ответ" << f << endl;

		}

	}



	/*1.	Напишите функцию double f(double x, double y), которая возвращает x / y, если x больше y,
	иначе возвращает y / x.Предполагается, что значения параметров больше нуля.*/
	if (nz == 4)
	{
		int x, y, f;
		cout << "Ведите число ";
		cin >> x;
		cout << "Ведите число ";
		cin >> y;
		if (x > y)
		{
			f = x / y;
			cout << "Ответ" << f << endl;
		}
		else if (x < y)
		{
			f = y / x;
			cout << "Ответ" << f << endl;

		}
	}



	/*5.	Напишите функцию double f(double x, double y, double z), которая возвращает m*n / k,
	где k есть меньшее из чисел x, y, z, а m
	и n есть среднее и большее из этих чисел.Предполагается, что значения параметров больше нуля*/
	if (nz == 5)
	{
		int x, y, f, z, a, m, k, n;
		cout << "Ведите число ";
		cin >> m;
		cout << "Ведите число ";
		cin >> n;
		cout << "Ведите число ";
		cin >> k;
		if (k<x, y, z, a, m, n)
		{
			f = m*n / k;
			cout << "Ответ" << f << endl;
		}


	}



	/*1.	Напишите функцию int f(int a, int b, int c), 
		которая возвращает наименьшее из значений a, b, c.*/
	if (nz == 6)
	{
		int  a, b, c,f;
		cout << "Ведите число ";
		cin >> a;
		cout << "Ведите число ";
		cin >> b;
		cout << "Ведите число ";
		cin >> c;
		int min = a;
		
		// Нахождениа минимума
		if (b < min)
		{
			min = b;
		}
			if (c < min) 
			{
				min = c;
			}
			cout << "Min: " << min << endl;
	}



	/*7.	Напишите функцию int f(int a, int b, int c),
		которая возвращает наибольшее из значений a, b, c.*/
	if (nz == 7)
	{
		int  a, b, c, f;
		cout << "Ведите число ";
		cin >> a;
		cout << "Ведите число ";
		cin >> b;
		cout << "Ведите число ";
		cin >> c;
		int max = a;
		if (b > max)
		{
			max = b;
		}
		if (c > max)
		{
			max = c;
		}
		cout << "Max: " << max << endl;
	}


	if (nz == 8)
	{
		int  x, y, z;
		cout << "Ведите число x";
		cin >> x;
		cout << "Ведите число y ";
		cin >> y;
		cout << "Ведите число ";
		cin >> z;
		if(x*2 + y*2 == z*2)
		{
			true;
			cout << "True" << endl;
		}
		else 
		{
			false;
			cout << "False" << endl;
		}
	}
	/*8.	Напишите функцию bool f(int x, int y, int z),
		которая возвращает true, если х2 + у2 = z2, иначе возвращает false.*/


	//9.	Напишите функцию bool f(int x, int y), которая возвращает true, 
	//	если x делится нацело на y, или наоборот, y делится 
	//	нацело на x, иначе возвращает false.Предполагается, что значения параметров больше нуля.
	if (nz == 9)
	{
		int  x, y;
		cout << "Ведите число ";
		cin >> x;
		cout << "Ведите число ";
		cin >> y;
		if (x / y)
		{
			cout << "True" << endl;
		}
		else if (y / x );
		{
			cout << "False" << endl;
		}
	}


	//10.	Положительные числа x, y, z могут быть сторонами треугольника,
	//	если большее из них меньше суммы двух других.Напишите функцию bool f(int x, int y, int z), 
	//	которая возвращает true, если числа x, y, z могут быть сторонами 
	//	треугольника, иначе возвращает false.Предполагается, что значения параметров больше нуля
	if (nz == 10)
	{
		int  x, y,z;
		cout << "Ведите число ";
		cin >> x;
		cout << "Ведите число ";
		cin >> y;
		cout << "Ведите число ";
		cin >> z;
		if (x, y, z)
		{
			cout << "Это треугольник"<< endl;
		}
		else
		{
			cout << "Не тругольник " << endl;

		}
	}



	system("pause");
	//getch();
	return 0;
}