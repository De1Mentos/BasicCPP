#include <iostream>
#include <stdlib.h>
#include "windows.h"
#include <math.h>
#include<stdio.h>
#include<conio.h>
using namespace std;
double col;
double row;
char star = '*', space = '_';
int size, option, op, op2, number, numbersafe, sumbols = 0, sum = 0, zero = 0;;

int main()
{
    cout << "Press number for zadacha (1 - Triangles/2 - Sumbol reader)";
        cin >> option;
        if (option == 1)
        {
            do
            {
                cout << "Pick what figure you want to see" << endl;
                cout << "1 - a figure" << endl;
                cout << "2 - b figure" << endl;
                cout << "3 - v figure" << endl;
                cout << "4 - g figure" << endl;
                cout << "5 - d figure" << endl;
                cout << "6 - e figure" << endl;
                cout << "7 - j figure" << endl;
                cout << "8 - z figure" << endl;
                cout << "9 - u figure" << endl;
                cout << "10- k figure" << endl;
                cout << "0 - turn off" << endl;
                cin >> op2;
                if (op2 == 1)
                {
                	for (size_t i = 0; i < 10; i++)
                	{
                		for (size_t j = 0; j < 10; j++)
                		{
                			if (i < j)
                			{
                				cout << "*  ";
                			}
                			else
                			{
                				cout << "   ";
                			}
                		}
                		cout << endl;


                	}
                    Sleep(3000);
                }
                else if (op2 == 2)
                {
                    	for (size_t i = 0; i < 10; i++)
                    	{
                    		for (size_t j = 0; j < 10; j++)
                    		{
                    			if (i > j)
                    			{
                    				cout << "* ";
                    			}
                    			else
                    			{
                    				cout << " ";
                    			}
                    		}
                    		cout << endl;
                    	}
                        Sleep(3000);
                }
                else if (op2 == 3)
                {

                    for (size_t i = 0; i < 10; i++)
                    {
                    	for (size_t j = 0; j < 10; j++)
                    		{
                    			if (i < j)
                    			{
                    				cout << "* ";
                    			}
                    			else
                    			{
                    				cout << " ";
                    			}
                    		}
                    		cout << endl;
                    	}
                    Sleep(3000);
                 }
                else if (op2 == 4)
                {
                    {
                        int size, a = 1;
                        cout << "write a size";
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
                     }
                    Sleep(3000);
                }
                else if (op2 == 5)
                {
          
                         int size, a = 1;
                         cout << "write a size";
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
                      Sleep(3000);
                }
                else if (op2 == 6)
                {
                int size, a = 1;
                cout << "write a size";
                cin >> size;

                for (int i = 0; i < size; ++i)
                {
                    for (int j = 0; j < size * 2; ++j)
                    {
                        if (j < size && j < a || j >= size && j >= size * 2 - a)
                            cout << '*';
                        else
                            cout << ' ';
                    }

                    if (i < size / 2)
                        a += 2;
                    else
                        a -= 2;

                    cout << endl;
                }
                Sleep(3000);
                }
                else if (op2 == 7)
                {
                int size, a = 1;
                cout << "write a size";
                     cin >> size;
                     
                     for (int i = 0; i < size; ++i)
                     {
                         for (int j = 0; j < size * 2; ++j)
                         {
                             if (j < size && j < a)
                                 cout << '*';
                             else
                                 cout << ' ';
                         }
                     
                         if (i < size / 2)
                             a += 2;
                         else
                             a -= 2;
                     
                         cout << endl;
                     }
                     Sleep(3000);
                }
                else if (op2 == 8)
                {
                cout << "I could'nt make it :(" << endl;
                Sleep(3000);
                }
                else if (op2 == 9)
                {
                    {
                        for (size_t i = 0; i < 10; i++)
                        {
                            for (size_t j = 0; j < 10; j++)
                            {
                                if (i < j)
                                {
                                    cout << " * ";
                                }
                                else
                                {
                                    cout << "";
                                }
                            }
                            cout << endl;
                        }
                        Sleep(3000);
                    }
                }
                else if (op2 == 10)
                {
                cout << "I could'nt make it :(" << endl;
                Sleep(3000);
                }

            } while (op2 != 0);
        }
        else if(option == 2)
        {
            do
            {
                cout << " " << endl;
                cout << "0 - Exit, 1 - Start";
                cin >> op;
                if (op == 1)
                {
                    cout << "Number:";
                    cin >> number;
                    numbersafe = number;
                    while (number)
                    {
                        if (number % 10 == 0)
                            zero++;
                        number = number / 10;
                    }
                    cout << "Amount of Zero's: " << zero << endl;
                    for (sumbols = 0; numbersafe > 0; sumbols++)
                    {
                        sum += numbersafe % 10;
                        numbersafe /= 10;
                    }
                    cout << "Amount of numbers = " << sumbols << endl;
                    cout << "Sum = " << sum << endl;
                    cout << "Arithmetic mean = " << (double)sum / sumbols << endl;
                }
            } while (op != 0);

        }
        else
        {
            cout << "ERROR";
        }
   
}



