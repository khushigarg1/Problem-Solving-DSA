#include"Vegetable.hpp"
#include<iomanip>

Vegetable::Vegetable():Food(){
    totalFiber = 0;
    totalSodium = 0;
}
bool Vegetable::setTotalFiber(int f){
    if(f < 0)return false;
    totalFiber = f;
    return true;
}
bool Vegetable::setTotalSodium(int s){
    if(s < 0)return false;
    totalSodium = s;
    return true;
}
int Vegetable::getTotalFiber(){
    return totalFiber;
}
int Vegetable::getTotalSodium(){
    return totalSodium;
}
string Vegetable::whoAmI(){
    return "Vegetable";
}
void Vegetable::print(){
    cout<<setw(12)<<whoAmI()<<":"<<setw(15)<<getName()<<setw(5)<<getTotalSodium();
}