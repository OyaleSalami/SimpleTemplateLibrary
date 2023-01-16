#pragma once

namespace Ltl
{
	template <class T>
	class LinkedList
	{
	public:
		/// <summary>Default Constructor</summary>
		LinkedList();
	
		int size();
		bool empty();

		void push(const T value);

	private:
		class Node
		{
		public:
			T value; //Value of the current element
			Node* prev; //A pointer to the previous element
			Node* next; //A pointer to the next element

			/// <summary>Creates a new node item</summary>
			/// <param name="_value">Value to store in the node</param>
			/// <param name="_prev">Pointer to the previous element</param>
			/// <param name="_next">Pointer to the next element or back to the head</param>
			Node(const T _value, Node* _prev, Node* _next)
			{
				value = _value;
				prev = _prev;
				next = _next;
			}
		};

		Node head; //Represents the begining of the list
		int len = 0;
	};
}