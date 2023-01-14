#include "List.h"

namespace Ltl
{
	template<class T>
	LinkedList<T>::LinkedList()
	{
		//The head is the first element and it points to nothing in this case
		head = new Node(T(), nullptr, nullptr);
	}

	template<class T>
	inline int Ltl::LinkedList<T>::size()
	{
		return len;
	}

	template<class T>
	bool LinkedList<T>::empty()
	{
		if (len > 0)
		{
			return false;
		}
		return true;
	}

	template<class T>
	void LinkedList<T>::push(const T value)
	{
		Node next;

		for (int i = 0; i < len; i++)
		{
			
		}

		if (head.next == nullptr)
		{
			next = new Node(value, &head, nullptr);
		}
	}
}