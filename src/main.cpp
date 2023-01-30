#include <iostream>
#include <stdlib.h>
#include "Queue.h"
#include "List.cpp"
#include "Stack.h"
#include "Util.h"
#include "Array.h"

int main()
{
	Stl::Queue<int> q(30);
	Stl::Stack<int> s(30);
	Stl::Array<int> a(30);
	Stl::LinkedList<int> l;

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
		std::cout << "5. Tree" << std::endl;
		std::cout << "6. Linear Search" << std::endl;
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
				if (q.isEmpty())
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
		else if (input == "4")
		{
			clear();
			std::cout << "Array" << std::endl;
			std::cout << "1. Size" << std::endl;
			std::cout << "2. Append" << std::endl;

			std::string option;
			std::cin >> option;

			if (option == "1")//Size
			{
				std::cout << "The number of elements in our stack is: " << a.size() << std::endl;
			}
			else if (option == "2")//Append
			{
				int elementToAdd;
				std::cout << "Element to add: ";
				std::cin >> elementToAdd;

				a.append(elementToAdd);
				std::cout << elementToAdd << " was added to our array" << std::endl;
			}
			else
			{
				std::cerr << "Error ... \nEnter a correct Input String\n\n";
			}
		}
		else if (input == "6")
		{
			clear();
			std::cout << "Linear Search " << std::endl;

			int elementToSearch;
			std::cout << "Element to search: ";
			std::cin >> elementToSearch;

			if (Stl::LinearSearch(a, elementToSearch) == -1)
			{
				std::cout << "Element not found" << std::endl;
			}
			else
			{
				std::cout << "Index of the search: " << Stl::LinearSearch(a, elementToSearch) << std::endl;
			}
		}
		else
		{
			std::cerr << "Error ... \nEnter a correct Input String\n\n";
		}
		pause();
	}
	return 0;
}