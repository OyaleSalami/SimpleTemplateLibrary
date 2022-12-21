#include "Stack.h"

namespace Ltl
{
	template<class T>
	Stack<T>::Stack(const int& size)
	{
		body = T[size]; //Create an array of max [size] elements
		maxSize = size; //Set the max size
		len = 0 //No elements in the stack(Hence 0)
	}

	template<class T>
	void Ltl::Stack<T>::operator=(const Stack<T>& s)
	{
		//TODO: copy a stack to another ?? or simply set the pointer to point the other stack
	}

	template<class T>
	T Ltl::Stack<T>::top()
	{
		//Upper bounds checking
		if (len > 0)
		{
			return body[len-1]; //return the element at the top of the stack
		}
		else
		{
			//Throw an exception
		}
	}

	template<class T>
	T Stack<T>::bottom()
	{
		//Upper bounds checking
		if (len > 0)
		{
			return body[0];
		}
		else
		{
			//Throw an error exception
		}
	}

	template<class T>
	int Stack<T>::size()
	{
		return len; //return the current number of elements on the stack
	}

	template<class T>
	bool Stack<T>::empty()
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
	T Stack<T>::pop()
	{
		//Bounds Checking
		if (len > 0)
		{
			T topElement = top(); //Store out the top element
			len -= 1; //A logical delete(not an actual one)
			return topElement; //Return it
		}
		else
		{
			//Throw An Exception
		}
	}

	template<class T>
	void Stack<T>::push(const T value)
	{
		//Bounds Checking
		if (len + 1 > maxSize)
		{
			//Throw an Exception
		}
		else
		{
			body[len] = value;
			len += 1; //Because we added a new element
		}
	}

	template<class T>
	bool Ltl::Stack<T>::operator==(Stack<T>& s)
	{
		if (size() == s.size())
		{
			return true; //True if they are of the same sizes
		}
		else
		{
			return false; //False otherwise
		}

		//TODO: This is meant to be more complex than this
	}

	template<class T>
	bool Stack<T>::operator<=(Stack<T>& s)
	{
		if (size() <= s.size())
		{
			return true; //True if they are of the same sizes or (this) is less 
		}
		else
		{
			return false; //False otherwise
		}

		//TODO: This is meant to be more complex than this
	}
	
	template<class T>
	bool Stack<T>::operator>=(Stack<T>& s)
	{
		if (size() >= s.size())
		{
			return true; //True if they are of the same sizes or (this) is greater
		}
		else
		{
			return false; //False otherwise
		}

		//TODO: This is meant to be more complex than this
	}

	template<class T>
	bool Stack<T>::operator<(Stack<T>& s)
	{
		if (size() < s.size())
		{
			return true; //True if (this) is less
		}
		else
		{
			return false; //False otherwise
		}

		//TODO: This is meant to be more complex than this
	}
	
	template<class T>
	bool Stack<T>::operator>(Stack<T>& s)
	{
		if (size() > s.size())
		{
			return true; //True if (this) is greater
		}
		else
		{
			return false; //False otherwise
		}

		//TODO: This is meant to be more complex than this
	}
	
	template<class T>
	bool Stack<T>::operator!=(Stack<T>& s)
	{
		if (this == s)
		{
			return true;
		}
		else
		{
			return false;
		}

		//TODO: This will be fixed when the "==" operator is fixed
	}
}