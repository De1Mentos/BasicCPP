#include <iostream>
using namespace std;

int Sum(int x, int y)
{
	return x + y;
}
int Div(int x, int y)
{
	return x / y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Min(int x, int y)
{
	return x - y;
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
		int x; int y;
		cout << "Number A - "; cin >> x;
		cout << "Number B - "; cin >> y;
		int size = 4;
		int (*sum_prt[4])(int, int) = { Sum, Mul, Div, Min };
		for (size_t i = 0; i < 4; i++)
		{
			if (i == 0)
			{
				cout << " sum = ";
			}
			if (i == 1)
			{
				cout << " mul = ";
			}
			if (i == 2)
			{
				cout << " div = ";
			}
			if (i == 3)
			{
				cout << " min = ";
			}
			cout << sum_prt[i](x, y) << endl;
		}
	}break;
	case 2:
	{
		int arrA[5]{1, 2, 3, 4, 5}; int arrB[5]{1, 2, 3, 4, 5}; int arrC[5];
		int (*arr_prt[4])(int, int, int) = {};
		for (size_t i = 0; i < 5; i++)
		{
			arrC[i] = arrA[i] + arrB[i];
		}
		for (size_t i = 0; i < 5; i++)
		{
			cout << arrC[i] << endl;
		}
	}break;
	}
}