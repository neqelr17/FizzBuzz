#pragma once

#include <string>

class Employee
{
public:
	Employee();
	Employee(std::string first, std::string last);
	Employee(std::string first, std::string last, std::string manager);
	~Employee();

	std::string GetFullName();
	std::string GetFirstName();
	std::string GetLastName();
	std::string GetManager();

	void SetFirstNameByUser();
	void SetManagerByUser();

private:
	std::string first_name_ = "";
	std::string last_name_ = "";
	std::string manager_ = "";
};

