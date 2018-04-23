#include "stdafx.h"
#include "Employee.h"

#include <iostream>
#include <memory>
#include <string>

Employee::Employee()
{
}


//
// If true is passed in the consructor the user will be prompted to provide data for the Employee object.
Employee::Employee(bool get_from_user)
{
	if (get_from_user)
	{
		SetFirstNameByUser();
		SetManagerByUser();
	}
}


//
// Constructor to add hard coded employees
Employee::Employee(std::string first, std::string manager) : first_name_(first), manager_(manager)
{
}


Employee::~Employee()
{
}


//
// Getter for first_name_
std::string Employee::GetFirstName()
{
	return first_name_;
}


//
// Getter for manager_
std::string Employee::GetManager()
{
	return manager_;
}


//
// Ask console user for First Name
void Employee::SetFirstNameByUser()
{
	std::cout << "Please enter Employee's First Name: ";
	std::getline(std::cin, first_name_);
}


//
// Ask console user for Manager Name
void Employee::SetManagerByUser()
{
	std::cout << "Please enter Employee's Managers Name (If employee is a manager just press enter.):";
	std::getline(std::cin, manager_);
}
