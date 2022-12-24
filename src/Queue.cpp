#pragma once
#include "Queue.h"

namespace Ltl
{
	template<class T>
	inline Ltl::Queue<T>::Queue(const int& size)
	{
		/* body = T[size]; //TODO: Assign from the heap */
		body = new T[size];

		maxSize = size; //Set the max size
		len = 0; //No elements in the queue(Hence 0)
	}

	template<class T>
	void Queue<T>::operator=(const Queue& s)
	{
		//TODO: copy a queue to another ?? or simply set the pointer to point the other queue??
		delete[](body);

		body = s.getPtr();
		len = s.size();
		maxSize = s.MaxSize();
	}

	template<class T>
	Ltl::Queue<T>::~Queue()
	{
		len = 0;
		maxSize = 0;
		delete[](body);
	}

	template<class T>
	T Queue<T>::top()
	{
		//Upper bounds checking
		if (len > 0)
		{
			return body[0]; //returns the first element
		}
		else
		{
			//Throw an exception
		}
		return T();
	}

	template<class T>
	T Queue<T>::bottom()
	{
		//Upper bounds checking
		if (len > 0)
		{
			return body[len - 1]; //returns the first element
		}
		else
		{
			//Throw an exception
		}
	}
	
	template<class T>
	int Queue<T>::size()
	{
		return len;
	}

	template<class T>
	int Queue<T>::MaxSize()
	{
		return maxSize;
	}
	
	template<class T>
	bool Queue<T>::empty()
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
	
	template<class T>
	T* Queue<T>::getPtr()
	{
		return body;
	}
}