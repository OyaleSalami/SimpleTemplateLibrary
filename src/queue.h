#pragma once

namespace Ltl
{
	template <class T>
	class Queue
	{
	public:
		#pragma region Constructor
		Queue() {}

		Queue(const int& size)
		{
			body = new T[size]; //Assign from the heap

			max = size;		// Set the max size
			len = 0;		// No elements in the queue yet(Hence 0)
		}

		void operator=(const Queue& s)
		{
			//Simply set the pointer to point the other queue ...
			delete[](body);

			body = s.body;
			len = s.len;
			max = s.max;
		}
		#pragma endregion Called when the container is created/reassigned

		#pragma region Destructor
		~Queue()
		{
			len = 0;
			max = 0;
			delete[](body);
		}
		#pragma endregion Called when the container is deleted

		#pragma region Access Functions
		/// <returns>First element in the stack</returns>
		T top()
		{
			// Upper bounds checking
			if (len > 0)
			{
				return body[0]; // returns the first element
			}
			else
			{
				// Throw an exception
			}
			return T();
		}

		/// <returns>Last element in the stack</returns>
		T bottom()
		{
			// Upper bounds checking
			if (len > 0)
			{
				return body[len - 1]; // returns the first element
			}
			else
			{
				// Throw an exception
			}
		}
		#pragma endregion Accesss the elements of the container class

		#pragma region Member Functions
		/// <returns>Number of elements in the queue</returns>
		int size()
		{
			return len;
		}

		/// <returns>True if stack is empty, false otherwise</returns>
		bool isEmpty()
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

		/// <returns>Returns a pointer to the underlying memory</returns>
		T *getPtr();
		#pragma endregion Details about the container

		#pragma region Modifier Functions
		/// <summary>Appends an element to the end of the queue</summary>
		void push(const T value)
		{
			if (len + 1 > max)
			{
				// throw exception (Overflow)
				//std::cerr << "this queue is full" << std::endl;
			}
			else
			{
				body[len] = value;
				len++;
			}
		}

		/// <returns>Removes and returns the first element of the queue</returns>
		T pop()
		{
			if (isEmpty())
			{
				// throw exception (Underflow)
				//std::cerr << "this queue is empty" << std::endl;
			}
			else
			{
				return body[len];
				len--;
			}
		}
		#pragma endregion Modify the elements of the container

	private:
		/// <summary>Pointer to the memory address(For handling memory)</summary>
		T *body = nullptr;

		/// <summary>Size of the queue(Max elements the queue can hold)</summary>
		int max = 0;

		/// <summary>Current size of the queue</summary>
		int len = 0;
	};
}