#ifndef FOOD_H_
#define FOOD_H_
#include "Date.hpp"

class Food{
    private:
    string Name;
    Date datePurchased;
    Date expireDate;
    public:
    Food();
    bool setDatePurchased(int,int,int);
    bool setExpiryDate(int,int,int);
    bool setName(string);
    string getName();
    Date getDatePurchase();
    Date getExpireDate();
    virtual void print()=0;
    virtual string whoAmI() = 0;
    virtual ~Food(){
        // cout<<"food d"<<endl;
    }

};


#endif /*FOOD_H_*/