#pragma once

#include<map>
#include<vector>
#include"Globals.hpp"
#include"Reservation.hpp"
#include"Guest.hpp"
#include"Date.hpp"

class Room
{
public:
	Room();
	virtual  ~Room();

	//Function to book a room
	Reservation* BookFor(
		Date Dates[]
		, Guest RegisteredGuest
		, int RmNumber
		, RoomType TypeOfRoom
		, int TotalGuests
		, RoomStatus StatusOfRoom);

	//Getters for Room Data
	int GetRoomNumber() const { return RoomNumber; }
	RoomType GetRoomType() const { return Type; }
	int GetNumGuests() const { return NumGuests; }

	//Setters for room data
	void SetRoomNumber(int Number) { RoomNumber = Number; }
	void SetRoomType(RoomType _Type) { Type = _Type; }
	void SetRoomStatus(RoomStatus _Status) { Status = _Status; }
	void SetNumGuests(int _NumGuests) { NumGuests = _NumGuests; }

	//Helper function to know we booked this room
	std::string IsRoomBooked() const;

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

