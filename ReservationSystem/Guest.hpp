#pragma once

#include <string>
#include "Date.hpp"
class Guest
{
public:
	Guest();
	~Guest();

private:
	//Member Variable
	int GuestID;
	std::string Name;
	std::string Email;
	Date DateOfBirth;
	std::string Sex;
	bool IsAdult;

};

