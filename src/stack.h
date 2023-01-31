#pragma once

namespace Stl
{
	//Stack: LIFO(Last In First Out)
	/// <typeparam name="T">Type of the container</typeparam>
	template<class T>
	class Stack
	{
	public:
		#pragma region Constructors
		Stack<T>() {}

		Stack(const int& size)
		{
			body = new T[size];

			max = size; //Set the max size
			len = 0; //No elements in the stack(Hence 0)
		}

		void operator=(const Stack<T>& s)
		{
			//(Setting the pointer to that of the other stack)

			delete[] body;
			body = s.body;
			len = s.len;
			max = s.max;
		}
		#pragma endregion Called when the container is created/reassigned

		#pragma region Destructors
		~Stack()
		{
			len = 0;
			max = 0;
			delete[](body);
		}
		#pragma endregion Called when the container is deleted

		#pragma region Access Functions
		/// <returns> The top element of the stack</returns>
		T top()
		{
			//Upper bounds checking
			if (len > 0)
			{
				return body[len - 1]; //return the element at the top of the stack
			}
			else
			{
				//Throw an exception
			}
		}

		/// <returns> The bottom element of the stack</returns>
		T bottom()
		{
			//Upper bounds checking
			if (len > 0)
			{
				return body[0];
			}
			else
			{
				//Throw an error exception
			}
		}
		#pragma endregion Functions for accessing the elements of the container

		#pragma region Member Functions
		/// <returns>Current number of elements in the container</returns>
		int size()
		{
			return len;
		}

		/// <returns>True if the stack is empty, false otherwise</returns>
		bool empty()
		{
			if (len > 0)
			{
				return false;
			}
			else
			{
				return true;
			}
		}
		#pragma endregion Details about the container

		#pragma region Modifier Functions
		/// <summary>Returns And Removes the top element</summary>
		T pop()
		{
			//Bounds Checking
			if (len > 0)
			{
				T topElement = top(); //Store out the top element
				len -= 1; //A logical delete(not an actual one)
				return topElement; //Return it
			}
			else
			{
				//Throw An Exception
			}
		}

		/// <summary>Inserts an element in-place at the top</summary>
		void push(const T value)
		{
			//Bounds Checking
			if (len + 1 > max)
			{
				//Throw an Exception (Stack Overflow Exception Literally)
			}
			else
			{
				body[len] = value;
				len += 1; //Because we added a new element
			}
		}
		#pragma endregion Functions that modify the container

	private:
		/// <summary>Pointer to the momory(For handling memory)</summary>
		T* body = nullptr;

		/// <summary>Size of the stack(Max elements the stack can hold)</summary>
		int max = 0;

		/// <summary>Current size of the stack</summary>
		int len = 0;
	};
	
}