#pragma once

namespace Ltl
{
	class List
	{
	public:
		//Constructor
		List(){}

		//Destructor
		~List(){}

		//Access Functions
		void front();
		void back();

		//Member Functions
		int size();
		bool empty();

		//Modifier Functions
		void insert();
		void clear();
		void resize();
		void swap();
		void emplace_back();
		void emplace_front();
		void push_back();
		void push_front();

		//Operator Overloading
		bool operator==(List s);
		bool operator<=(List s);
		bool operator>=(List s);
		bool operator<(List s);
		bool operator>(List s);
		bool operator!=(List s);
	};
}