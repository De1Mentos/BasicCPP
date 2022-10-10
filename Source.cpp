#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	int ZADACHA;
	int(ParneNumber);
	int ConfrontNumber1;
	int ConfrontNumber2;
	int CheckForKind;
	int grade1;
	int grade2;
	int grade3;
	int grade4;
	int grade5;
	int ZADACHA2;
	int Number1;
	int Number2;


	cout << "\t\t#------------------#" << endl;
	cout << "\t\t|     THE MENU     |" << endl;
	cout << "\t\t#------------------#" << endl;
	cout << "\t\t|       WEEK1      |" << endl;
	cout << "\t\t#------------------#" << endl;
	cout << "\t\t| 1= ZADACHA 1     |" << endl;
	cout << "\t\t| 2= ZADACHA 2     |" << endl;
	cout << "\t\t| 3= ZADACHA 3     |" << endl;
	cout << "\t\t| 4= ZADACHA 4     |" << endl;
	cout << "\t\t#------------------#" << endl;
	cout << "\t\t|       WEEK2      |" << endl;
	cout << "\t\t#------------------#" << endl;
	cout << "\t\t| 5= ZADACHA 5     |" << endl;
	cout << "\t\t| 6= ZADACHA 6     |" << endl;
	cout << "\t\t| 7= ZADACHA 7     |" << endl;
	cout << "\t\t#------------------#" << endl;
	cout << "\t\t| 0= CLOSE         |" << endl;
	cout << "\t\t#------------------#" << endl;
	cout << "" << endl;
	cout << "Write what zadacha to show -->";
	cin >> ZADACHA;
	system("cls");
	switch (ZADACHA)
	{
	case 1:
	{
		cout << "Write number to check if it's PARNE -->";
		cin >> ParneNumber;
		if (ParneNumber % 2 == 0)
		{
			cout << "Number "; cout << ParneNumber; cout << " is PARNE! Cheers";
		}
		else
		{
			cout << "Number "; cout << ParneNumber; cout << " is NOT PARNE...";
		}

	}break;
	case 2:
	{
		cout << "Write two numbers to confront them and you'll know which number is smaller!" << endl;
		cout << "Write number 1 -->";
		cin >> ConfrontNumber1;
		cout << endl;
		cout << "Write number 2 -->";
		cin >> ConfrontNumber2;
		cout << endl;
		if (ConfrontNumber2 > ConfrontNumber1)
		{
			cout << ConfrontNumber1; cout << " is smaller than other number";
		}
		else
		{
			cout << ConfrontNumber2; cout << " is smaller than other number";
		}
	}break;
	case 3:
	{
		cout << "Write number and i'll check if this number negative, positive or 0!" << endl;
		cout << "Write number -->";
		cin >> CheckForKind;
		cout << endl;
		if (CheckForKind > 0)
		{
			cout << "You wrote positive number!" << endl;
		}
		else if (CheckForKind < 0)
		{
			cout << "You wrote negative number!" << endl;
		}
		else
		{
			cout << "You wrote 0!" << endl;
		}

	}break;
	case 4:
	{
		cout << "Write two numbers to check if they're even. If not, we'll put bigger number first" << endl;
		cout << "Write number 1 -->";
		cin >> ConfrontNumber1;
		cout << endl;
		cout << "Write number 2 -->";
		cin >> ConfrontNumber2;
		cout << endl;
		if (ConfrontNumber1 == ConfrontNumber2)
		{
			cout << "They're even!";
		}
		else if (ConfrontNumber1 > ConfrontNumber2)
		{
			cout << ConfrontNumber1 << " Is bigger than " << ConfrontNumber2;
		}
		else
		{
			cout << ConfrontNumber2 << " Is bigger than " << ConfrontNumber1;
		}
	}break;
	case 5:
	{
		cout << "Write 5 studen grades and I'll will show you if he get the pass!" << endl;
		cout << "Write grade 1 -->";
		cin >> grade1;
		cout << endl;
		cout << "Write grade 2 -->";
		cin >> grade2;
		cout << endl;
		cout << "Write grade 3 -->";
		cin >> grade3;
		cout << endl;
		cout << "Write grade 4 -->";
		cin >> grade4;
		cout << endl;
		cout << "Write grade 5 -->";
		cin >> grade5;
		cout << endl;
		if (((grade1 + grade2 + grade3 + grade4 + grade5) / 5) == 4 || ((grade1 + grade2 + grade3 + grade4 + grade5) / 5) > 4)
		{
			cout << "Student got the pass!";
		}
		else
		{
			cout << "Student didn't got the pass.";
		}



	}break;
	case 6:
	{
		cout << "If the number is PARNE i'll multiply it by 3, if it's not - I'll divide it by 2-->";
		cin >> ParneNumber;
		if (ParneNumber % 2 == 0)
		{
			cout << (ParneNumber * 3); cout << " --> Number was multiplied by 3";
		}
		else
		{
			cout << (ParneNumber / 2); cout << " --> Number was divided by 2";
		}
	}break;
	case 7:
	{
		cout << "\t\t#------------------#" << endl;
		cout << "\t\t|    CALCULATOR    |" << endl;
		cout << "\t\t#------------------#" << endl;
		cout << "\t\t| 1 = Plus         |" << endl;
		cout << "\t\t| 2 = Minus        |" << endl;
		cout << "\t\t| 3 = Divide       |" << endl;
		cout << "\t\t| 4 = Multiply     |" << endl;
		cout << "\t\t#------------------#" << endl;
		cout << "" << endl;
		cout << "Write number to start the task -->";
		cin >> ZADACHA2;
		system("cls");
		if (ZADACHA2 == 1)
		{
			cout << "Write two numbers to plus them!" << endl;
			cout << "Write first number -->";
			cin >> (Number1); cout << "" << endl;
			cout << "Write second number -->";
			cin >> (Number2); cout << "" << endl;
			cout << "Result "; cout << (Number1 + Number2);
		}
		else if (ZADACHA2 == 2)
		{

			cout << "Write two numbers to minus them!" << endl;
			cout << "Write first number -->";
			cin >> (Number1); cout << "" << endl;
			cout << "Write second number -->";
			cin >> (Number2); cout << "" << endl;
			cout << "Result "; cout << (Number1 - Number2);
		}
		else if (ZADACHA2 == 3)
		{
			cout << "Write two numbers to divide them!" << endl;
			cout << "Write first number -->";
			cin >> (Number1); cout << "" << endl;
			cout << "Write second number -->";
			cin >> (Number2); cout << "" << endl;
			cout << "Result "; cout << (Number1 / Number2);
		}
		else if (ZADACHA2 == 4)
		{
			cout << "Write two numbers to multiply them!" << endl;
			cout << "Write first number -->";
			cin >> (Number1); cout << "" << endl;
			cout << "Write second number -->";
			cin >> (Number2); cout << "" << endl;
			cout << "Result "; cout << (Number1 * Number2);
		};

	}break;
	case 0:
	{

	}break;
	}
}

