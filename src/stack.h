#pragma once

namespace Ltl
{
	/// <typeparam name="T">Type of the container</typeparam>
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

		#pragma region Access Functions
		/// <returns> The first element in the stack</returns>
		T top();

		/// <returns> The last element in the stack</returns>
		T bottom();
		#pragma endregion Functions for accessing the elements of the container

		#pragma region Member Functions
		/// <returns>Number of elements in the container</returns>
		int size();

		/// <returns>True if the compiler is empty, false otherwise</returns>
		bool empty();
		#pragma endregion 

		#pragma region Modifier Functions
		/// <summary> Removes and returns the top element </summary>
		T pop();

		/// <summary> Constructs an element in-place at the top</summary>
		void emplace(const T& value);

		/// <summary>Inserts an element in-place at the top</summary>
		void push();

		/// <summary>Swaps elements</summary>
		void swap();
		#pragma endregion Functions that modify the container

		#pragma region Operator Overload
		//Operator Overloading
		bool operator==(Stack<T>& s);
		bool operator<=(Stack<T>& s);
		bool operator>=(Stack<T>& s);
		bool operator<(Stack<T>& s);
		bool operator>(Stack<T>& s);
		bool operator!=(Stack<T>& s);
		#pragma endregion Overloading functions
	};
}