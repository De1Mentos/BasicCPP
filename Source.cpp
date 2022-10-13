#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
using namespace std;
double col;
double row;
char star = '*', space = '_';
int size;

int main()
{
    int size, a = 1;

    cin >> size;

    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size * 2; ++j)
        {
            if (j < size && j < a || j >= size && j >= size * 2 - a)
                cout << ' ';
            else
                cout << '*';
        }

        if (i < size / 2)
            a += 2;
        else
            a -= 2;

        cout << endl;
    }

    system("pause");
    return 0;
}

//Номер 1{
//	cout << "h - " << endl;
//	cin >> col;
//	cout << "w - " << endl;
//	cin >> row;
//	for (size_t i = 0; i < col; i++)
//	{
//		for (size_t j = 0; j < row; j++)
//		{
//			if (i < j)
//			{
//				cout << "*  ";
//			}
//			else
//			{
//				cout << "   ";
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}
//Номер 2{
//	cout << "h - " << endl;
//	cin >> col;
//	cout << "w - " << endl;
//	cin >> row;
//	for (size_t i = 0; i < col; i++)
//	{
//		for (size_t j = 0; j < row; j++)
//		{
//			if (i > j)
//			{
//				cout << "* ";
//			}
//			else
//			{
//				cout << " ";
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//} 
//Номер 3{
//	cout << "h - " << endl;
//	cin >> col;
//	cout << "w - " << endl;
//	cin >> row;
//	for (size_t i = 0; i < col; i++)
//	{
//		for (size_t j = 0; j < row; j++)
//		{
//			if (i < j)
//			{
//				cout << "* ";
//			}
//			else
//			{
//				cout << " ";
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}
//Номер 4{
//    int size, a = 1;
//
//    cin >> size;
//
//    for (int i = 0; i < size; ++i)
//    {
//        for (int j = 0; j < size * 2; ++j)
//        {
//            if (j < size && j < a || j >= size && j >= size * 2 - a)
//                cout << ' ';
//            else
//                cout << '*';
//        }
//
//        if (i < size / 2)
//            a += 2;
//        else
//            a -= 2;
//
//        cout << endl;
//    }
//    return 0;
//}
//Номер 5{
//int size, a = 1;
//
//cin >> size;
//
//for (int i = 0; i < size; ++i)
//{
//    for (int j = 0; j < size * 2; ++j)
//    {
//        if (j < size && j < a || j >= size && j >= size * 2 - a)
//            cout << ' ';
//        else
//            cout << '*';
//    }
//
//    if (i < size / 2)
//        a += 2;
//    else
//        a -= 2;
//
//    cout << endl;
//}
//
//system("pause");
//return 0;
//}
//Номер 9{
//	cout << "h - " << endl;
//	cin >> col;
//	cout << "w - " << endl;
//	cin >> row;
//	for (size_t i = 0; i < col; i++)
//	{
//		for (size_t j = 0; j < row; j++)
//		{
//			if (i < j)
//			{
//				cout << " * ";
//			}
//			else
//			{
//				cout << "";
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}