#include "DOB.h"

DOB::DOB()
{ }

DOB::DOB(int m, int d, int y)
{
	month = m;
	day = d;
	year = y;
}

int DOB::getMonth() const
{
	return month;
}

int DOB::getDay() const
{
	return day;
}

int DOB::getYear() const
{
	return year;
}

void DOB::printDate() const
{
	cout<<"\nDate of Birth: "<< month << ":" << day << ":" << year;
}

void DOB::setDOB(int m, int d, int y)
{
	month = m;
	day = d;
	year = y;
}

void DOB::setMonth(int m)
{
	month = m;
}

void DOB::setDay(int d)
{
	day=d;
}

void DOB::setYear(int y)
{
	year = y;
}