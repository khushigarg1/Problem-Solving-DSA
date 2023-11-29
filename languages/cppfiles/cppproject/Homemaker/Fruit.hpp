#ifndef FRUIT_H_
#define FRUIT_H_
#include "Food.hpp"
class Fruit:public Food{
    private:
    long long sugarAmount;
    float totalC;
    public:
    Fruit();
    bool setSugarAmount(long long);
    bool setTotalC(float);
    long long getSugarAmount();
    float getTotalC();
    string whoAmI();
    void print();
    virtual ~Fruit(){
        //  cout<<"Fruit d"<<endl;
    }
};
#endif /*FRUIT_H_*/