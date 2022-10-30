#include <iostream>
#include <stdlib.h>
#include "windows.h"
#include <math.h>
#include<stdio.h>
#include<conio.h>
#include <ctime>
#include <iomanip>
using namespace std;

template <typename T>
void PrintArray(T arr, const uint32_t size)
{
	double sum = 0;
	for (size_t i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	cout << sum / size << endl;
}

template <typename T>
void OverLoad(T a, T b)
{
	if (a > b)
	{
		cout << a << " is bigger than " << b;
	}
	else
	{
		cout << b << " is bigger than " << a;
	}
}

template <typename T>
void OverLoad(T arri)
{
	int max = 0;
	for (size_t i = 0; i < 2; i++)
	{
		if (arri[i] > max)
		{
			max = arri[i];
		}
	}
	cout << "Biggest number " << max;
}

template <typename T>
void OdinVumir(T arrO)
{
	int max = 0;
	for (size_t i = 0; i < 5; i++)
	{
		if (arrO[i] > max)
		{
			max = arrO[i];
		}
	}
	cout << "Biggest number " << max;
}

template <typename T>
void DvaVumir(T arrD)
{
	int max = 0;
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		
			if (arrD[i][j] > max)
			{
				max = arrD[i][j];
			}
		
	}
	cout << "Biggest number " << max;
}

template <typename T, typename T1>
void Func(T p_d, T1 p_i)
{
	cout << setprecision(p_i) << p_d;
}

template <typename T>
void TriVumir(T arrT)
{
	int max = 0;
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		
			for (size_t c = 0; c < 5; c++)
			
				if (arrT[i][j][c] > max)
				
					max = arrT[i][j][c];
				
			
		
	}
	cout << "Biggest number " << max;
}

int main()
{
	double a, b, c, aa, bb, cc, sum;
	int arrO[6], arrD[6], arrT[6];

	int Zadacha;

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
		const uint32_t size = 6;
		double arr[size]{ 5, 10, 15, 20, 25, 30 };
		PrintArray(arr, size);
	}break;
	case 2:
	{

	}break;
	case 3:
	{
		double x;
		int y;
		cout << "Enter double:";
		cin >> x;
		cout << "Enter int:";
		cin >> y;

		Func<double, int>(x, y);
		return 0;
	}break;
	case 4:
	{
		srand(time(0));
		cout << "1 - For one vumir, 2 - For two vumirs, 3 - For three vumirs" << endl;
		int numba; cin >> numba;
		if (numba == 1)
		{
			for (size_t i = 0; i < 6; i++)
			{
				arrO[i] = rand() % 100;
			}
			OdinVumir(arrO);
		}
		//else if (numba == 2)
		//{
		//	for (size_t i = 0; i < 6; i++)
		//	{
		//		for (size_t j = 0; j < 6; j++)
		//		{
		//			arrD[i] = rand();
		//		}
		//	}
		//	DvaVumir(arrD);
		//}
		//else if (numba == 3)
		//{
		//	for (size_t i = 0; i < 6; i++)
		//	{
		//		for (size_t j = 0; j < 6; j++)
		//		{
		//			for (size_t c = 0; c < 6; c++)
		//			{
		//				arrT[i] = rand();
		//			}
		//		}
		//	}
		//	TriVumir(arrT);
		//}
	 }break;
	case 5:
	{
		cout << "2 - For 2 numbers, 3 - For 3 numbers" << endl;
		int numba; cin >> numba;
		if (numba == 2)
		{
			cout << "\nNumber 1 - "; cin >> a;
			cout << "\nNumber 2 - "; cin >> b;
			OverLoad(a, b);
		}
		else if (numba == 3)
		{
			cout << "\nNumber 1 - "; cin >> a;
			cout << "\nNumber 2 - "; cin >> b;
			cout << "\nNumber 3 - "; cin >> c;
			int arri[3]{a, b, c};
			OverLoad(arri);
		}
	}break;
	}
}
