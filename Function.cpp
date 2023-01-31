//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//#include <algorithm>
//
//int numbers[10] = {};
//int minimum;
//int maximum;
//struct Functions
//{
//private:
//public:
//	int RandomArrayInt()
//	{
//		srand(time(NULL));
//		for (size_t i = 0; i < 10; i++)
//		{
//			numbers[i] = rand() % 100;
//		}
//		return 1;
//	}
//
//	int ShowArrayInt()
//	{
//		for (size_t i = 0; i < 10; i++)
//		{
//			std::cout << numbers[i] << std::endl;
//		}
//		return 1;
//	}
//
//	int MinimalArrayInt()
//	{
//		for (size_t i = 0; i < 10; i++)
//		{
//			minimum = 101;
//			if (numbers[i] <= minimum)
//			{
//				minimum = numbers[i];
//			}
//		}
//		std::cout << minimum << std::endl;
//		return 1;
//	}
//
//	int MaximumArrayInt()
//	{
//		for (size_t i = 0; i < 10; i++)
//		{
//			maximum = 0;
//			if (numbers[i] >= maximum)
//			{
//				maximum = numbers[i];
//			}
//		}
//		std::cout << maximum << std::endl;
//		return 1;
//	}
//
//	int SortArrayInt()
//	{
//		std::sort(numbers, numbers + 10);
//
//		for (int i = 0; i < 10; ++i)
//		{
//			std::cout << numbers[i] << ' ';
//		}
//		return 1;
//	}
//
//	int RedactArrayInt()
//	{
//		for (size_t i = 0; i < 10; i++)
//		{
//			std::cout << "\nNumber " << i << " is ";
//			std::cin >> numbers[i];
//		}
//		return 1;
//	}
//};