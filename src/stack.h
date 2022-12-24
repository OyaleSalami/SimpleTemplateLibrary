#pragma once

namespace Ltl
{
	//Stack: LIFO(Last In First Out)

	/// <typeparam name="T">Type of the container</typeparam>
	template<class T>
	class Stack
	{
	public:
		//Constructors
		Stack<T>(){}
		Stack<T>(const int& size);
		void operator=(const Stack<T>& s);

		//Destructor
		~Stack();

		#pragma region Access Functions
		/// <returns> The top element of the stack</returns>
		T top();

		/// <returns> The bottom element of the stack</returns>
		T bottom();
		#pragma endregion Functions for accessing the elements of the container

		#pragma region Member Functions
		/// <returns>Number of elements in the container</returns>
		int size();

		/// <returns>Max size of the container</returns>
		int MaxSize();

		/// <returns>True if the stack is empty, false otherwise</returns>
		bool empty();

		/// <returns>A pointer to the underlying memory location</returns>
		T* getPtr();
		#pragma endregion 

		#pragma region Modifier Functions
		/// <summary>Returns And Removes the top element</summary>
		T pop();
		
		/// <summary>Inserts an element in-place at the top</summary>
		void push(const T value);

		/// <summary>Swaps elements</summary>
		/// <param name="id1">Index of the first element</param>
		/// <param name="id2">Index of the second element</param>
		void swap(const int id1, const int id2);
		#pragma endregion Functions that modify the container

		#pragma region Operator Overload
		//Operator Overloading (Size Comparison Operators)
		bool operator==(Stack<T>& s);
		bool operator<=(Stack<T>& s);
		bool operator>=(Stack<T>& s);
		bool operator<(Stack<T>& s);
		bool operator>(Stack<T>& s);
		bool operator!=(Stack<T>& s);
		#pragma endregion Overloading functions

	private:
		/// <summary>Pointer to the momory(For handling memory)</summary>
		T* body = nullptr;

		/// <summary>Size of the stack(Max elements the stack can hold)</summary>
		int maxSize = 0;

		/// <summary>Current size of the stack</summary>
		int len = 0;
	};
	
}