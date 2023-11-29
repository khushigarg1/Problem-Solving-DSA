#include "Food.hpp"
#include<iomanip>
Food::Food(){
    Name = "";
}
bool Food::setDatePurchased(int year, int month, int day){
    if(datePurchased.setYear(year) == false)
        return false;
    if(datePurchased.setMonth(month) == false)
        return false;
    if(datePurchased.setDay(day) == false)
        return false;
    return true;
}
bool Food::setExpiryDate(int year, int month, int day){
    if(expireDate.setYear(year) == false)
        return false;
    if(expireDate.setMonth(month) == false)
        return false;
    if(expireDate.setDay(day) == false)
        return false;
    return true;
}
bool Food::setName(string name){
    if(name.size() == 0)return false;
    else{
        Name = name;
        return true;
    }
}
string Food::getName(){
    return Name;
}
Date Food::getDatePurchase(){
    return datePurchased;
}
Date Food::getExpireDate(){
    return expireDate;
}
void Food::print(){
    cout<<setw(12)<<whoAmI()<<":"<<setw(12)<<Name<<setw(5)<<getDatePurchase().getDate()<<setw(5)<<getExpireDate().getDate();
}
string Food::whoAmI(){
    return "Food";
}