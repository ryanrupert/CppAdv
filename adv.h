#pragma once
#include <cmath>

//this is my namespace
namespace adv
{
	//this will hold the functions to do date conversions
	class Time
	{	
	public:
		//this is the date structure
		struct date
		{
			int day;
			int year;
		};
		//this will find how many years are in a number of days
		date day_to_year();
		//this will find how many days are in a number of years
		date year_to_day();
		//this will set the variables
		void set_value(int day = 0, int year = 0);
	private:
		date yearconv; //this holds the year and day
	};
	extern Time time;

	//this will find if a number is prime
	bool isPrime(int num);
}
