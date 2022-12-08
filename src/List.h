#pragma once

namespace Ltl
{
	template <class T>
	class List
	{
	public:
		//Constructor
		List<T>(){}
		List<T>(const int& size);
		void operator=(const List<T>& s);

		//Destructor
		~List();

		//Access Functions
		T front();
		T back();

		//Member Functions
		int size();
		bool empty();

		//Modifier Functions
		void insert(const T& value, const int& position);
		void clear();
		void resize(const int& size);
		void swap();
		void emplace_back(const T& value);
		void emplace_front(const T& value);
		void push_back(const T& value);
		void push_front(const T& value);
		void pop_back();
		void pop_front();

		//Operations
		List<T> merge(List<T> s);
		void sort();

		//Operator Overloading
		bool operator==(List<T>& s);
		bool operator<=(List<T>& s);
		bool operator>=(List<T>& s);
		bool operator<(List<T>& s);
		bool operator>(List<T>& s);
		bool operator!=(List<T>& s);
	};
}