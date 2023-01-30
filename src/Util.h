#pragma once

#ifdef _WIN32
#define clear() system("cls")
#else
#define clear() system("clear")
#endif

void pause()
{
	getchar();
	std::cout << "\nPress any key to continue" << std::endl;
	getchar();
}

#include "Array.h"


namespace Ltl
{
	template<class T>
	int LinearSearch(Ltl::Array<T> art, const int& value)
	{
		for (int i = 0; i < art.size(); i++)
		{
			if (art[i] == value)
			{
				return i;
			}
		}
	}

	template<class T>
	int BinarySearch(Ltl::Array<T> art, const int& value)
	{
		for (int i = 0; i < art.size(); i++)
		{
			if (art[i] == value)
			{
				return i;
			}
		}
		return -1;
	}

	int InsertionSort()
	{
		return 0;
	}

	int SelectionSort()
	{
		return 0;
	}
}