#pragma once

namespace Ltl
{
	class Stack
	{
	public:
		//Constructors
		Stack(){}
		void operator=(Stack s);

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
		void emplace();
		void push();
		void swap();

		//Operator Overloading
		bool operator==(Stack s);
		bool operator<=(Stack s);
		bool operator>=(Stack s);
		bool operator<(Stack s);
		bool operator>(Stack s);
		bool operator!=(Stack s);
	};
}