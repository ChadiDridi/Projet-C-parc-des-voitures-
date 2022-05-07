#pragma once
#include<iostream>
#include<string>
class date
{
private:
	int month, day, year;
public:
	//These are consturctors
	date();
	date(int, int, int);
	//Destructor
	~date(){}
	//void do not return values
	void setjour(int);
	void setmois(int);
	void setannee(int);
	void showdate1();
	void showdate2();
	void showdate3();
	int getjour();
	int getmois();
	int getannee();
};
