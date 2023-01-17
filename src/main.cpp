#include <iostream>
#include <stdlib.h>
#include "Queue.cpp"
#include "Stack.cpp"

#ifdef _WIN32
#define clear() system("cls")
#else
#define clear() system("clear")
#endif

void pause()
{
	getchar();
	std::cout << "\nPress any key to continue" << std::endl;
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
			std::cout << "List"<< std::endl;
			std::cout << "1. Size" << std::endl;
			std::cout << "2. Empty" << std::endl;
			std::cout << "3. Push" << std::endl;

			std::string option;
			std::cin >> option;

			if (option == "1") //Size
			{
				std::cout << "The number of elements in our stack is: " << s.size() << std::endl;
			}
			else if (option == "2") //Empty
			{
				if (s.empty())
				{
					std::cout << "The List is empty" << std::endl;
				}
				else
				{
					std::cout << "The List is not empty" << std::endl;
				}
			}
			else if (option == "3") //Push
			{
				int elementToAdd;
				std::cout << "Element to add: ";
				std::cin >> elementToAdd;

				s.push(elementToAdd);
				std::cout << elementToAdd << " was added to your list" << std::endl;
			}
			else
			{
				std::cerr << "Error, Invalid Selection" << std::endl;
			}
		}
		else if (input == "2") // Queue
		{
			clear();
			std::cout << "Queue"<< std::endl;
			std::cout << "1. Size" << std::endl;
			std::cout << "2. Empty" << std::endl;
			std::cout << "3. Push" << std::endl;
			std::cout << "4. Pop" << std::endl;

			std::string option;
			std::cin >> option;

			if (option == "1")//Size
			{
				std::cout << "The number of elements in our queue is: " << q.size() << std::endl;
			}
			else if (option == "2")//Empty
			{
				if (q.empty())
				{
					std::cout << "The Queue is empty" << std::endl;
				}
				else
				{
					std::cout << "The Queue is empty" << std::endl;
				}
			}
			else if (option == "3")//Push
			{
				int elementToAdd;
				std::cout << "Element to add: ";
				std::cin >> elementToAdd;

				q.push(elementToAdd);
				std::cout << elementToAdd << " was added to your queue" << std::endl;
			}
			else if (option == "4")//Pop
			{
				std::cout << q.pop() << " was removed from your queue" << std::endl;
			}
			else
			{
				std::cerr << "Error, Invalid Selection" << std::endl;
			}
		}
		else if (input == "3") // Stack
		{
			clear();
			std::cout << "Stack "<< std::endl;
			std::cout << "1. Size" << std::endl;
			std::cout << "2. Empty" << std::endl;
			std::cout << "3. Push" << std::endl;
			std::cout << "4. Pop" << std::endl;

			std::string option;
			std::cin >> option;

			if (option == "1")//Size
			{
				std::cout << "The number of elements in our stack is: " << s.size() << std::endl;
			}
			else if (option == "2")//Empty
			{
				if (s.empty())
				{
					std::cout << "The Stack is empty: ";
				}
				else
				{
					std::cout << "The Stack is not empty: ";
				}
			}
			else if (option == "3")//Push
			{
				int elementToAdd;
				std::cout << "Element to add: ";
				std::cin >> elementToAdd;

				s.push(elementToAdd);
				std::cout << elementToAdd << "An element was added to our stack" << std::endl;
			}
			else if (option == "4")//Pop
			{
				std::cout << s.pop() << " was removed from our stack" << std::endl;
			}
			else
			{
				std::cerr << "Error, Invalid Selection" << std::endl;
			}
		}
		else
		{
			std::cerr << "Error ... \nEnter a correct Input String\n\n";
		}
		pause();
	}
}