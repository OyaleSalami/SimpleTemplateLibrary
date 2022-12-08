#pragma once

namespace Ltl
{
	template<class T>
	class Queue
	{
	public:
		//Constructors
		Queue() {}
		Queue(const int& size);
		void operator=(const Queue& s);

		//Destructors
		~Queue() {}

		#pragma region Access Functions
		T top();
		T bottom();
		#pragma endregion Accesss the elements of the container class

		#pragma region Member Functions
		int size();
		bool empty();
		#pragma endregion 

		#pragma region Modifier Functions
		void pop();
		void emplace(const T& value);
		void push(const T& value);
		void swap();
		#pragma endregion Modify the elements of the container

		#pragma region Operator Overload
		bool operator==(Queue<T>& s);
		bool operator<=(Queue<T>& s);
		bool operator>=(Queue<T>& s);
		bool operator<(Queue<T>& s);
		bool operator>(Queue<T>& s);
		bool operator!=(Queue<T>& s);
		#pragma endregion Overloading Functions
	};
}