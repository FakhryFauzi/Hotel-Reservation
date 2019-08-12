#pragma once

#include<string>
struct Address {
public:

	//Default Constructor
	Address(){}

	//Constructor: 5 Arguments
	Address(
		std::string _StreetAddress
		,std::string _City
		,std::string _State
		,std::string _ZipCode
		,std::string _Country
	):
		StreetAddress(_StreetAddress)
		,City(_City)
		,State(_State)
		,ZipCode(_ZipCode)
		,Country(_Country)
	{}

	//Member Variables
	std::string StreetAddress;
	std::string City;
	std::string State;
	std::string ZipCode;
	std::string Country;

};
