#pragma once

#include <string>	// std::string
#include "Date.hpp"

class Guest
{

public:

	// Constructor
	Guest();

	// Constructor: Six Arguments
	Guest(
		int _GuestID					// Guest ID
		, const std::string _Name		// Guest Name
		, Date _DOB					// Date of Birth
		, const std::string _Email		// Email
		, const std::string _Sex		// Sex
		, bool _IsAdult);				// Is this guest an adult?

	// Destructor
	~Guest();

private:

	// Member Variables
	int GuestID;
	std::string Name;
	Date DateOfBirth;
	std::string Email;
	std::string Sex;
	bool IsAdult;
};

