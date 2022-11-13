#include <iostream>
#include <ctime>
	using namespace std;

    void sort(int* arrN, int sizeN)
    {
        int tmp = 0;
        for (int i = 0; i < sizeN; ++i)
        {
            for (int j = i + 1; j < sizeN; ++j)
            {
                if (arrN[j] < arrN[i])
                {
                    tmp = arrN[j];
                    arrN[j] = arrN[i];
                    arrN[i] = tmp;
                }
            }
        }
    }

	int main()
	{
		int Zadacha;

		cout << "\t\t#------------------#" << endl;
		cout << "\t\t|     THE MENU     |" << endl;
		cout << "\t\t#------------------#" << endl;
		cout << "\t\t| 1= ZADACHA 1     |" << endl;
		cout << "\t\t| 2= ZADACHA 2     |" << endl;
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
            int sizeA, sizeB;
            cout << "First Massive Size: ";
            cin >> sizeA;
            cout << "Second Massive Size: ";
            cin >> sizeB;
            int* arrA = new int[sizeA];
            int* arrB = new int[sizeB];
            cout << "\n\nFirst Massive: ";
            for (int x = 0; x < sizeA; x++)
            {
                arrA[x] = rand() % 9 + 1;
                cout << arrA[x] << " ";
            }
            cout << "\n\nSecond Massive: ";
            for (int x = 0; x < sizeB; x++)
            {
                arrB[x] = rand() % 9 + 1;
                cout << arrB[x] << " ";
            }

            sort(arrA, sizeA);
            sort(arrB, sizeB);


            int sizeC[10];
            for (size_t sizeC = 0; sizeC < sizeB; sizeC++)
            {
                for (size_t i = 0; i < sizeB; i++)
                {
                    for (size_t t = 0; t < sizeB; t++)
                    {
                        for (size_t j = 0; j < sizeB; j++)
                        {
                            if (arrA[t] != i && arrB[j] != i)
                            {
                                sizeC[&i] = i;
                                i++;
                            }
                        }
                    }
                }
            }
            cout << "\n\nFirst Massive (Sorted): ";
            for (int x = 0; x < sizeA; x++)
            {
                cout << arrA[x] << " ";
            }
            cout << "\n\nSecond Massive (Sorted): ";
            for (int x = 0; x < sizeB; x++)
            {
                cout << arrB[x] << " ";
            }
            cout << "\n\nThird Massive: ";
            for (int x = 0; x < 10; x++)
            {
                cout << sizeC[x] << " ";
            }

            delete arrA;
            delete arrB;
            delete sizeC;
        }break;
		case 2:
		{
            int sizeA, sizeB;
            cout << "First Massive Size: ";
            cin >> sizeA;
            cout << "Second Massive Size: ";
            cin >> sizeB;
            int* arrA = new int[sizeA];
            int* arrB = new int[sizeB];
            cout << "\n\nFirst Massive: ";
            for (int x = 0; x < sizeA; x++)
            {
                arrA[x] = rand() % 9 + 1;
                cout << arrA[x] << " ";
            }
            cout << "\n\nSecond Massive: ";
            for (int x = 0; x < sizeB; x++)
            {
                arrB[x] = rand() % 9 + 1;
                cout << arrB[x] << " ";
            }

            sort(arrA, sizeA);
            sort(arrB, sizeB);

            int* arrC = new int[sizeA < sizeB ? sizeA : sizeB];
            int sizeC = 0;

            for (int x = 0, y = 0; x < sizeA && y < sizeB; )
            {
                if (arrA[x] < arrB[y]) ++x;
                else if (arrA[x] > arrB[y]) ++y;
                else
                {
                    arrC[sizeC++] = arrA[x];
                    x++; y++;
                }
            }

            cout << "\n\nFirst Massive (Sorted): ";
            for (int x = 0; x < sizeA; x++)
            {
                cout << arrA[x] << " ";
            }
            cout << "\n\nSecond Massive (Sorted): ";
            for (int x = 0; x < sizeB; x++)
            {
                cout << arrB[x] << " ";
            }
            cout << "\n\nThird Massive: ";
            for (int x = 0; x < sizeC; x++)
            {
                cout << arrC[x] << " ";
            }

            delete arrA;
            delete arrB;
            delete arrC;
		}break;
		};
}