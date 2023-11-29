#include "Starship.hpp"

StarShip::StarShip()
{
    Designation = "";
    Name = "";
    ship_class = "";
    TotalCrew = 0;
    Length = 0;
    Maxspeed = 0.0;
}

string StarShip::getDesignation()
{
    return Designation;
}
string StarShip::getshipclass()
{
    return ship_class;
}
string StarShip::getName()
{
    return Name;
}
int StarShip::getLength()
{
    return Length;
}
int StarShip::getTotalcrew()
{
    return TotalCrew;
}
float StarShip::getMaxspeed()
{
    return Maxspeed;
}

void StarShip::setDesignation(string desig)
{
    if (desig.length() == 0)
    {
        throw "invalid designation";
    }
    Designation = desig;
}
void StarShip::setshipclass(string sc)
{
    if (sc.length() == 0)
    {
        throw "invalid ship class";
    }
    ship_class = sc;
}
void StarShip::setname(string s)
{
    if (s.length() == 0)
    {
        throw "invalid name";
    }
    Name = s;
}
void StarShip::settotalcrew(int n)
{
    if (n <= 0)
    {
        throw "invalid total crew";
    }
    TotalCrew = n;
}
void StarShip::setlength(int n)
{
    if (n <= 0)
    {
        throw "invalid length";
    }
    Length = n;
}
void StarShip::setmaxspeed(float n)
{
    if (n <= 0)
    {
        throw "invalid maxspeed";
    }
    Maxspeed = n;
}