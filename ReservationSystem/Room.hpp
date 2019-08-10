#pragma once

#include<map>
#include<vector>
#include"Globals.hpp"
#include"Reservation.hpp"

class Room
{
public:
	Room();
	virtual  ~Room();

protected:
	int RoomNumber;
	int FloorNumber;

	std::vector<BedType> Beds;

	RoomType Type;
	RoomStatus Status;
	int NumGuests;
	int MaxGuests;
	int NumAdults;
	int NumChildren;

	Reservation* NewReservation;
	std::map<Date, std::string> ReservedDates;
};

