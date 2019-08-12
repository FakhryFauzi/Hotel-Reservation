#include "Admin.hpp"

Admin::Admin() 
{
	//Populate Hotel with 3 rooms
	Rooms.push_back(Room(241, RoomType::SINGLE));
	Rooms.push_back(Room(105, RoomType::DOUBLE));
	Rooms.push_back(Room(115, RoomType::SINGLE));
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