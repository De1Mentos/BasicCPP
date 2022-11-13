#include <iostream>
#include <ctime>
using namespace std;


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
		const int size = 10;
		int arr1[size] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
		int arr2[size];
		int* ptr_arr1 = arr1;
		int* ptr_arr2 = arr2;

		cout << "{ ";
		for (int i = 0; i < size; i++)
		{
			ptr_arr2 = ptr_arr1;
			cout << *ptr_arr2 << " ";
			ptr_arr1++;
			ptr_arr2++;
		}
		cout << "}\n\n";

		system("PAUSE");
	}break;
	case 2:
	{
		const int size = 10;
		int arr1[size] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
		int* ptr_arr1 = arr1;
		cout << "{ ";
		for (int i = size; i > 0; i--)
		{
			*ptr_arr1 = *(ptr_arr1 + size - 1);
			cout << *ptr_arr1 << ' ';
			*ptr_arr1--;
		}
		cout << "}\n\n";
		system("PAUSE");
	}break;
	case 3:
	{
		const int size = 10;
		int arr1[size] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
		int arr2[size];
		int* ptr_arr1 = arr1;
		int* ptr_arr2 = arr2;
		ptr_arr2 = ptr_arr1;
		cout << "{ ";
		for (int i = size; i > 0; i--)
		{
			*ptr_arr2 = *(ptr_arr2 + size - 1);
			cout << *ptr_arr2 << ' ';
			*ptr_arr2--;
		}
		cout << "}\n\n";

		system("PAUSE");
	}break;
	}
}