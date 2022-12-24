#include <iostream>
#include "Stack.h"
#include "Stack.cpp"

int main()
{
	std::cout << "Welcome to the Little Template Library! \n" << std::endl;
	Ltl::Stack<int> stack(20);

	std::string input;

	while (true)
	{
		std::cout << "1. List" << std::endl;
		std::cout << "2. Queue" << std::endl;
		std::cout << "3. Stack" << std::endl;
		std::cout << "4. Array" << std::endl;
		std::cout << "5. Linked List" << std::endl;
		std::cout << "6. Tree" << std::endl;

		std::cout << "Select your option: ";
	
		std::cin >> input;

		if (input == "0")
		{
			std::cout << input << std::endl;
		}
		else if (input == "1")
		{
			std::cout << input << std::endl;
		}
		else
		{
			std::cout << "Error ... \nEnter a correct Input String\n\n";
		}

		std::cin.get();
	}
}