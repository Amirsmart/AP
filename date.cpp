#include "date.h"
date::date(string birthDate){
	thisYear=2020;
	thisMonth=4;
	thisDay=30;
	this->birthDate=birthDate;
	for(int i=0,c=0;i<birthDate.length();i++){
		if(birthDate[i]=='.'){
			c++;
		}else if(c==0){
			y+=birthDate[i];
		}else if(c==1){
			m+=birthDate[i];
		}else{
			d+=birthDate[i];
		}
	}
	stringstream yearString(y),monthString(m),dayString(d);
	yearString>>year;
	monthString>>month;
	dayString>>day;
	age=thisYear-this->year-1;
	if(thisMonth > this->month){
		age++;
	}else if(thisMonth==this->month && thisDay>= this->day){
		age++;
	}
}
int date::getAge(){
	return age;
}
string date::getDate(){
	return birthDate;
}
int date::getYear(){
	return year;
}
int date::getMonth(){
	return month;
}
int date::getDay(){
	return day;
}
