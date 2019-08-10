#pragma once

struct Month
{
	//Month
	static int January() { return 1; }
	static int February() { return 2; }
	static int March() { return 3; }
	static int April() { return 4; }
	static int May() { return 5; }
	static int June() { return 6; }
	static int July() { return 7; }
	static int August() { return 8; }
	static int September() { return 9; }
	static int October() { return 10; }
	static int November() { return 11; }
	static int December() { return 12; }

};

struct Day
{
	//Dates we're booking - could be done for all dates or just the dates allowed for booking
	static int Thirteenth() { return 13; }
	static int Fifteenth() { return 15; }
};

struct Year
{
public:
	static int CurrentYear() { return 2019; }
	static int NextYear() { return 2020; }
};

struct Date
{
public:
	//Dates are represented as MM/DD/YYYY 
	int Month;
	int Day;
	int Year;
};