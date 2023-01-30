#pragma once

namespace Stl
{
	template <class T>
	class Container
	{
	public:
		#pragma region Constructors
		Container() {}

		Container(const int& size)
		{
			len = 0;
			max = size;
			body = new T[size];
		}

		void operator=(const Container& c)
		{
			delete[](body);

			len = c.len;
			max = c.max;
			body = c.body;
		}

		#pragma endregion Called when the container is created/reassigned

		#pragma region Destructors
		~Container() 
		{
			len = 0;
			max = 0;
			delete[](body);
		}
		#pragma endregion Called when the container is deleted

		#pragma region Operators
		T operator[](const int& index)
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

		/// <summary>Delete an item from the container</summary>
		/// <param name="index">Index of the item to delete</param>
		void remove(const int& index)
		{
			int j = index + 1;
			for (int i = index; i < len; i++)
			{
				body[i] = body[j];
				j++;
			}
		}

		/// <summary>Insert an item into the container</summary>
		/// <param name="index">Index at which to insert the item</param>
		/// <param name="value">Value of the item to be inserted</param>
		void insert(const int& index, const T value)
		{
			if (len + 1 > max)
			{
				//Throw exception(no space/overflow)
			}
			else
			{
				for (int i = len - 1; i >= index; i--)
				{
					body[i+1] = body[i];
				}

				body[index] = value;
			}
		}

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

		#pragma endregion Operate on the elements of the container

	private:
		T* body = nullptr; //Ponter to container memory location
		int len = 0;	   //Number of elements in the container
		int max = 0;	   //Max number of lements allowed in the container
	};
}
