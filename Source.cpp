#include <iostream>
#include <fstream>
#include <string>

using namespace std;

ifstream fin;
ofstream fout;

void writer(string& str) {
	if (str.size() >= 7) 
	{
		fout << str;
		fout << " ";
	}
}

int main()
{
	int Zadacha;
	int pop[5];

	cout << "\t\t#------------------#" << endl;
	cout << "\t\t|     THE MENU     |" << endl;
	cout << "\t\t#------------------#" << endl;
	cout << "\t\t| 1= ZADACHA 1     |" << endl;
	cout << "\t\t| 2= ZADACHA 2     |" << endl;
	cout << "\t\t| 3= ZADACHA 3     |" << endl;
	cout << "\t\t| 4= ZADACHA 4     |" << endl;
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
		fin.open("in.txt");
		fout.open("out.txt");

		string str;

		int ch;
		while ((ch = fin.get()) != EOF) 
		{
			if (ch != ' ') {
				str += static_cast<char>(ch);
			}
			else {
				writer(str);
				str = "";
			}
		}
		writer(str);

		return 0;
	}break;
	case 2:
	{
		fout.open("cheese.txt");

		if (fout.is_open())
		{
			string One = "cheese";
			string Two = "\nburger";
			fout << One;
			fout << Two;
			fout.close();
			fout.open("burger.txt");
			if (fout.is_open())
			{
				fout << One;
				fout << Two;
			}
			else
			{
				cout << "error" << endl;
			}
		}
		else
		{
			cout << "error" << endl;
		}

		fout.close();
	}break;
	case 3:
	{
		fout.open("cheese.txt", ofstream::app);

		if (fout.is_open())
		{
			for (size_t i = 1; i < 4; i++)
			{
				cout << "Write any number ";
				cin >> pop[i];
				fout << "\n";
				fout << pop[i];
			}
			fout.close();
			fout.open("burger.txt", ofstream::app);
			if (fout.is_open())
			{
				for (size_t i = 3; i > 0; i--)
				{
					fout << "\n";
					fout << pop[i];
				}
			}
			else
			{
				cout << "error" << endl;
			}
		}
		else
		{
			cout << "error" << endl;
		}
		fout.close();
	case 4:
	{
		fout.open("cheese.txt", ofstream::app);

		if (fout.is_open())
		{
			string Tomas;
			Tomas = "Tank ";
			fout << Tomas;
			if (Tomas.find(' ') != std::string::npos)
			{
				fout.close();
				fout.open("burger.txt", ofstream::app);
				if (fout.is_open())
				{
					fout << Tomas;
					fout << "\n------------";
				}
				else
				{
					cout << "error" << endl;
				}
			}
			else
			{
				fout.close();
				fout.open("burger.txt", ofstream::app);
				if (fout.is_open())
				{
					fout << Tomas;
					fout << "------------";
				}
				else
				{
					cout << "error" << endl;
				}
			}
		}
		else
		{
			cout << "error" << endl;
		}
		fout.close();
	}
	}break;
	}
}