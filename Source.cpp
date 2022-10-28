#include <iostream>
#include <stdlib.h>
#include "windows.h"
#include <math.h>
#include<stdio.h>
#include<conio.h>
#include <ctime>
using namespace std;

double date(int a, double b, double c, int aa, double bb, double cc)
{
	if (a % 4)
	{
		c++;
	}
	if (aa % 4)
	{
		cc++;
	}
	cout << "Years - " << aa - a << "; months - " << bb - b << "; days - " << cc - c << endl << endl;
	return 1;
}

double arry(double arr[], double sum)

{
	for (size_t i = 0; i < 6; i++)
	{
		sum += arr[i];
	}
	cout << endl << sum / 6 << " average number;" << endl << endl;
	return 1;
}

double arry(double arr[], double plus, double minus, double zero)

{
	for (size_t i = 0; i < 6; i++)
	{
		if (arr[i] < 0)
		{
			minus++;
		}
		if (arr[i] > 0)
		{
			plus++;
		}
		if (arr[i] == 0)
		{
			zero++;
		}
	}
	cout << endl << zero << " - Zeros; " << plus << " - Positive numbers; " << minus << " - Negative numbers; " << endl << endl;
	return 1;
}

int maximumnumber(int a, int b)

{
	while (a > 0 && b > 0)
	{
		if (a > b)
		{
			a %= b;
		}
		else
		{
			b %= a;
		}
	}
return a + b;
}

int main()
{
	double a, b, c, aa, bb, cc, sum;

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
		cout << "\nStarting year - ";
		cin >> a;
		cout << "\nStarting month - ";
		cin >> b;
		cout << "\nStarting day - ";
		cin >> c;
		cout << "\nEnding year - ";
		cin >> aa;
		cout << "\nEnding month - ";
		cin >> bb;
		cout << "\nEnding day - ";
		cin >> cc;
		cout << date(a, b, c, aa, bb, cc);
	}break;
	case 2:
	{
		double arr[6], sum = 0;
		for (size_t i = 0; i < 6; i++)
		{
			cout << i << " number in massive -> ";
			cin >> arr[i];
		}
		cout << arry(arr, sum);
	}break;
	case 3:
	{
		double arr[6], minus = 0, plus = 0, zero = 0;
		for (size_t i = 0; i < 6; i++)
		{
			cout << i << " number in massive -> ";
			cin >> arr[i];
		}
		cout << arry(arr, minus, plus, zero);
	}break;
	case 4:
	{
		cout << "First number - ";
		cin >> a;
		cout << "Second number - ";
		cin >> b;
		cout << maximumnumber(a, b);
	}break;
	case 5:
	{
	}break;
	case 6:
	{
	}break;
	}
	return 0;
}
