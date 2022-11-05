
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
		int clients, price;
		cout << "How many ñlients do you have? - ";
		cin >> clients;
		int arr[10000], seek;
		int Zadacha;
		for (size_t i = 0; i < clients; i++)
		{
			cout << "How much client " << i << " have to pay? ";
			cin >> arr[i]; cout << endl;
		}
		do
		{
			cout << "What thing do you want to check?" << endl;
			cout << "1 - Check clients per packed price" << endl;
			cout << "2 - Check all the clients and their pay" << endl;
			cout << "3 - Check how much you made" << endl;
			cout << "(Author commentary - This is the best how I could understand Exercise you gave us, please don't judge me)";
			cin >> Zadacha;
			switch (Zadacha)
			{
			case 1:
			{
				cout << "Price of packet - " << endl;
				cin >> seek;
				for (size_t i = 0; i < clients; i++)
				{
					if (arr[i] == seek)
					{
						cout << "Client " << i << " have paid" << arr[i] << endl;
					}
				}
			}break;
			case 2:
			{
				for (size_t i = 0; i < clients; i++)
				{
					cout << "Client " << i << " have to pay " << arr[i] << endl;
				}
				Sleep(500);
			}break;
			case 3:
			{
				int sum = 0;
				for (size_t i = 0; i < clients; i++)
				{
					sum += arr[i];
				}
				cout << "All the clients made " << sum << endl;
			}break;
			};
		} while (Zadacha != 0);
	}
