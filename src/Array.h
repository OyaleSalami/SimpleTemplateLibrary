#pragma once

namespace Ltl
{
	template<class T>
	class Array
	{
	public:
		//Constructor
		Array() {}
		Array(const int& size);

		//Destructor
		~Array() {}

		#pragma region Access Functions
		/// <returns>Element from the specified location</returns>
		T operator[](const int& position);
		/// <returns>Returns the first element of the array</returns>
		T front();
		/// <returns>Returns the first element of the array</returns>
		T back();
		#pragma endregion Access the member elements of the container
	

	};
}