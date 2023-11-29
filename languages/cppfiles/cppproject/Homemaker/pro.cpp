#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "Date.hpp"
#include "Food.hpp"
#include "Vegetable.hpp"
#include "Fruit.hpp"
#include "Dairy.hpp"
using namespace std;
int main()
{
    // vector<Food*> data;
    cout << "Welcome to my food reporting system\n";
    cout << "Please enter input file name (Alongwith .txt): ";
    string f;
    cin >> f;
    fstream file(f);
    if (!file.is_open())
    {
        cout << "\nThe File Can't Be Found" << endl;
        return 0;
    }
    int cnt = 0;
    string copy;
    while (getline(file, copy))
    {
        stringstream ss(copy);
        int type;
        ss >> type;
        if (type == 0)
            continue;
        else
            cnt++;
    }
    file.close();
    Food *data[cnt];
    file.open(f);
    int i = 0;
    while (getline(file, copy))
    {
        stringstream ss(copy);
        int type;
        ss >> type;
        string name;
        // switch(type){
        if (type == 0)
            continue;

        else if (type == 1)
        {
            Vegetable *temp = new Vegetable;
            // string name;
            ss >> name;
            temp->setName(name);
            int d, m, y;
            ss >> m;
            ss >> d;
            ss >> y;
            temp->setDatePurchased(y, m, d);
            ss >> m;
            ss >> d;
            ss >> y;
            temp->setExpiryDate(y, m, d);
            int fiber;
            ss >> fiber;
            temp->setTotalFiber(fiber);
            int sod;
            ss >> sod;
            temp->setTotalSodium(sod);
            data[i] = temp;
            // Food* p;
            // data.push_back(p );
            // data.back() = dynamic_cast<Food*>(temp);
        }

        else if (type == 2)
        {
            Fruit *temp = new Fruit;
            // string name;
            ss >> name;
            temp->setName(name);
            int d, m, y;
            ss >> m;
            ss >> d;
            ss >> y;
            temp->setDatePurchased(y, m, d);
            ss >> m;
            ss >> d;
            ss >> y;
            temp->setExpiryDate(y, m, d);
            int sugar;
            ss >> sugar;
            temp->setSugarAmount(sugar);
            int C;
            ss >> C;
            temp->setTotalC(C);
            data[i] = temp;
            // Food* p;
            // data.push_back(p );
            // data.back() = dynamic_cast<Food*>(temp);
        }
        else if (type == 3)
        {
            Dairy *temp = new Dairy;
            // string name;
            ss >> name;
            temp->setName(name);
            int d, m, y;
            ss >> m;
            ss >> d;
            ss >> y;
            temp->setDatePurchased(y, m, d);
            ss >> m;
            ss >> d;
            ss >> y;
            temp->setExpiryDate(y, m, d);
            int F;
            ss >> F;
            temp->setFat(F);
            int C;
            ss >> C;
            temp->setCholesterol(C);
            data[i] = temp;
            // Food* p;
            // data.push_back(p );
            // data.back() = dynamic_cast<Food*>(temp);
        }
        i++;
        // cnt++;
    }
    cout << "Total food read from file: " << cnt << endl
         << endl;
    cout << "Food report\n";
    cout << "===========\n";
    for (Food *x : data)
    {
        x->print();
        cout << endl;
    }
    for (Food *x : data)
    {
        delete x;
    }
    file.close();
    return 0;
}