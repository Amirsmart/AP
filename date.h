#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <sstream>
using namespace std;
class date{
	public:
		date(string birthDate);
		string getDate();
		int getYear();
		int getMonth();
		int getDay();
		int getAge();
	private:
		string birthDate,y,m,d;
		int year ,month ,day;
		int thisYear ,thisMonth,thisDay,age;
};
#endif
