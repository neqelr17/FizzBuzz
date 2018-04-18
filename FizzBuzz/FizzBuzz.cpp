// FizzBuzz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include "CFizzbuzz.h"


// Prototypes


int main()
{
	// Welcome Message
	std::cout << "Welcome to FizzBuzz!\n\n";

	CFizzbuzz fizz1 = CFizzbuzz();
	fizz1.GetFizzbuzz();
	std::cout << fizz1.GetName() << std::endl;

	//// Get list of numbers from user
	//std::vector<int> number_list = get_input();

	//// Display nubmers with FizzBuzz Identifier
	//display_fizzbuzz(number_list);

    return 0;
}


//void display_fizzbuzz(std::vector<int> &number_list)
//{
//	// Loop through vector
//	for (int i = 0; i < number_list.size(); i++)
//	{
//		// If the number is not divisible by 3 or 5 get new number from user.
//		// I added this to be compliant with the note under rule 3
//		while (!is_fizzbuzzable(number_list[i]))
//		{
//			std::cout <<number_list[i] << " is not divisible by 3 or 5!" << std::endl;
//			std::cout << "Please enter another number that is divisible by 3 or 5: ";
//			int temp = 0;
//			std::cin >> temp;
//			if (std::cin.fail())
//			{
//				std::cout << "Invalid input!" << std::endl;
//				std::cin.clear();
//				std::cin.ignore(999, '\n');
//			}
//			else
//			{
//				number_list[i] = temp;
//			}
//		}
//		// Output number with its string
//		std::cout << "Number: " << number_list[i] << " - " << get_fizz_buzz(number_list[i]) << std::endl;
//	}
//}


//
// Gets user input and returns a std::vector with the numbers.
//std::vector<int> get_input()
//{
//	std::vector<int> inputs;
//	std::string console_in;
//	int x = 0;
//
//	std::cout << "Please enter an array of positive integer(s). eg.(3,10,30): ";
//	std::getline(std::cin, console_in);
//	std::stringstream ss(console_in);
//
//	while (ss >> x)
//	{
//		inputs.push_back(x);
//
//		if (ss.peek() == ',' || ss.peek() == ' ')
//		{
//			ss.ignore();
//		}
//	}
//
//	return inputs;
//}