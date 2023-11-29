/*
 * Date.hpp
 *
 *  Created on: Oct 8, 2022
 *      Author: hartejh
 */

#ifndef DATE_H_
#define DATE_H_

#include <iostream>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date();
    int getDayLimit(int);
    bool setDay(int);
    bool setMonth(int);
    bool setYear(int);
    int getDay();
    int getMonth();
    int getYear();
    string getDate();

    virtual ~Date()
    {
        //  cout<<"Date d"<<endl;
    }
};

#endif /* DATE_H_ */
