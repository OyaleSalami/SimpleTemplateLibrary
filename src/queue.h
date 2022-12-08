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

		//Access Functions
		T top();
		T bottom();

		//Member Functions
		int size();
		bool empty();

		//Modifier Functions
		void pop();
		void emplace(const T& value);
		void push(const T& value);
		void swap();

		//Operator Overloading
		bool operator==(Queue<T>& s);
		bool operator<=(Queue<T>& s);
		bool operator>=(Queue<T>& s);
		bool operator<(Queue<T>& s);
		bool operator>(Queue<T>& s);
		bool operator!=(Queue<T>& s);
	};
}