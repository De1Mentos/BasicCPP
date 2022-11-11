
#include <iostream>
#include <stdlib.h>
#include "windows.h"
#include <math.h>
#include<stdio.h>
#include<conio.h>
#include <ctime>
	using namespace std;

	void Plus(int* x, int* y, int* tmp);
	void Minus(int* x, int* y, int* tmp);
	void Multiply(int* x, int* y, int* tmp);
	void Divide(int* x, int* y, int* tmp);

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

	void* Digiter (int &digite)
	{
		if (digite < 0)
		{
			cout << "NEGATIVE";
		}
		else if (digite > 0)
		{
			cout << "POSITIVE";
		}
		if (digite == 0)
		{
			cout << "ZERO";
		}
		cout << endl;cout << endl; return 0;
		
	}
	int* Changer(int* x, int* y, int* a)
	{
		a = x;
		x = y;
		y = a;
		cout << "\nNumbers changed; 1 = " << &x << "; 2 = " << &y << endl << endl;
		return 0;
	}

    void Plus(int* x, int* y, int* tmp)
	{
		*tmp = *x + *y;
	}
	void Minus(int* x, int* y, int* tmp)
	{
		*tmp = *y - *x;
	}
	void Divide(int* x, int* y, int* tmp)
	{
		*tmp = *y / *x;
	}
	void Multiply(int* x, int* y, int* tmp)
	{
		*tmp = *y * *x;
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
			int* digite = new int{};
			cout << "Enter digit:";
			cin >> *digite;
			Digiter(*digite);
		}break;
		case 3:
		{
			int* x = new int{}; int* y = new int{}; int* a = new int{0};
			cout << "\nNumber 1 - ";
			cin >> *x;
			cout << "\nNumber 2 - ";
			cin >> *y;
			cout << "\nNumber 1 is " << y << " Number 2 is " << x;
			Changer(x, y, a);
		}break;
		case 4:
		{
			int pick, res;
			int x; int y;
			cout << "\nNumber 1 - ";
			cin >> y;
			cout << "\nNumber 2 - ";
			cin >> x;
			cout << "1 - Plus, 2 - Minus, 3 - Divide, 4 - Multiply";
			cin >> pick;
			if (pick == 1)
			{
				Plus(&x, &y, &res);
				cout << res << "\n";
				break;
			}
			else if (pick == 2)
			{
				Minus(&x, &y, &res);
				cout << res << "\n";
				break;
			}
			else if (pick == 3)
			{
				Divide(&x, &y, &res);
				cout << res << "\n";
				break;
			}
			else if (pick == 4)
			{
				Multiply(&x, &y, &res);
				cout << res << "\n";
				break;
			}
		}break;

		};
	}
