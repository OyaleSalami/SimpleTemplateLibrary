#pragma once
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