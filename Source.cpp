#include <iostream>
#include <stdlib.h>
#include "windows.h"
#include <math.h>
#include<stdio.h>
#include<conio.h>
#include <ctime>
using namespace std;

int main()
{
	int Zadacha;
	int pick;
	int sumb;
	int pickdice = 3, psum = 0, rsum = 0;
	int sum=0;

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
		srand(time(0));
		const uint32_t size = 5;
		long long arr[size][size];
		long long sum{};
		long long mid{};
		for (int i = 0; i < size; i++)
		{
			for (size_t j = 0; j < size; j++)
			{
				arr[i][j] = rand() % 1000;

			}
		}
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				cout << "\t" << arr[i][j];

			}
			cout << endl;
		}
		cout << endl;
		long long max, min;
		max = min = arr[0][0];
		for (size_t i = 0; i < size; i++)
		{
			for (size_t j = 0; j < size; j++)
			{
			if (min > arr[i][j])
			{
				min = arr[i][j];
			}
			if (max < arr[i][j])
			{
				max = arr[i][j];
			}
		    }
		}
		for (size_t i = 0; i < size; i++)
		{
			for (size_t j = 0; j < size; j++)
			{
				sum = sum+arr[i][j];
			}
		}
		for (size_t i = 0; i < size; i++)
		{
			for (size_t j = 0; j < size; j++)
			{
				sum += arr[i][j];
			}
		}
		for (size_t i = 0; i < size; i++)
		{
			for (size_t j = 0; j < size; j++)
			{
				mid += arr[i][j];
			}
		}
		mid = mid / pow(size, 2);
		cout << "Min = " << min << "; Max = " << max << endl;
		cout << "Sum = " << sum << "; Mid = " << mid << endl;
	}break;
	case 2:
	{
		srand(time(0));
		const uint32_t size = 4, zesi = 5;
		long long arr[size][zesi];
		for (int i = 0; i < size; i++)
		{
			for (size_t j = 0; j < size; j++)
			{
				arr[i][j] = rand() % 10;

			}
		}
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < zesi; j++)
			{
				arr[0][4] = arr[0][0] + arr[0][1] + arr[0][2] + arr[0][3];
				arr[1][4] = arr[1][0] + arr[1][1] + arr[1][2] + arr[1][3];
				arr[2][4] = arr[2][0] + arr[2][1] + arr[2][2] + arr[2][3];

				arr[3][0] = arr[0][0] + arr[1][0] + arr[2][0];
				arr[3][1] = arr[0][1] + arr[1][1] + arr[2][1];
				arr[3][2] = arr[0][2] + arr[1][2] + arr[2][2];
				arr[3][3] = arr[0][3] + arr[1][3] + arr[2][3];

				arr[3][4] = arr[0][4] + arr[1][4] + arr[2][4];
			}
			cout << endl;
		}
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < zesi; j++)
			{
				cout << "\t" << arr[i][j];
			}
			cout << endl;
		}
	}break;
	case 3:
	{
		cout << "no idea";
	}break;
	};
}
