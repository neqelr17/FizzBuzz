// EmployeeManagment.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <map>
#include <string>
#include <vector>

#include "Employee.h"


// Prototypes
bool ValidateMenuChoice(int choice);
int GetMenuChoice(const size_t);
void DisplayMenu(const size_t);
void ShowEmployees(std::vector<Employee> &employees);
void ShowEmployeesByManager(std::vector<Employee> &employees);


int main()
{
	std::vector<Employee> employees = std::vector<Employee>();
	int choice = 0;
	bool keep_going = true;
	
	// Welcome Message
	std::cout << "Welcome to the Employee Managment System!\n\n";

	// Adding default employees to match the assignment requirements output.
	employees.push_back(Employee("Mike", ""));      // Manager
	employees.push_back(Employee("Ben", "Mike"));
	employees.push_back(Employee("Lisa", "Mike"));
	employees.push_back(Employee("Amy", ""));       // Manager
	employees.push_back(Employee("Brad", "Amy"));
	employees.push_back(Employee("Gene", "Amy"));

	
	// Runs until the user chooses to exit.
	while (keep_going)
	{
		choice = GetMenuChoice(employees.size());
		switch (choice)
		{
			case 1:
			{
				// Add more employees. Press enter on manager to assign as a manager.
				employees.push_back(Employee(true));
				break;
			}
			case 2:
			{
				// Another view of emplyees that I implemented.
				ShowEmployees(employees);
				break;
			}
			case 3:
			{
				// This is the assignment requirement for displaying.
				ShowEmployeesByManager(employees);
				break;
			}
			case 9:
			{
				std::cout << "Thanks for playing!\nPlease Come Again Soon!";
				keep_going = false;
				break;
			}
		}
	}

    return 0;
}


//
// Shows managers and the employees under them. (Assignment Display option)
void ShowEmployeesByManager(std::vector<Employee> & employees)
{
	std::cout << std::endl;

	// Iterate through employee vector and find managers.
	for (std::vector<Employee>::iterator cur_manager = employees.begin(); cur_manager != employees.end(); cur_manager++)
	{
		if (cur_manager->GetManager() == "")
		{
			std::cout << "Manager:\n     " << cur_manager->GetFirstName() << "\nShares Same Manager:\n     ";
			bool is_first = true;

			// Iterate through employee vector and find employees that match the current manager.
			for (std::vector<Employee>::iterator cur_employee = employees.begin(); cur_employee != employees.end(); cur_employee++)
			{
				if (cur_employee->GetManager() == cur_manager->GetFirstName())
				{
					if (is_first)
					{
						std::cout << cur_employee->GetFirstName();
						is_first = false;
					}
					else
					{
						std::cout << ", " << cur_employee->GetFirstName();
					}
				}
			}
			std::cout << "\n---------------------------------------------\n";
		}
	}
}


//
// Displays all of the managers and employees to the console
void ShowEmployees(std::vector<Employee> & employees)
{
	// Print out managers
	std::cout << "\nManagers:\n";
	for (std::vector<Employee>::iterator it = employees.begin(); it != employees.end(); it++)
	{
		if (it->GetManager() == "")
		{
			std::cout << "     " << it->GetFirstName() << std::endl;
		}
	}
	// Print out employees
	std::cout << "\nEmployees:\n";
	for (std::vector<Employee>::iterator it = employees.begin(); it != employees.end(); it++)
	{
		if (it->GetManager() != "")
		{
			std::cout << "     " << it->GetFirstName() << std::endl;
		}
	}
	std::cout << std::endl;
}


//
// Validate whether menu choice is a valid menu option.
bool ValidateMenuChoice(int choice)
{
	if (choice > 0 && choice < 4 || choice == 9)
	{
		return true;
	}
	return false;
}


//
// Gets valid menu choice from console
int GetMenuChoice(const size_t employee_count)
{
	int choice = 0;
	bool is_valid = false;

	// Loop until valid menu choice is given.
	while (!is_valid)
	{
		DisplayMenu(employee_count);
		std::cin >> choice;
		if (std::cin.fail())
		{
			std::cout << "Invalid Input!\n";
			std::cin.clear();
			std::cin.ignore(999, '\n');
		}
		else if (!ValidateMenuChoice(choice))
		{
			std::cout << "Invalid Menu Choice!\n";
		}
		else
		{
			is_valid = true;
			std::cin.ignore(999, '\n');
		}
	}

	return choice;
}


//
// Displays Menu to console
void DisplayMenu(const size_t employee_count)
{
	if (employee_count > 0)
	{
		std::cout << "\nMenu:    Total Employees: " << employee_count << std::endl;
	}
	else
	{
		std::cout << "\nMenu:\n";
	}
	std::cout << "------------------------------\n";
	std::cout << " 1) Add New Employee\n";
	std::cout << " 2) Display Employees\n";
	std::cout << " 3) Display Employees by Manager\n";
	std::cout << " 9) Exit\n";
	std::cout << "------------------------------\n";
	std::cout << "Enter menu option: ";
}
