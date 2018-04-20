#include "stdafx.h"
#include "Employee.h"

#include <iostream>
#include <memory>
#include <string>

Employee::Employee()
{
}

Employee::Employee(std::string first, std::string last) : first_name_(first), last_name_(last)
{
}

Employee::Employee(std::string first, std::string last, std::string manager) : first_name_(first), last_name_(last), manager_(manager)
{
}


Employee::~Employee()
{
}

std::string Employee::GetFullName()
{
	return first_name_ + " " + last_name_;
}

std::string Employee::GetFirstName()
{
	return first_name_;
}

std::string Employee::GetLastName()
{
	return last_name_;
}

std::string Employee::GetManager()
{
	return manager_;
}

void Employee::SetFirstNameByUser()
{
	std::cout << "Please enter Employee's Name: ";
	std::getline(std::cin, first_name_);

}

void Employee::SetManagerByUser()
{
	std::cout << "Please enter Employee's Managers Name: ";
	std::getline(std::cin, manager_);
}
