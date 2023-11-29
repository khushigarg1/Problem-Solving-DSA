#ifndef VEGE_H_
#define VEGE_H_
#include "Food.hpp"
class Vegetable: public Food{
    private:
    int totalFiber;
    int totalSodium;
    public:
    Vegetable();
    bool setTotalFiber(int);
    bool setTotalSodium(int);
    int getTotalFiber();
    int getTotalSodium();
    string whoAmI();
    void print();
    virtual ~Vegetable(){
        //  cout<<"Vegetable d"<<endl;
    }
    
};

#endif /*VEGE_H_*/