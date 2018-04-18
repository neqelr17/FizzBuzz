#include "stdafx.h"
#include "CFizzbuzz.h"

#include <iostream>
#include <string>
#include <sstream>


// Default constructor
CFizzbuzz::CFizzbuzz()
{ }


CFizzbuzz::~CFizzbuzz()
{ }


std::string CFizzbuzz::GetName()
{
	return name_;
}

void CFizzbuzz::SetName(std::string name)
{
	name_ = name;
}

void CFizzbuzz::GetNameFromUser()
{
	bool is_valid = false;
	std::string name = "";
	while (!is_valid)
	{
		std::cout << "Please enter a name: ";
		std::cin >> name;

		if (std::cin.fail())
		{
			std::cout << "Invalid input!\n";
			std::cin.clear();
			std::cin.ignore(999, '\n');
		}
		else
		{
			is_valid = true;
			name_ = name;
		}
	}
}

int CFizzbuzz::GetNumber()
{
	return number_;
}

void CFizzbuzz::GetNumberFromUser()
{
	bool is_valid = false;
	int number = 0;
	while (!is_valid)
	{
		std::cout << "Please enter a positive integer: ";
		std::cin >> number;

		if (std::cin.fail())
		{
			std::cout << "Invalid input!\n";
			std::cin.clear();
			std::cin.ignore(999, '\n');
		}
		else
		{
			is_valid = true;
			number_ = number;
		}
	}
}

void CFizzbuzz::SetNumber(int number)
{
	number_ = number;
}

void CFizzbuzz::GetFizzbuzz()
{
	GetNumberFromUser();
	if (number_ == 0)
	{
		is_record_ = false;
	}
	else
	{
		CalculateFizzBuzz_();
		GetNameFromUser();
	}
	is_record_ = true;
}

void CFizzbuzz::PutFizzbuzz()
{
}

bool CFizzbuzz::GetRecord()
{
	return is_record_;
}

void CFizzbuzz::CalculateFizzBuzz_()
{
	if (number_ % 3 == 0 && number_ % 5 == 0)
	{
		fizz_ = "FizzBuzz";
	}
	else if (number_ % 3 == 0)
	{
		fizz_ = "Fizz";
	}
	else if (number_ % 5 == 0)
	{
		fizz_ = "Buzz";
	}

	fizz_ = "\"Not Divisible By 3 or 5.\"";
}
