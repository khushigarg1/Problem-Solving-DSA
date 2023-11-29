/*----------------LIST---------------*/
/*
list is used to store data like containers bidirectional liner list 
linked list is data structure 
array me apn  continuous memory location htin hai   linked list me ye hota hai jese jha jha memrory khali h wha elements store kre or pointers se link kr de
isse apnko  continuous memory location nhi lene pdnge like ydi jese khi 10 alg alg jgh pr memory free hai to continuous hone ki need nahi hai
yha apnko faster access nh milega wha faster access bco 4 bytes k bd hr index me elemnt store   
yha deletion fast ho jata h direct link krk 
list jab use krte h tab bahut bar element ko bich bich me se delete krna pdh jata hai or chiye ki vo vala partiuclar operation fast ho like inseertion
anad deletion yad fast access thn vo phle array vala hi
*/

#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
#include<list>
using namespace std;

void display(list<int> &lst)
{
    list <int> :: iterator i;
    for ( i = lst.begin(); i != lst.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
}
int main(){
    list <int> list1;         //list f 0 length
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    display(list1);
    
    /*****************REMOVING ELEMENTS FROM THE LIST*******************/
    // list1.pop_back();            //ye last elemnt ko dlt 
    // list1.pop_back();            //it will delete last element from back
    // display(list1);
    
    // list1.pop_front();           //it will delete elemnt from front in the list means aage vala elemnt dlt 
    // display(list1);
    
    // list1.remove(9);        //it will delete/remove all 9 in the list
    // display(list1);


/***********************SORTING THE LIST******************/
    list1.sort();
    display(list1);

    list <int> list2(3);      //empty list of size 7
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter=45;
    iter++;
    *iter= 6;
    iter ++;
    *iter = 9;
    iter++;
    display(list2);
    
    /*******************MERGing ELEMENTS OF BOTH LIST*******************/
    list1.merge(list2);
    cout<<"list1 after merging : ";
    display(list1);

    /************SORTING AND MERGING TOGETHER***************/
    // list1.sort();
    // list2.sort();
    // list1.merge(list2);
    // cout<<"list after merging ";
    // display(list1);

    /****************REVERSING THE LIST*************/
    list1.reverse();
    display(list1);
return 0;
}

    // list <int> :: iterator iter;
    // iter = list1.begin();          //list 1 k phle elemnt ko point krega
    // cout<< * iter<<endl;
    // iter++;
    // cout<< * iter<<endl;
    // iter++;
    // cout<< * iter<<endl;
    // iter++;
    // cout<< * iter<<endl;
    // iter++;
    // cout<< * iter<<endl;

