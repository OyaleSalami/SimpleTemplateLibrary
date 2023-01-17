#pragma once

namespace Ltl
{
	template <class T>
	class Queue
	{
	public:
		// Constructors
		Queue() {}
		Queue(const int &size);
		void operator=(const Queue &s);

		// Destructors
		~Queue();

#pragma region Access Functions
		/// <returns>First element in the stack</returns>
		T top();

		/// <returns>Last element in the stack</returns>
		T bottom();
#pragma endregion Accesss the elements of the container class

#pragma region Member Functions
		/// <returns>Number of elements in the queue</returns>
		int size();

		/// <returns>Max size of the container</returns>
		int maxSize();

		/// <returns>True if stack is empty, false otherwise</returns>
		bool isEmpty();

		/// <returns>Returns a pointer to the underlying memory</returns>
		T *getPtr();
#pragma endregion

#pragma region Modifier Functions
		/// <returns>Removes and returns the first element of the queue</returns>
		T pop();
		/// <summary>Appends an element to the end of the queue</summary>
		void push(const T value);
#pragma endregion Modify the elements of the container

#pragma region Operator Overload
		bool operator==(Queue<T> &s);
		bool operator<=(Queue<T> &s);
		bool operator>=(Queue<T> &s);
		bool operator<(Queue<T> &s);
		bool operator>(Queue<T> &s);
		bool operator!=(Queue<T> &s);
#pragma endregion Overloading Functions

	private:
		/// <summary>Pointer to the memory address(For handling memory)</summary>
		T *body = nullptr;

		/// <summary>Size of the queue(Max elements the queue can hold)</summary>
		int max = 0;

		/// <summary>Current size of the queue</summary>
		int len = 0;
	};
}