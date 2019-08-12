#include "Room.hpp"


#include<iostream>
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
	//if there are no dates, then "early out" from the function
	if (!Dates[0].IsValid() || !Dates[1].IsValid())
		return nullptr;

	//Make sure the dates aren't already booked
	for (int i = 0; i <= sizeof(Dates)/sizeof(Dates[0]); i++)
	{
		if (ReservedDates.find(Dates[i]) != ReservedDates.end())
			return nullptr; //Room is reserved on this date. So, this room is unavailable
	}

	//After checking all of that, then room is vacant - room can now be reserved for the date
	Date StartDate = Dates[0];
	Date EndDate = Dates[1];

	//Update Room status
	SetNumGuests(TotalGuests);
	SetRoomStatus(StatusOfRoom);

	//Create new Reservation
	NewReservation = new Reservation(
		this,
		StartDate,
		EndDate,
		RegisteredGuest,
		RmNumber,
		TypeOfRoom,
		TotalGuests
	);

	//Insert dates into std::map
	ReservedDates.insert(std::make_pair(StartDate, "CheckIn"));
	ReservedDates.insert(std::make_pair(EndDate, "CheckOut"));

	//Print Dates
	for (auto it = ReservedDates.begin(); it != ReservedDates.end(); it++)
	{
		std::cout << it->first.Month
			<< "/" << it->first.Day
			<< "/" << it->first.Year
			<< " : " << it->second
			<< std::endl << std::endl;

	}

	//Return reservation
	return NewReservation;
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