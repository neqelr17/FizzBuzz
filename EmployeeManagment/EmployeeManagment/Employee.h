#pragma once

#include <string>

class Employee
{
public:
	Employee();
	Employee(bool get_from_user);
	Employee(std::string first, std::string manager);
	~Employee();

	std::string GetFirstName();
	std::string GetManager();

	void SetFirstNameByUser();
	void SetManagerByUser();

private:
	// Changed the names of the requrement values to match the Google C++ style guide that I am using.
	std::string first_name_ = ""; // Name
	std::string manager_ = "";    // ReportTo
};

