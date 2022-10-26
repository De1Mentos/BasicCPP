#include <iostream>
#include <stdlib.h>
#include "windows.h"
#include <math.h>
#include<stdio.h>
#include<conio.h>
#include <ctime>
using namespace std;
int row, line, n1, n2;
long max, min;
int c;
int d;
int sum;
double cube;

double Kvadrat(int row, int line)
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < line; j++)
		{
			cout << "*  ";
		}
		cout << endl;
	}
	return 0;
}

double Factorial(int n1)
{
	const uint32_t size = c;
	for (size_t i = n1; i > 0; i--)
	{
		sum += i * (i - 1);
	}

	return sum;
}

double Proste(double n1)
{
	if (n1 / n1 == 1 || n1 / 1 == n1)
	{
		cout << "this number is PROSTE" << endl;
		return 1;
	}
	else
	{
		cout << "this number is not PROSTE";
		return 0;
	}
}

double Cube(double n1)
{
	cube = 3;
	sum = pow(n1, cube);
	return sum;
}

double Bigger(double n1, double n2)
{
	if (n1 > n2)
	{
		cout << n1 << " Is bigger than " << n2 << endl;
		return 1;
	}
	else
	{
		cout << n2 << " Is bigger than " << n1 << endl;
		return 0;
	}
}
double Proverka(double n1)
{
	if (n1 > 0)
	{
		cout << "TRUTH" << endl;
		return 1;
	}
	else
	{
		cout << "FALSE" << endl;
		return 0;
	}
}
int main()
{

	int Zadacha;

	cout << "\t\t#------------------#" << endl;
	cout << "\t\t|     THE MENU     |" << endl;
	cout << "\t\t#------------------#" << endl;
	cout << "\t\t| 1= ZADACHA 1     |" << endl;
	cout << "\t\t| 2= ZADACHA 2     |" << endl;
	cout << "\t\t| 3= ZADACHA 3     |" << endl;
	cout << "\t\t| 4= ZADACHA 4     |" << endl;
	cout << "\t\t| 5= ZADACHA 5     |" << endl;
	cout << "\t\t| 6= ZADACHA 6     |" << endl;
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
		cout << "heigh --> ";
		cin >> row;
		cout << "wide --> ";
		cin >> line;
		cout << Kvadrat(row, line);
	}break;
	case 2:
	{
		cout << "number -->";
		cin >> n1;
		cout << Factorial(n1);
	}break;
	case 3:
	{
		cout << "number -->";
		cin >> n1;
		cout << Proste(n1);
	}break;
	case 4:
	{
		cout << "number -->";
		cin >> n1;
		cout << Cube(n1);
	}break;
	case 5:
	{
		cout << "number 1 -->";
		cin >> n1;
		cout << "number 2 -->";
		cin >> n2;
		cout << Bigger(n1, n2);
	}break;
	case 6:
	{
		cout << "number -->";
		cin >> n1;
		cout << Proverka(n1);
	}break;
	}
}