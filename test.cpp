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

TEST_CASE("Prime number")
{
	CHECK(adv::isPrime(10) == false);
	CHECK(adv::isPrime(2) == true);
	CHECK(adv::isPrime(11) == true);
	CHECK(adv::isPrime(43) == true);
	CHECK(adv::isPrime(97) == true);
	CHECK(adv::isPrime(99) == false);
	CHECK(adv::isPrime(12) == false);
	CHECK(adv::isPrime(44) == false);
	CHECK(adv::isPrime(1000) == false);
	CHECK(adv::isPrime(1187) == true);
	CHECK(adv::isPrime(991) == true);
}
