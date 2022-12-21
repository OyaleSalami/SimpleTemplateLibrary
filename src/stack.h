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
		/// <returns> The top element of the stack</returns>
		T top();

		/// <returns> The bottom element of the stack</returns>
		T bottom();
		#pragma endregion Functions for accessing the elements of the container

		#pragma region Member Functions
		/// <returns>Number of elements in the container</returns>
		int size();

		/// <returns>True if the stack is empty, false otherwise</returns>
		bool empty();
		#pragma endregion 

		#pragma region Modifier Functions
		/// <summary>Returns And Removes the top element</summary>
		T pop();
		
		/// <summary>Inserts an element in-place at the top</summary>
		void push(const T value);

		/// <summary> Constructs an element in-place at the top</summary>
		void emplace(const T value);

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

	private:
		/// <summary>The underlying array(For handling memory)</summary>
		T body[];

		/// <summary>Size of the array(Max No of elements the array can hold)</summary>
		int maxSize;

		/// <summary>Current Size of the stack</summary>
		int len; 
	};
	
}