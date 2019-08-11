#include "Room.hpp"

Room::Room()
{
	//object to initialize
}

Room::~Room()
{
	//object to delete
}

Reservation* Room::BookFor(
	Date Dates[]
	, Guest RegisteredGuest
	, int RmNumber
	, RoomType TypeOfRoom
	, int TotalGuests
	, RoomStatus StatusOfRoom) 
{
	
}

std::string Room::IsRoomBooked() const
{
	bool Result = false;

	if (Status == RoomStatus::OCCUPIED)
		Result = true;
	else
		Result = false;

	return((Result) ? "YES" : "NO");
}