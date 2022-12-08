#pragma once

namespace Ltl
{
	template<class T>
	class Stack
	{
	public:
		//Constructors
		Stack<T>(){}
		Stack<T>(const int& size);
		void operator=(const Stack<T>& s);

		//Destructors
		~Stack(){}

		//Access Functions
		void top();
		void bottom();

		//Member Functions
		int size();
		bool empty();

		//Modifier Functions
		void pop();
		void emplace(const T& value);
		void push();
		void swap();

		//Operator Overloading
		bool operator==(Stack<T>& s);
		bool operator<=(Stack<T>& s);
		bool operator>=(Stack<T>& s);
		bool operator<(Stack<T>& s);
		bool operator>(Stack<T>& s);
		bool operator!=(Stack<T>& s);
	};
}