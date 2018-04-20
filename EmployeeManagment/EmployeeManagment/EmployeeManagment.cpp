// EmployeeManagment.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <map>
#include <string>
#include <vector>

#include "Employee.h"


int main()
{
	std::cout << "Welcome to the Employee Managment System!\n\n";

	std::vector<Employee> employees = std::vector<Employee>();

	employees.push_back(Employee("Brett", "Ward", "James"));
	employees.push_back(Employee("Jon", "Winn", "James"));
	employees.push_back(Employee("James", "Harper"));

	employees[0].SetFirstNameByUser();
	employees[0].SetManagerByUser();

	for (std::vector<Employee>::iterator it = employees.begin(); it != employees.end(); it++)
	{
		std::cout << "Manager: " << it->GetManager() << "Employee: " << it->GetFullName();
	}

    return 0;
}
