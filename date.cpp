#include "date.h"
#include<iostream>
using namespace std;
date::date()
{
	month = 0, day = 0, year = 0;
}
date::date(int Month, int Day, int Year)
{
	month = Month;
	day = Day;
	year = Year;
}
void date::setjour(int d)
{
	if (d < 1 && d > 31)
		cout << "The day is invalid" << endl;
	else
	day = d;

}
void date::setmois(int m)
{
	if (m < 1 && m > 12)
		cout << "The month is invalid" << endl;
	else
	month = m;

}
void date::setannee(int y)
{
		year = y;
}
void date::showdate1()
{
	cout << month << " /" << day << " /" << year << endl;
}
void date::showdate2()
{
	string monthName[] = { "January", "February", "March",
		"April", "May", "June", "July",
		"August", "September", "October",
		"November", "December" };
	cout << monthName[month - 1] << "  " << day << "  " << year << endl;
}
void date::showdate3()
{
	string monthName[] = { "January", "February", "March",
		"April", "May", "June", "July",
		"August", "September", "October",
		"November", "December" };
	cout << day << "  " << monthName[month - 1] << "  " << year << endl;
}
int date::getjour()
{ return (day);
}
int date::getmois()
{
	return(month);

}
int  date::getannee()
{
		return (year);
}
