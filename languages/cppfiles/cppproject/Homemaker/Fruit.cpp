#include"Fruit.hpp"
#include<iomanip>

Fruit::Fruit():Food(){
    sugarAmount = 0;
    totalC = 0;
} 
bool Fruit::setSugarAmount(long long s){
    if(s < 0)return false;
    sugarAmount = s;
    return true;
}
bool Fruit::setTotalC(float c){
    if(c < 0) return false;
    totalC = c;
    return true;
}
long long Fruit::getSugarAmount(){
    return sugarAmount;
}
float Fruit::getTotalC(){
    return totalC;
}
string Fruit::whoAmI(){
    return "Fruit";
}
void Fruit::print(){
    cout<<setw(12)<<whoAmI()<<":"<<setw(15)<<getName()<<setw(5)<<getSugarAmount();

}
