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

		#pragma region Access Functions
		/// <returns>The first element in the list</returns>
		T front();
		/// <returns>The last element in the list</returns>
		T back();
		#pragma endregion Functions for accessing the elements of the container

		#pragma region Member Functions
		/// <returns>The size of the container</returns>
		int size();
		/// <returns>True if the container is empty, false otherwise</returns>
		bool empty();
		#pragma endregion 

		#pragma region Modifier Functions
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
		#pragma endregion Modifies the container elements
		
		#pragma region Operations
		List<T> merge(List<T> s);
		void sort();
		#pragma endregion Operations on the container class

		#pragma region Operator Overload
		bool operator==(List<T>& s);
		bool operator<=(List<T>& s);
		bool operator>=(List<T>& s);
		bool operator<(List<T>& s);
		bool operator>(List<T>& s);
		bool operator!=(List<T>& s);
		#pragma endregion Overloading Functions
	};
}