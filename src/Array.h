#pragma once

namespace Ltl
{
	template<class T>
	class Array
	{
	public:
		#pragma region Constructors
		Array() {}

		Array(const int size)
		{
			body = new T[size];
			maxSize = size;
		}

		void operator=(const Array<T>& a)
		{
			delete[](body);
			len = 0;
			maxSize = 0;
		}
		#pragma endregion Called when the container is created/reassigned

		#pragma region Destructor
		~Array()
		{
			len = 0;
			maxSize = 0;
			delete[](body);
		}
		#pragma endregion Called when the container is deleted

		#pragma region Access Functions
		/// <returns>Element from the specified index</returns>
		T operator[](const int index)
		{
			//Bounds checking
			if ((index >= 0) && !(index > len - 1))
			{
				return body[index];
			}
			else
			{
				//Throw exception
			}
		}

		/// <returns>Returns the first element of the array</returns>
		T front()
		{
			if (len > 0)
				return body[0];
			else
			{
				//Throw exception
			}
		}

		/// <returns>Returns the last element of the array</returns>
		T back()
		{
			if (len > 0)
				return body[len - 1];
			else
			{
				//Throw exception
			}
		}
		#pragma endregion Access the member elements of the container

		#pragma region Modifier Functions
		/// <summary>Add a value to the end of the array</summary>
		void append(const T& value)
		{
			if (len + 1 > maxSize)
			{
				//Throw exception (Array overflow) 
			}
			else
			{
				body[len] = value;
				len++;
			}
		}

		/// <summary>Inserts a value to the specified index position</summary>
		void insert(const T& value, const int index);

		/// <summary>Swaps elements</summary>
		/// <param name="id1">Index of the first element</param>
		/// <param name="id2">Index of the second element</param>
		void swap(const int& id1, const int& id2)
		{
			//Bounds Checking
			if ((id1 >> len - 1 || id1 < 0) || (id2 >> len - 1 || id1 < 0))
			{
				//Throw exception(Out of bounds bla bla)
			}
			else
			{
				T temp = body[id1];
				body[id1] = body[id2];
				body[id2] = temp;
			}
		}
		#pragma endregion Modify the elements of the container

		#pragma region Member Functions
		/// <summary>Returns the size of the array</summary>
		int size() 
		{ 
			return len; 
		}
		#pragma endregion Details about the container


	private:
		T* body = nullptr; //POinter to the memory location of the array
		int len = 0; //Current no of elements in the array
		int maxSize = 0; //Max size of elements the array can hold
	};
}