#pragma once

namespace Stl
{
	template <class T>
	class LinkedList
	{
	public:
		/// <summary>Default Constructor</summary>
		LinkedList();

		/// <summary>Returns the size of the Linked List</summary>
		int size();
		/// <summary>Returns true is the list is empty</summary>
		bool isEmpty();

		/// <summary>Adds an element to the end of the list</summary>
		void push(const T& value);

	private:
		/// <summary>Represents a node in the list</summary>
		class Node
		{
		public:
			/// <summary>Value of the current element</summary>
			T value;
			/// <summary>A pointer to the previous element</summary>
			Node* prev;
			/// <summary>A pointer to the next element</summary>
			Node* next;

			Node() 
			{
				prev = nullptr;
				next = nullptr;
			}

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

		/// <summary>Represents the begining of the list</summary>
		Node head; 

		/// <summary>Number of elements currently on the list</summary>
		int len = 0;
	};
}