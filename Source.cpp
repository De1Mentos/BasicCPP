
#include <iostream>
#include <stdlib.h>
#include "windows.h"
#include <math.h>
#include<stdio.h>
#include<conio.h>
#include <ctime>
	using namespace std;

	int* Biggest(int* x, int* y)
	{
		if (*x < *y)
		{
			return y;
		}
		else
		{
			return x;
		}
	}

	int* Changer(int* x, int* y, int* a)
	{
		a = x;
		x = y;
		y = a;
		cout << "\nNumbers changed; 1 = " << *x << "; 2 = " << *y << endl << endl;
		return 0;
	}

	int* Plus(int* x, int* y)
	{
		return y + *x;
	}
	int* Minus(int *x, int *y)
	{
		return y - *x;
	}
	int* Divide(int* x, int* y)
	{
		return y;
	}
	int* Multiply(int* x, int* y)
	{
		return y;
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
			int* x = new int{}; int* y = new int {};
			cout << "\nNumber 1 - "; 
			cin >> *x;
			cout << "\nNumber 2 - "; 
			cin >> *y;
			cout << *Biggest(x, y) << " Is the biggest number";
		}break;
		case 2:
		{

		}break;
		case 3:
		{
			int* x = new int{}; int* y = new int{}; int* a = new int{0};
			cout << "\nNumber 1 - ";
			cin >> *x;
			cout << "\nNumber 2 - ";
			cin >> *y;
			*Changer(x, y, a);
		}break;
		case 4:
		{
			int pick;
			int* x = new int{}; int* y = new int{};
			cout << "\nNumber 1 - ";
			cin >> *x;
			cout << "\nNumber 2 - ";
			cin >> *y;
			cout << "1 - Plus, 2 - Minus, 3 - Divide, 4 - multiply";
			cin >> pick;
			if (pick == 1)
			{
				cout << *Plus(x, y);
			}
			else if (pick == 2)
			{
				cout << *Minus;
			}
			else if (pick == 3)
			{
				cout << *Divide;
			}
			else if (pick == 4)
			{
				cout << *Multiply;
			}
		}break;

		};
	}
