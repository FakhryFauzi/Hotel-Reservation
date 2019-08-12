#pragma once

#include <string>
#include "Date.hpp"
class Guest
{
public:

	//Constructor
	Guest();

	//Constructor: Six Arguments
	Guest(
		int _GuestID
		, const std::string& _Name
		, Date& _DOB
		, const std::string& _Email
		, const std::string& _Sex
		, bool _IsAdult
	);

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

