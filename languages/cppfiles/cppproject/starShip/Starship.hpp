#ifndef STARSHIP_H_
#define STARSHIP_H_

#include <iostream>
using namespace std;

class StarShip
{
private:
    string Designation;
    string ship_class;
    string Name;
    int TotalCrew;
    int Length;
    float Maxspeed;

public:
    StarShip();
    string getDesignation();
    string getshipclass();
    string getName();
    int getTotalcrew();
    int getLength();
    float getMaxspeed();

    void setDesignation(string);
    void setshipclass(string);
    void setname(string);
    void settotalcrew(int);
    void setlength(int);
    void setmaxspeed(float);

    virtual ~StarShip(){
        
    }
};

#endif