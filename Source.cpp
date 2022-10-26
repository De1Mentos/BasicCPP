#include <iostream>
#include <stdlib.h>
#include "windows.h"
#include <math.h>
#include<stdio.h>
#include<conio.h>
#include <ctime>
using namespace std;

double Stepen(double x, double y)
{
	return pow(x, y);
}
double Diapazon(double x, double y, double c, double d)
{
	if (y > x)
	{
		c = y - x;
	}
	else
	{
		c = x - y;
	}
	const uint32_t size = c;
	for (size_t i = 0; i < c; i++)
	{
		if (y > x)
		{
			d += i + x;
		}
		else
		{
			d += i + y;
		}
	}
	return d + y + x;
}
double Dosconale(double x, double y, int c, double d, double a)
{

	if (y > x)
	{
		c = y - x;
		d = x;
	}
	else
	{
		c = x - y;
		d = y;
	}
	const uint32_t size = c;
	for (size_t i = d; i < c; i++)
	{
		if (a == 6 || 28 || 496 || 8128 || 33550336)
		{
			return a;
		}
	}
}

int main()
{
	int Zadacha, a=0;

	cout << "\t\t#------------------#" << endl;
	cout << "\t\t|     THE MENU     |" << endl;
	cout << "\t\t#------------------#" << endl;
	cout << "\t\t| 1= ZADACHA 1     |" << endl;
	cout << "\t\t| 2= ZADACHA 2     |" << endl;
	cout << "\t\t| 3= ZADACHA 3     |" << endl;
	cout << "\t\t| 4= ZADACHA 4     |" << endl;
	cout << "\t\t| 5= ZADACHA 5     |" << endl;
	cout << "\t\t| 6= ZADACHA 6     |" << endl;
	cout << "\t\t| 7= ZADACHA 7     |" << endl;
	cout << "\t\t| 8= ZADACHA 8     |" << endl;
	cout << "\t\t#------------------#" << endl;
	cout << "\t\t| 0= CLOSE         |" << endl;
	cout << "\t\t#------------------#" << endl;
	cout << "" << endl;
	cout << "Write what zadacha to show -->";
	cin >> Zadacha;
	system("cls");
	switch (Zadacha)
	{
	case 1:
	{
		double a, b;
		cout << "Main number --> ";
		cin >> a;
		cout << "\nMain number degree --> ";
		cin >> b;
		cout << "\nResult ---> " << Stepen(a, b);
	}break;
	case 2:
	{
		double a, b, c=0, d=0;
		cout << "Main number --> ";
		cin >> a;
		cout << "\nSecond Number --> ";
		cin >> b;
		cout << "\nResult ---> " << Diapazon(a, b, c, d);
	}break;
	case 3:
	{
		double a, b, c = 0, d = 0;
		cout << "Main number --> ";
		cin >> a;
		cout << "\nSecond Number --> ";
		cin >> b;
		cout << "\nResult ---> " << Dosconale(a, b, c, d, a);
	}break;
	}
}