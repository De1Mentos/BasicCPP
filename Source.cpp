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
		if (i == 6)
		{
			cout << "\n6";
		}
		if (i == 28)
		{
			cout << "\n28";
		}
		if (i == 496)
		{
			cout << "\n496";
		}
		if (i == 8128)
		{
			cout << "\n8128";
		}
		if (i == 2096128)
		{
			cout << "\n2096128";
		}
		if (i == 33550336)
		{
			cout << "\n33550336";
		}
		if (i == 8589869056)
		{
			cout << "\n8589869056";
		}
	}
	return 0;
}

string Carta(string card)
{
	return card;
}

int Lucky(int a, double sum)
{
	double bober;
	bober = a % 1000;
	a -= a % 1000;
	a = a / 1000;
	if (a == bober)
	{
		cout << "Lucky number!";
		return 1;
	}
	else
	{
		cout << "Not a lucky number";
		return 0;
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
	case 4:
	{
		string card;
		cout << "What card do you want to toss? (name in one word) --> ";
		cin >> card;
		cout << "Your card is " << Carta(card);
	}break;
	case 5:
	{
		int a, sum = 0;
		cout << "Main number (6 symbols) --> ";
		cin >> a;
		cout << "\nResult ---> " << Lucky(a, sum);
	}break;
	}
}