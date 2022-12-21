#include <iostream>
#include "Stack.h"
#include "Stack.cpp"

int main()
{
	Ltl::Stack<int> stack(20);

	std::cout << "Welcome to the Little Template Library! \n" << std::endl;
	
	std::cout << "Select an option" << std::endl;
	std::cout << "1. List" << std::endl;
	std::cout << "2. Queue" << std::endl;
	std::cout << "3. Stack" << std::endl;
	std::cout << "4. Array" << std::endl;
	std::cout << "5. Linked-List" << std::endl;
	std::cout << "6. Tree" << std::endl;


	int input;
	std::cin >> input;

	switch (input)
	{
	case 0:
		break;
	case 1:
		std::cout << "List" << std::endl;
		break;
	case 2:
		break;
	case 3:
		break;

	default:
		std::cout << "Error..." << std::endl;
		break;
	}

	
	std::cin >> input;
}