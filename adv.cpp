#include "adv.h"

adv::Time adv::time;
adv::Time::date adv::Time::day_to_year()
{
	int leap = 0; //this holds if it is a leap year
	while (yearconv.day >= 365)
	{
		//This is for a normal year
		if (leap != 4 && yearconv.day >= 365)
		{
			yearconv.day = yearconv.day - 365;
			leap++;
			yearconv.year++;
		}

		//This is for a leap year
		else if (leap == 4 && yearconv.day >= 366)
		{
			yearconv.day = yearconv.day - 366;
			leap = 0;
			yearconv.year++;
		}
	}
	return yearconv;
}

adv::Time::date adv::Time::year_to_day()
{
	int leap = 0;
	while (yearconv.year != 0)
	{
		//this is for a normal year
		if (yearconv.year != 0 && leap != 4)
		{
			yearconv.day = yearconv.day + 365;
			leap++;
			yearconv.year--;
		}
		else if (yearconv.year != 0 && leap == 4)
		{
			yearconv.day = yearconv.day + 366;
			leap = 0;
			yearconv.year--;
		}
	}
	return yearconv;
}

void adv::Time::set_value(int day, int year)
{
	yearconv.day = day;
	yearconv.year = year;
}
//adv::Time time;
