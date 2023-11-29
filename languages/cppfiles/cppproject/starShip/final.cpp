#include <iostream>
#include <map>
#include <list>
#include <vector>
#include <string>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "Starship.hpp"

using namespace std;

int main(int n, char **argv)
{
    string s;
    // cout << n << endl;
    if (n == 1)
    {
        s = "StarShipMap.txt";
    }
    else
    {
        s = argv[1];
    }
    // string s = argv[2];
    fstream file(s);
    if (!file.is_open())
    {
        cout << "\nThe File Can't Be Found/Opened" << endl;
        return 0;
    }

    map<string, StarShip *> mp;
    list<StarShip *> lst;
    string copy;
    StarShip *stship = nullptr;
    while (getline(file, copy))
    {
        // cout << "here" << endl;
        try
        {
            stringstream ss(copy);
            stship = new StarShip;
            string Designation;
            ss >> Designation;
            stship->setDesignation(Designation);
            string ship_class;
            ss >> ship_class;
            stship->setshipclass(ship_class);
            string name;
            ss >> name;
            stship->setname(name);
            int totalcrew;
            ss >> totalcrew;
            stship->settotalcrew(totalcrew);
            int length;
            ss >> length;
            stship->setlength(length);
            float maxspeed;
            ss >> maxspeed;
            stship->setmaxspeed(maxspeed);
        }
        catch (char const *err)
        {
            cout << err;
            delete stship;
            for (StarShip *sp : lst)
                delete sp;
            for (pair<string, StarShip *> sp : mp)
                delete sp.second;
            lst.clear();
            mp.clear();
            exit(EXIT_FAILURE);
        }
        if (mp.find(stship->getDesignation()) == mp.end())
        {
            mp[stship->getDesignation()] = stship;
        }
        else
        {
            cout << "Duplicate key found " << stship->getDesignation() << ", skipping." << endl;
            lst.push_back(stship);
            // insert into map or list
        }
    }
    // cout<<endl;
    string choice = "ok";
    while (choice != "end")
    {
        cout << endl;
        cout << "Please enter a star-ship designation to search for (end to quit, all to list all): ";
        cin >> choice;
        if (choice == "end")
            break;
        else if (choice == "all")
        {
            cout << setw(22) << "Ship Designation" << setw(15) << "Ship Name" << setw(15) << "Speed" << setw(15) << "Ship Class" << setw(15) << "Length" << setw(15) << "Total Crew" << endl;
            for (auto sp : mp)
            {
                cout << setw(22) << sp.second->getDesignation() << setw(15) << sp.second->getName() << setw(15) << sp.second->getMaxspeed() << setw(15) << sp.second->getshipclass() << setw(15) << sp.second->getLength() << setw(15) << sp.second->getTotalcrew() << endl;
            }
        }
        else if (choice == "dups")
        {
            cout << setw(22) << "Ship Designation" << setw(15) << "Ship Name" << setw(15) << "Speed" << setw(15) << "Ship Class" << setw(15) << "Length" << setw(15) << "Total Crew" << endl;
            for (auto sp : lst)
            {
                cout << setw(22) << sp->getDesignation() << setw(15) << sp->getName() << setw(15) << sp->getMaxspeed() << setw(15) << sp->getshipclass() << setw(15) << sp->getLength() << setw(15) << sp->getTotalcrew() << endl;
            }
        }
        else
        {
            if (mp.find(choice) == mp.end())
            {
                cout << "The StarShip could not be found - please try again." << endl;
            }
            else
            {
                StarShip *sp = mp[choice];
                cout << setw(22) << "Ship Designation" << setw(15) << "Ship Name" << setw(15) << "Speed" << setw(15) << "Ship Class" << setw(15) << "Length" << setw(15) << "Total Crew" << endl;
                cout << setw(22) << sp->getDesignation() << setw(15) << sp->getName() << setw(15) << sp->getMaxspeed() << setw(15) << sp->getshipclass() << setw(15) << sp->getLength() << setw(15) << sp->getTotalcrew() << endl;
            }
        }
    }
    for (StarShip *sp : lst)
        delete sp;
    for (pair<string, StarShip *> sp : mp)
        delete sp.second;
    lst.clear();
    mp.clear();

    file.close();
    return 0;
}