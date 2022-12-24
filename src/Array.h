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
		/// <returns>Element from the specified location</returns>
		T operator[](const int& position);
		/// <returns>Returns the first element of the array</returns>
		T front();
		/// <returns>Returns the first element of the array</returns>
		T back();
		#pragma endregion Access the member elements of the container
	
	private:
		T* body = nullptr;
		int len = 0;
		int maxSize = 0;
	};
}