#include <iostream>

int main()
{
	//A while loop to repeat the menu
	while (true)
	{
		system("cls");
		std::cout << "Welcome to the Little Template Library!" << std::endl;

		//Listing out the data structures we have
		std::cout << std::endl;
		std::cout << "1. List" << std::endl;
		std::cout << "2. Queue" << std::endl;
		std::cout << "3. Stack" << std::endl;
		std::cout << "4. Array" << std::endl;
		std::cout << "6. Tree" << std::endl;
		std::cout << "0. Exit" << std::endl;

		//Selecting an input
		std::string input;
		std::cout << "Select an option: ";
		std::cin >> input;

		if (input == "0")//Exit
		{
			std::cout << "\nExiting the Little Template Library" << std::endl;
			system("pause");
			break;
		}
		if (input == "1") //Lists
		{
			system("cls");

			//Write Something about lists
			std::cout << "List\n" << std::endl;

			std::cout << "1. Size" << std::endl;
			std::cout << "2. Empty" << std::endl;
			std::cout << "3. Push" << std::endl;
			std::cout << "4. Print" << std::endl;

			std::string option;
			std::cin >> option;

			if (option == "1")
			{
				//TODO: Check the size of our list
				std::cout << "\nThe number of elements in our list is: ";
			}
			else if (option == "2")
			{
				//TODO: Check if list is empty
				std::cout << "\nList is empty: ";
			}
			else if (option == "3")
			{
				//TODO: Add an element to our list
				std::cout << "An element was added to our list" << std::endl;
			}
			else if (option == "4")
			{
				//TODO: Print all the elements in our list
			}
			else
			{
				//TODO: Error... Invalid Selection
				std::cout << "Error, Invalid Selection" << std::endl;
			}

			system("pause");
		}
		else if (input == "2")//Queue
		{
			system("cls");

			//Write Something about queue
			std::cout << "Queue\n" << std::endl;

			std::cout << "1. Size" << std::endl;
			std::cout << "2. Empty" << std::endl;
			std::cout << "3. Push" << std::endl;
			std::cout << "4. Pop" << std::endl;
			std::cout << "5. Print" << std::endl;

			std::string option;
			std::cin >> option;

			if (option == "1")
			{
				//TODO: Check the size of our queue
				std::cout << "\nThe number of elements in our queue is: ";
			}
			else if (option == "2")
			{
				//TODO: Check if queue is empty
				std::cout << "\nThe Queue is empty: ";
			}
			else if (option == "3")
			{
				//TODO: Add an element to our queue
				std::cout << "An element was added to our queue" << std::endl;
			}
			else if (option == "3")
			{
				//TODO: Remove an element from our queue
				std::cout << "An element was removed from our queue" << std::endl;
			}
			else if (option == "5")
			{
				//TODO: Print all the elements in our list
			}
			else
			{
				//TODO: Error... Invalid Selection
				std::cout << "Error, Invalid Selection" << std::endl;
			}

			system("pause");
		}
		else if (input == "3")//Stack
		{
			system("cls");

			//Write Something about stack
			std::cout << "Stack\n" << std::endl;

			std::cout << "1. Size" << std::endl;
			std::cout << "2. Empty" << std::endl;
			std::cout << "3. Push" << std::endl;
			std::cout << "4. Pop" << std::endl;
			std::cout << "5. Print" << std::endl;

			std::string option;
			std::cin >> option;

			if (option == "1")
			{
				//TODO: Check the size of our queue
				std::cout << "\nThe number of elements in our stack is: ";
			}
			else if (option == "2")
			{
				//TODO: Check if stack is empty
				std::cout << "\nThe Stack is empty: ";
			}
			else if (option == "3")
			{
				//TODO: Add an element to our stack
				std::cout << "An element was added to our stack" << std::endl;
			}
			else if (option == "3")
			{
				//TODO: Remove an element from our stack
				std::cout << "An element was removed from our stcak" << std::endl;
			}
			else if (option == "5")
			{
				//TODO: Print all the elements in our stack
			}
			else
			{
				//TODO: Error... Invalid Selection
				std::cout << "Error, Invalid Selection" << std::endl;
			}

			system("pause");
		}
		else
		{
			std::cout << "Error ... \nEnter a correct Input String\n\n";
		}
	}
}