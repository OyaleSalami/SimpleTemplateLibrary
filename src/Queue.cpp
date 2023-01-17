#pragma once
#include "Queue.h"

namespace Ltl
{
	template <class T>
	inline Queue<T>::Queue(const int &size)
	{
		body = new T[size]; //Assign from the heap

		max = size; // Set the max size
		len = 0;		// No elements in the queue yet(Hence 0)
	}

	template <class T>
	inline Queue<T>::~Queue()
	{
		len = 0;
		max = 0;
		delete[](body);
	}

	template <class T>
	void Queue<T>::operator=(const Queue &s)
	{
		//Copy a queue to another or 
		//Simply set the pointer to point the other queue ...
		delete[] (body);

		body = s.getPtr();
		len = s.size();
		maxSize = s.MaxSize();
	}

	template <class T>
	void Queue<T>::push(const T value)
	{
		if (len + 1 > max)
		{
			// throw exception
			//std::cerr << "this queue is full" << std::endl;
		}
		else
		{
			body[len] = value;
			len++;
		}
	}

	template <class T>
	T Queue<T>::pop()
	{
		if (isEmpty())
		{
			// throw exception
			//std::cerr << "this queue is empty" << std::endl;
		}
		else
		{
			return body[len];
			len--;
		}
	}

	template <class T>
	T Queue<T>::top()
	{
		// Upper bounds checking
		if (len > 0)
		{
			return body[0]; // returns the first element
		}
		else
		{
			// Throw an exception
		}
		return T();
	}

	template <class T>
	T Queue<T>::bottom()
	{
		// Upper bounds checking
		if (len > 0)
		{
			return body[len - 1]; // returns the first element
		}
		else
		{
			// Throw an exception
		}
	}

	template <class T>
	int Queue<T>::size()
	{
		return len;
	}

	template <class T>
	int Queue<T>::maxSize()
	{
		return max;
	}

	template <class T>
	bool Queue<T>::isEmpty()
	{
		if (len > 0)
		{
			return false;
		}
		else
		{
			return true;
		}
	}

	template <class T>
	T *Queue<T>::getPtr()
	{
		return body;
	}
}