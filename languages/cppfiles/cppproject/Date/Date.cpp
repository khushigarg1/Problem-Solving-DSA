/*
 * Date.cpp
 *
 *  Created on: Oct 8, 2022
 *      Author: hartejh
 */
#include "Date.hpp"

Date::Date(){
	day = 0;
	month = 0;
	year = 0;
}

int Date::getDayLimit(int m){
	int limit = 0;
	switch(m){
		case 1:limit = 31;
			   break;
		case 2:limit = 28;
			   break;
		case 3:limit = 31;
			   break;
		case 4:limit = 30;
			   break;
		case 5:limit = 31;
			   break;
		case 6:limit = 30;
			   break;
		case 7:limit = 31;
			   break;
		case 8:limit = 31;
			   break;
		case 9:limit = 30;
			   break;
		case 10:limit = 31;
			   break;
		case 11:limit = 30;
			   break;
		case 12:limit = 31;
			   break;
	    default: break;
	}
	return limit;
}

bool Date::setDay(int d){
	if(month == 0 || year == 0)
		return false;
	int limit = 0;
	limit = getDayLimit(month);
	if(d > limit || d < 1)
		return false;
	day = d;
	return true;
}

bool Date::setMonth(int m){
	if(year == 0)
		return false;
	if(m > 12 || m < 1)
		return false;
	month = m;
	return true;
}

bool Date::setYear(int y){
	if(y > 9999 || y < 1)
		return false;
	year = y;
	return true;
}

int Date::getDay(){
	return day;
}

int Date::getMonth(){
	return month;
}

int Date::getYear(){
	return year;
}

string Date::getDate(){
	return to_string(year) + "/" + to_string(month) + "/" + to_string(day);
}