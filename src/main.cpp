#include <iostream>
#include "Queue.cpp"
#include "Stack.cpp"
#include <stdlib.h>

#ifdef _WIN32
#define clear() system("cls")
#else
#define clear() system("clear")
#endif

void pause()
{
	getchar();
	std::cout << "press any key to continue";
	getchar();
}

int main()
{
	Ltl::Queue<int> q(30);
	Ltl::Stack<int> s(30);

	// A while loop to repeat the menu
	while (true)
	{
		clear();
		std::cout << "Welcome to the Little Template Library!" << std::endl;

		// Listing out the data structures we have
		std::cout << std::endl;
		std::cout << "1. List" << std::endl;
		std::cout << "2. Queue" << std::endl;
		std::cout << "3. Stack" << std::endl;
		std::cout << "4. Array" << std::endl;
		std::cout << "6. Tree" << std::endl;
		std::cout << "0. Exit" << std::endl;

		// Selecting an input
		std::string input;
		std::cout << "Select an option: ";
		std::cin >> input;

		if (input == "0") // Exit
		{
			std::cout << "\nExiting the Little Template Library" << std::endl;
			pause();
			break;
		}
		if (input == "1") // Lists
		{
			clear();

			// Write Something about lists
			std::cout << "List\n"
					  << std::endl;

			std::cout << "1. Size" << std::endl;
			std::cout << "2. Empty" << std::endl;
			std::cout << "3. Push" << std::endl;
			std::cout << "4. Print" << std::endl;

			std::string option;
			std::cin >> option;

			if (option == "1")
			{
				// TODO: Check the size of our list
				std::cout << "\nThe number of elements in our stack is: " << s.MaxSize() << std::endl;

				pause();
			}
			else if (option == "2")
			{
				// TODO: Check if list is empty
				std::cout << "\nThe List is empty" << std::endl;
				s.empty();
				pause();
			}
			else if (option == "3")
			{
				// TODO: Add an element to our list
				int elementToAdd;
				// TODO: Add an element to our queue
				std::cout << "Integer to add: ";
				std::cin >> elementToAdd;

				s.push(elementToAdd);
				std::cout << elementToAdd << " was added to your list" << std::endl;
				pause();
			}
			else if (option == "4")
			{
				// TODO: Print all the elements in our list
			}
			else
			{
				// TODO: Error... Invalid Selection
				std::cout << "Error, Invalid Selection" << std::endl;
			}
		}
		else if (input == "2") // Queue
		{
			clear();

			// Write Something about queue
			std::cout << "Queue\n"
					  << std::endl;

			std::cout << "1. Size" << std::endl;
			std::cout << "2. Empty" << std::endl;
			std::cout << "3. Push" << std::endl;
			std::cout << "4. Pop" << std::endl;

			std::string option;
			std::cin >> option;

			if (option == "1")
			{
				// TODO: Check the size of our queue
				std::cout << "\nThe number of elements in our queue is: " << q.MaxSize() << std::endl;

				pause();
			}
			else if (option == "2")
			{
				// TODO: Check if queue is empty
				std::cout << "\nThe Queue is empty" << std::endl;
				q.empty();
				pause();
			}
			else if (option == "3")
			{
				int elementToAdd;
				// TODO: Add an element to our queue
				std::cout << "Integer to add: ";
				std::cin >> elementToAdd;

				q.push(elementToAdd);
				std::cout << elementToAdd << " was added to your queue" << std::endl;
				pause();
			}
			else if (option == "4")
			{
				// TODO: Remove an element from our queue
				std::cout << q.pop() << " was removed from your queue" << std::endl;
				pause();
			}
			else if (option == "5")
			{
				// TODO: Print all the elements in our list
			}
			else
			{
				// TODO: Error... Invalid Selection
				std::cout << "Error, Invalid Selection" << std::endl;
			}
		}
		else if (input == "3") // Stack
		{
			clear();

			// Write Something about stack
			std::cout << "Stack\n"
					  << std::endl;

			std::cout << "1. Size" << std::endl;
			std::cout << "2. Empty" << std::endl;
			std::cout << "3. Push" << std::endl;
			std::cout << "4. Pop" << std::endl;
			std::cout << "5. Print" << std::endl;

			std::string option;
			std::cin >> option;

			if (option == "1")
			{
				// TODO: Check the size of our queue
				std::cout << "\nThe number of elements in our stack is: ";
			}
			else if (option == "2")
			{
				// TODO: Check if stack is empty
				std::cout << "\nThe Stack is empty: ";
			}
			else if (option == "3")
			{
				// TODO: Add an element to our stack
				std::cout << "An element was added to our stack" << std::endl;
			}
			else if (option == "3")
			{
				// TODO: Remove an element from our stack
				std::cout << "An element was removed from our stcak" << std::endl;
			}
			else if (option == "5")
			{
				// TODO: Print all the elements in our stack
			}
			else
			{
				// TODO: Error... Invalid Selection
				std::cout << "Error, Invalid Selection" << std::endl;
			}

			getchar();
		}
		else
		{
			std::cout << "Error ... \nEnter a correct Input String\n\n";
		}
	}
}