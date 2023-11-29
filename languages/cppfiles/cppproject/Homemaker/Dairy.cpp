#include "Dairy.hpp"
#include<iomanip>

Dairy::Dairy():Food(){
    fat = 0;
    cholesterol = 0;
}
bool Dairy::setFat(int f){
    if(f < 0)return false;
    fat = f;
    return true;
}
bool Dairy::setCholesterol(double c){
    if(c < 0)return false;
    cholesterol = c;
    return true;
}
double Dairy::getCholesterol(){
    return cholesterol;
}
int Dairy::getFat(){
    return fat;
}
string Dairy::whoAmI(){
    return "Dairy";
}
void Dairy::print(){
    cout<<setw(12)<<whoAmI()<<":"<<setw(15)<<getName()<<setw(5)<<getFat()<<setw(10)<<getDatePurchase().getDate()<<setw(10)<<getExpireDate().getDate();
}