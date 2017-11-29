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

TEST_CASE("Round decimal")
{
	CHECK(adv::round(1.23, 1) == 1.2);
	CHECK(adv::round(0.02, 1) == 0.0);
	CHECK(adv::round(53.625, 2) == 53.63);
	CHECK(adv::round(100.5265, 3) == 100.527);
	CHECK(adv::round(526.78526, 4) == 526.7853);
	CHECK(adv::round(2.365896, 4) == 2.3659);
	CHECK(adv::round(52.157956, 5) == 52.15796);
	CHECK(adv::round(865.9573156, 6) == 865.957316);
	CHECK(adv::round(3.00000003, 3) == 3.000);
}
