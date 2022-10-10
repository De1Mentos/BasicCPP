#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;


int main()
{
	int Zadacha;
	int NUMBA;
	int option;
	int guess;
	int pipka;

	cout << "\t\t#------------------#" << endl;
	cout << "\t\t|     THE MENU     |" << endl;
	cout << "\t\t#------------------#" << endl;
	cout << "\t\t|Zavdanya 1        |" << endl;
	cout << "\t\t#------------------#" << endl;
	cout << "\t\t| 1= ZADACHA 1     |" << endl;
	cout << "\t\t| 2= ZADACHA 2     |" << endl;
	cout << "\t\t| 3= ZADACHA 3     |" << endl;
	cout << "\t\t| 4= ZADACHA 4     |" << endl;
	cout << "\t\t#------------------#" << endl;
	cout << "\t\t|Zavdanya 2        |" << endl;
	cout << "\t\t#------------------#" << endl;
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
		int count = 0;
		cout << "Write a number that program will counts to -->";
		cin >> NUMBA; cout << endl;
		while (count <= NUMBA)
		{
			cout << "count = " << count << endl;
			count++;
		}
	}break;
	case 2:
	{

		{
			int start;
			int end;
			int count = 0;

			cout << "Enter Start -->";
			cin >> start; cout << endl;
			cout << "Write End -->";
			cin >> end; cout << endl;
			if (start > end)
			{
				int temp = start;
				start = end;
				end = temp;
			}
			int i = start;
			do
			{
				if (i % 2 == 0)
				{
					cout << "Even = " << i << endl;
				}
				if (i % 2 != 0)
				{
					cout << "Odd = " << i << endl;
				}
				if (i % 7 == 0)
				{
					cout << "Seven even = " << 1 << endl;
				}
				i++;
			} while (i <= end);
		}
	}break;
	case 3:
	{
		int start;
		int end;
		int count = 0;

		cout << "Enter Start -->";
		cin >> start; cout << endl;
		cout << "Write End -->";
		cin >> end; cout << endl;
		if (start > end)
		{
			int temp = start;
			start = end;
			end = temp;
		}
		int i = start;
		long long sum = 0;
		do
		{
			cout << "sum = " << sum << " + " << i << " = " << sum + i << endl;
			sum += i;
			i++;
		} while (i <= end);
		cout << "Sum = " << sum << endl;
	}break;
	case 4:
	{
		int start;
		cout << "Enter Start -->";
		cin >> start;
		int i = start;
		int sum = 0;
		char sign;
		do
		{
			system("cls");
			cout << "Sum = " << sum << " + " << i << " = " << sum + i << endl;
			sum += i;
			cout << "Enter Sign -->";
			cin >> sign;
			i++;

		} while (sign != '0');
		system("cls");
	}break;
	case 5:
	{
		srand((unsigned)time(0));
		int randomNumber;
		for (int index = 0; index < 1; index++) {
			randomNumber = (rand() % 500) + 1;
			cout << "Random Number was generated, good luck finding it!" << endl;
			cout << "Write a number between 1 and 500 --> ";
			//jopa

			do
			{


				cin >> guess;
				cout << " " << endl;
				if (guess > randomNumber)
				{
					cout << "Less!" << endl;
				}
				if (guess < randomNumber)
				{
					cout << "More!" << endl;
				}


			} while (guess != randomNumber);
			cout << "you've guessed it! It was " << randomNumber << endl;
		}

	}break;
	case 6:
	{
		cout << "Ya ne znau jo zrobutu, malo informacii v zavdany" << endl;
	}break;
	case 0:
	{

	}break;
	};
};
