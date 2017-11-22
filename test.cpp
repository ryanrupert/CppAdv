#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "adv.h"

TEST_CASE("Time converter")
{
	adv::Time::date date;
	adv::time.set_value(366);
	date = adv::time.day_to_year();
	CHECK(date.year == 1);
	CHECK(date.day == 1);

	adv::time.set_value(717);
	date = adv::time.day_to_year();
	CHECK(date.year == 1);
	CHECK(date.day == 352);
}
