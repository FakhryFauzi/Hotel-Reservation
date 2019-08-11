#pragma once
#include "Hotel.hpp"
#include "Date.hpp"
#include "Globals.hpp"

//Forward Declaration
class Guest;
class Room;

class Admin :
	public Hotel
{
public :
	Admin();

	virtual ~Admin();

	//Function to book a room
	Reservation* BookRoomFor(Date Dates[], Guest RegisteredGuest, Room BookedRoom, int TotalGuest);

};

