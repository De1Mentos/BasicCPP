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
		cout << "\t\t#---------------------#" << endl;
		cout << "\t\t| THE LINE 1.0        |" << endl;
		cout << "\t\t#---------------------#" << endl;
		cout << "\t\t| 1 = Slow            |" << endl;
		cout << "\t\t| 2 = Medium          |" << endl;
		cout << "\t\t| 3 = Quick           |" << endl;
		cout << "\t\t#---------------------#" << endl;
		cout << "\t\t| 0= CLOSE            |" << endl;
		cout << "\t\t#---------------------#" << endl;
		cin >> pick;
		cout << "" << endl;
		if (pick == 1)
		{
			int pp = 0;
			do
			{
				cout << "*";
				pp++;
				Sleep(900);
			} while (pp != 10);
		}
		else if (pick == 2)
		{
			int pp = 0;
			do
			{
				cout << "*";
				pp++;
				Sleep(600);
			} while (pp != 10);
		}
		else if (pick == 3)
	    {
			int pp = 0;
			do
			{
				cout << "*";
				pp++;
				Sleep(300);
			} while (pp != 10);
	    }
		else
		{
			cout << "closing";
		}
	}break;
	case 2:
	{
		do
		{
		srand(time(0));
		cout << "\t\t#---------------------#" << endl;
		cout << "\t\t| Devil dice Game 1.2 |" << endl;
		cout << "\t\t#---------------------#" << endl;
		cout << "\t\t| 1 = Start           |" << endl;
		cout << "\t\t#---------------------#" << endl;
		cout << "\t\t| 0= CLOSE            |" << endl;
		cout << "\t\t#---------------------#" << endl;
		cin >> pickdice;
		if (pickdice == 1)
		{
			const uint32_t psize = 3, rsize = 3;
			long pd[psize];
			long rd[rsize];
			long sum = 0;
			int pr[7];
			for (int i = 1; i < psize; i++)
			{
				pr[i] = rand() % 6 + 1;
				cout << "You throw the dice " << i << ", It's " << pr[i] << endl;
				psum += pr[i];
				Sleep(500);
			}
			cout << "" << endl;
			for (int i = 1; i < rsize; i++)
			{
				pr[i] = rand() % 6 + 1;
				cout << "Devil throw the dice " << i << ", It's " << pr[i] << endl;
				rsum += pr[i];
				Sleep(500);
			}
			Sleep(900);
			cout << "" << endl;
			cout << "You got " << psum << " total, and the devil got " << rsum << endl;
			Sleep(500);
			cout << "" << endl;
			if (rsum > psum)
			{
				cout << "Devil won!";
				psum = 0;
				rsum = 0;
			}
			else if (rsum < psum)
			{
				cout << "You won!";
				psum = 0;
				rsum = 0;
			}
			else
			{
				cout << "Ehm... I guess it's a draw!";
				psum = 0;
				rsum = 0;
			}
			cout << "" << endl;
		}
		} while (pickdice != 0);
	}break;
	case 3:
	{
		srand(time(0));
		const uint32_t size = 5;
		long long arr[size];
		long long sum;
			for (int i = 0; i < size; i++)
			{
				arr[i] = rand() % 10;
		    }
			for (int i = 0; i < size; i++)
			{
				cout << arr[i];
			}
			cout << endl;
			long long max, min;
			max = min = arr[0];
				for (size_t i = 0; i < size; i++)
				{
					if (min > arr[i])
					{
						min = arr[i];
					}
					if (max < arr[i])
					{
					    max = arr[i];
					}
				}
				cout << "Min = " << min << "; Max = " << max;
	}break;
	case 4:
	{
		srand(time(0));
		const uint32_t size = 12;
		long long arr[size];
		long long sum, start, end;
		for (int i = 0; i < size; i++)
		{
			cout << "How much company made during " << i + 1 << " month?" << endl;
			cin >> arr[i];
		}
		cout << "Start month to count - ";
		cin >> start;
		cout << "End month to cound - ";
		cin >> end;
		cout << endl;
		long long max, min;
		max = min = arr[0];
		for (size_t i = start; i < end; i++)
		{
			if (min > arr[i])
			{
				min = arr[i];
			}
			if (max < arr[i])
			{
				max = arr[i];
			}
		}
		cout << "Min = " << min << "; Max = " << max;
	}break;
	case 5:
	{
		cout << "Couldn't do it right now";
	}break;
	}

}