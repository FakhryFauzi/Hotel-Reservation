#pragma once

#include <vector>
#include "Room.hpp"
#include "Globals.hpp"
#include "Guest.hpp"
#include "Date.hpp"


//Forward Declaration
class Room;

class Reservation
{
public:
	Reservation();
	~Reservation();

	//Member Variables
	int BookingID;
	int HotelID;
	std::vector<Room*> BookedRooms;

	double Price;
	PaymentStatus StatusOfPayment;

	Room* RoomToBook;
	Date InDate;
	Date OutDate;
	Guest NewGest;
	int RoomNumber;
	RoomType Type;
	int NumGuests;
	std::string BookingTime;


};

