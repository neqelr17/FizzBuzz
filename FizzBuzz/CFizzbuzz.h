#pragma once

#include <string>

class CFizzbuzz
{
public:
	CFizzbuzz();
	~CFizzbuzz();

	// Public Methods
	std::string GetName();
	void SetName(std::string name);
	void GetNameFromUser();

	int GetNumber();
	void GetNumberFromUser();
	void SetNumber(int number);

	void GetFizzbuzz();
	void PutFizzbuzz();
	bool GetRecord();

private:
	std::string fizz_ = " ";
	std::string name_ = " ";
	int number_ = 0;
	bool is_record_ = false;

	// Private Methods
	void CalculateFizzBuzz_();
};
