#include "Array.h"

namespace Ltl
{
	template<class T>
	Array<T>::Array(const int size)
	{
		body = new T[size];
		maxSize = size;
	}

	template<class T>
	void Array<T>::operator=(const Array<T>& a)
	{
		delete[](body);
		len = 0;
		maxSize = 0;
	}

	template<class T>
	inline Ltl::Array<T>::~Array()
	{
		len = 0;
		maxSize = 0;
		delete[](body);
	}
	
	template<class T>
	T Array<T>::operator[](const int index)
	{
		//Bounds checking
		if ((index >= 0) && !(index > len-1))
		{
			return body[index];
		}
		else
		{
			//Throw exception
		}
	}

	template<class T>
	T Array<T>::front()
	{
		if (len > 0)
		{
			return body[0];
		}
		else
		{
			//Throw exception
		}
	}
	
	template<class T>
	T Array<T>::back()
	{
		if (len > 0)
		{
			return body[len - 1];
		}
		else
		{
			//Throw exception
		}
	}

	template<class T>
	void Array<T>::append(const T& value)
	{
		if (len+1 > maxSize)
		{
			//Throw exception
		}
		else
		{
			body[len] = value;
			len++;
		}
	}

	template<class T>
	int Array<T>::size()
	{
		return len;
	}
}