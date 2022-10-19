#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;


int main()
{
	const int col = 5;
	const int row = 5;
	long long a;
	int arr[col][row];
	int Zadacha;
	cout << "\t\t#------------------#" << endl;
	cout << "\t\t|     THE MENU     |" << endl;
	cout << "\t\t#------------------#" << endl;
	cout << "\t\t| 1= ZADACHA 1     |" << endl;
	cout << "\t\t| 2= ZADACHA 2     |" << endl;
	cout << "\t\t| 3= ZADACHA 3     |" << endl;
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
		cout << "Input number please --> ";
		cin >> a;
		for (size_t i = 0; i < col; i++)
		{
			for (size_t j = 0; j < row; j++)
			{
				arr[col][row] = a, a = a * 2;
				cout << arr[col][row] << "\t\t";
			}
			cout << endl << endl;
		}
	}break;
	case 2:
	{
		cout << "Input number please --> ";
		cin >> a;
		for (size_t i = 0; i < col; i++)
		{
			for (size_t j = 0; j < row; j++)
			{
				arr[col][row] = a, a++;
				cout << arr[col][row] << "\t\t";
			}
			cout << endl << endl;
		}
	}break;
	case 3:
	{
		cout << "Я не зміг знайти";
	}break;
	};
};