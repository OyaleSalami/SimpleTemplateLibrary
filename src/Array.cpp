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
}