#pragma once
#include <vector>
#include <string>
#include "Address.hpp"
#include "Room.hpp"

class Hotel
{
public:
	Hotel();

	Hotel(int _HotelID, std::string _HotelName, Address _HotelAddress, std::vector<Room> _Rooms);

	virtual ~Hotel() {}

	

};

