#pragma once

namespace Ltl
{
	template<class T>
	class Array
	{
	public:
		//Constructor
		Array() {}
		Array(const int size);
		void operator=(const Array<T>& a);

		//Destructor
		~Array();

		#pragma region Access Functions
		/// <returns>Element from the specified index</returns>
		T operator[](const int index);
		/// <returns>Returns the first element of the array</returns>
		T front();
		/// <returns>Returns the first element of the array</returns>
		T back();
		#pragma endregion Access the member elements of the container
	
		#pragma region Modifier Functions
		/// <summary>Add a value to the end of the array</summary>
		void append(const T& value);

		/// <summary>Inserts a value to the specified index position</summary>
		void insert(const T& value, const int index);
		#pragma endregion Modify the elements of the container

		#pragma region Member Functions
		/// <summary>Returns the size of the array</summary>
		int size();
		#pragma endregion 


	private:
		T* body = nullptr;
		int len = 0;
		int maxSize = 0;
	};
}