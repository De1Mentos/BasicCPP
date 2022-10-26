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

void Kvadrat(row, line)
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < line; j++)
		{
			cout << "*  ";
		}
		cout << endl;
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
	}break;
	case 2:
	{
	}break;
	}
}