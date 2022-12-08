#pragma once

namespace Ltl
{
	class Queue
	{
	public:
		//Constructors
		Queue() {}
		void operator=(Queue s);

		//Destructors
		~Queue() {}

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
		bool operator==(Queue s);
		bool operator<=(Queue s);
		bool operator>=(Queue s);
		bool operator<(Queue s);
		bool operator>(Queue s);
		bool operator!=(Queue s);
	};
}