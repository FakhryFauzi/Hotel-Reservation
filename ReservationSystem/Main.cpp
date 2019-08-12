#include <iostream>
#include "Date.hpp"
#include "Guest.hpp"
#include "Admin.hpp"

//main function here


int main(int argc, char** argv) {

	//what dates are we staying for?
	Date CheckIn = Date(Month::June(), Day::Thirteenth(), Year::CurrentYear());
	Date CheckOut = Date(Month::June(), Day::Fifteenth(), Year::CurrentYear());

	//Create an array for our dates and add checkin/check out dates to it
	Date Dates[2] = { CheckIn,CheckOut };

	//Setup a guest
	Guest NewGuest = Guest(
		123456									//Guest ID
		, "Fakhry Fauzi"						//Guest Name
		, Date(12, 31, 1992)		//Date of Birth
		, "Fakhry92@yahoo.com"					//Email
		, "Male"								//Sex
		, true);								//Adult?

	//Have the desk clerk book a hotel room for the given dates!
	//We will call "BookRoomFor" in Admin Class
	Admin DeskClerk;
	DeskClerk.BookRoomFor(Dates, NewGuest, DeskClerk.Rooms.at(0), 1);

	//Print "YES" if room was booked or "NO" if  it was not
	std::cout << DeskClerk.Rooms.at(0).IsRoomBooked() << std::endl << std::endl;

	return 0;
}