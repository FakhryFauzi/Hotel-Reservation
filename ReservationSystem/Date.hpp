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

	//Default Constructor
	Date() : Month(0), Day(0), Year(0){}

	//Constructor: Three Arguments
	explicit Date(
		int _Month
		, int _Day
		, int _Year) :
		Month(_Month)
		, Day(_Day)
		, Year(_Year)
	{

	}
	//Dates are represented as MM/DD/YYYY 
	int Month;
	int Day;
	int Year;

	//Function to ensure Date is valid data
	bool IsValid() const
	{
		return (Month != 0 && Day != 0 && Year == 2019 || Year == 2020);
	}

	//Overload == operator for equality
	bool operator==(const Date& Other)const
	{
		return(
			Month == Other.Month
			&& Day == Other.Day
			&& Year == Other.Year
			);
	}

	//Overload < operator for use in std::map
	bool operator<(const Date& Other) const
	{
		if (Month != Other.Month) return Month < Other.Month;
		else if (Day != Other.Day) return Day < Other.Day;
		else if (Year != Other.Day) return Year < Other.Day;
		else return false;
	}
};