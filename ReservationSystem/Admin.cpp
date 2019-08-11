#include "Admin.hpp"

Admin::Admin() 
{

}

Admin::~Admin()
{

}

Reservation* Admin::BookRoomFor(Date Dates[], Guest RegisteredGuest, Room BookedRoom, int TotalGuests)
{
	Reservation* Result = nullptr;

	for (auto& Room : Rooms)
	{
		Result = Room.BookFor(
			Dates
			, RegisteredGuest
			, BookedRoom.GetRoomNumber()
			, BookedRoom.GetRoomType()
			, TotalGuests
			, RoomStatus::OCCUPIED
		);
		
		if (Result != nullptr)
			return Result; //Success! The room was booked
	}

	return Result; //Failed to book room 
}