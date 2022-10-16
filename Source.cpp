#include <iostream>
#include <stdlib.h>
#include "windows.h"
#include <math.h>
#include<stdio.h>
#include<conio.h>
#include <ctime>
using namespace std;
int row, line, m1, m2, m3, m4, m5, m6;
long max, min;

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
	cout << "\t\t| 4= ZADACHA 6     |" << endl;
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
		for (size_t i = 0; i < row; i++)
		{
			for (size_t j = 0; j < line; j++)
			{
				cout << "*  ";
			}
			cout << endl;
		}
	}break;
	case 2:
	{
		cout << "I couldn't do it" << endl;
	}break;
	case 3:
	{
		const uint32_t size = 7;
		long arr[size];
		long sum = 0;
		int g[7];
		for (int i = 1; i < size; i++)
		{
			cout << "How much company made in " << i << " month? --> " << endl;
			cin >> g[i];
			sum += g[i];
		}
		cout << "Company made --> " << sum;
		return 0;
	}break;
		case 4:
        {
			const uint32_t size = 1;
			long long arr[size];
				for (int i = 30; i > size; i--)
				{
					cout << i << endl;
				}
        }break;
		case 5:
		{
			const uint32_t size = 6;
			long long arr[size];
			int g[6], s = 0;
			for (int i = 1; i < size; i++)
			{
				cout << "Side " << i << " is --> " << endl;
				cin >> g[i];
				s += g[i];
			}
			cout << "Perimetr = " << s;
			return 0;
		}break;
		case 6:
		{
			long max, min;
			const uint32_t size = 13;
			long arr[size];
			max = min = arr[0];
			int g[13];
			for (int i = 1; i < size; i++)
			{
				cout << "How much company made in " << i << " month? --> " << endl;
				cin >> g[i];
				if (min > arr[i])
				{
					min = arr[i];
				}
				if (max < arr[i])
				{
					min = arr[i];
				}
			}
			cout << "Min = " << min << " Max =" << max;
			cout << "For some reason I have error that I can't fix :skull:";
			return 0;
		}break;
	}
}