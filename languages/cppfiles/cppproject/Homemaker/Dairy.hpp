#ifndef DAIRY_H_
#define DAIRY_H_
#include "Food.hpp"
class Dairy:public Food{
    private:
    int fat;
    double cholesterol;
    public:
    Dairy();
    bool setFat(int );
    bool setCholesterol(double);
    int getFat();
    double getCholesterol();
    string whoAmI();
    void print();
    virtual ~Dairy(){
        //  cout<<"Dairy d"<<endl;
    }
};
#endif /*DAIRY_H_*/