#include "Guest.hpp"

Guest::Guest() {

}

Guest::Guest(
	int _GuestID
	, const std::string _Name
	, Date _DOB
	, const std::string _Email
	, const std::string _Sex
	, bool _IsAdult) :
	GuestID(_GuestID)
	, Name(_Name)
	, DateOfBirth(_DOB)
	, Email(_Email)
	, Sex(_Sex)
	, IsAdult(_IsAdult)
{

}

Guest::~Guest()
{

}
