#include "List.h"

namespace Stl
{
	template<class T>
	inline LinkedList<T>::LinkedList()
	{
		//The head is the first element and it points to nothing
		head = Node();
	}

	template<class T>
	inline int LinkedList<T>::size()
	{
		return len;
	}

	template<class T>
	bool LinkedList<T>::isEmpty()
	{
		if (len > 0)
		{
			return false;
		}
		return true;
	}

	template<class T>
	void LinkedList<T>::push(const T& value)
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