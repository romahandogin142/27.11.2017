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

	cout << "������ ����� �������";
	cin >> nz;

	/*1.	���� �����������(����� ���������������)
	�����, � � ����� ������������� ����� d.��������� �������
	q � ������� r ��� �������, � �� d*/
	if (nz == 1)
	{
		int a, d, q, r;
		cout << "����� �����";
		cin >> a;
		cout << "����� ������������� �����";
		cin >> d;
		if (q = a / d)
		{
			cout << "�������:" << q << endl;
		}
		else if (r = a%d)
		{
			cout << "������� �� �������:" << r << endl;
		}
	}




	/*2.	�������� ������� int f(int x, int y), ������� ���������� 0, ���� �������� x � y ���
	����� ����, 12 / x, ���� y ����� 0, 12 / y, ���� x ����� 0, ����� 144 / (x*y).*/
	if (nz == 2)
	{
		int x, y, f;
		cout << "������ ����� ";
		cin >> x;
		cout << "������ ����� ";
		cin >> y;
		if (x == 0 && y == 0)
		{
			f = 0;
			cout << "�����" << f << endl;
		}
		else if (y != 0 && x == 0)
		{
			f = 12 / x;
			cout << "�����" << f << endl;
		}
		else if (y == 0 && x != 0)
		{
			f = 12 / y;
			cout << "�����" << f << endl;
		}
		else
		{
			f = 144 / (x* y);
			cout << "�����" << f << endl;
		}

	}


	/*3.	�������� ������� int f(int x, int y), ������� ���������� x - y,
	���� x ������ y, ����� ���������� y - x*/
	if (nz == 3)
	{
		int x, y, f;
		cout << "������ ����� ";
		cin >> x;
		cout << "������ ����� ";
		cin >> y;
		if (x > y)
		{
			f = x - y;
			cout << "�����" << f << endl;
		}
		else if (x < y)
		{
			f = y - x;
			cout << "�����" << f << endl;

		}

	}



	/*1.	�������� ������� double f(double x, double y), ������� ���������� x / y, ���� x ������ y,
	����� ���������� y / x.��������������, ��� �������� ���������� ������ ����.*/
	if (nz == 4)
	{
		int x, y, f;
		cout << "������ ����� ";
		cin >> x;
		cout << "������ ����� ";
		cin >> y;
		if (x > y)
		{
			f = x / y;
			cout << "�����" << f << endl;
		}
		else if (x < y)
		{
			f = y / x;
			cout << "�����" << f << endl;

		}
	}



	/*5.	�������� ������� double f(double x, double y, double z), ������� ���������� m*n / k,
	��� k ���� ������� �� ����� x, y, z, � m
	� n ���� ������� � ������� �� ���� �����.��������������, ��� �������� ���������� ������ ����*/
	if (nz == 5)
	{
		int x, y, f, z, a, m, k, n;
		cout << "������ ����� ";
		cin >> m;
		cout << "������ ����� ";
		cin >> n;
		cout << "������ ����� ";
		cin >> k;
		if (k<x, y, z, a, m, n)
		{
			f = m*n / k;
			cout << "�����" << f << endl;
		}


	}



	/*1.	�������� ������� int f(int a, int b, int c), 
		������� ���������� ���������� �� �������� a, b, c.*/
	if (nz == 6)
	{
		int  a, b, c,f;
		cout << "������ ����� ";
		cin >> a;
		cout << "������ ����� ";
		cin >> b;
		cout << "������ ����� ";
		cin >> c;
		int min = a;
		
		// ���������� ��������
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



	/*7.	�������� ������� int f(int a, int b, int c),
		������� ���������� ���������� �� �������� a, b, c.*/
	if (nz == 7)
	{
		int  a, b, c, f;
		cout << "������ ����� ";
		cin >> a;
		cout << "������ ����� ";
		cin >> b;
		cout << "������ ����� ";
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
		cout << "������ ����� x";
		cin >> x;
		cout << "������ ����� y ";
		cin >> y;
		cout << "������ ����� ";
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
	/*8.	�������� ������� bool f(int x, int y, int z),
		������� ���������� true, ���� �2 + �2 = z2, ����� ���������� false.*/


	//9.	�������� ������� bool f(int x, int y), ������� ���������� true, 
	//	���� x ������� ������ �� y, ��� ��������, y ������� 
	//	������ �� x, ����� ���������� false.��������������, ��� �������� ���������� ������ ����.
	if (nz == 9)
	{
		int  x, y;
		cout << "������ ����� ";
		cin >> x;
		cout << "������ ����� ";
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


	//10.	������������� ����� x, y, z ����� ���� ��������� ������������,
	//	���� ������� �� ��� ������ ����� ���� ������.�������� ������� bool f(int x, int y, int z), 
	//	������� ���������� true, ���� ����� x, y, z ����� ���� ��������� 
	//	������������, ����� ���������� false.��������������, ��� �������� ���������� ������ ����
	if (nz == 10)
	{
		int  x, y,z;
		cout << "������ ����� ";
		cin >> x;
		cout << "������ ����� ";
		cin >> y;
		cout << "������ ����� ";
		cin >> z;
		if (x, y, z)
		{
			cout << "��� �����������"<< endl;
		}
		else
		{
			cout << "�� ���������� " << endl;

		}
	}



	system("pause");
	//getch();
	return 0;
}