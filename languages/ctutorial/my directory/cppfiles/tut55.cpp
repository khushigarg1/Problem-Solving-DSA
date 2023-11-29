/*------------pointers to derived classes in cpp-----------*/
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <stack>
#include <algorithm>
using namespace std;

class baseclass
{
public:
    int var_base;
    void display()
    {
        cout << "displaying base class variable var_base " << var_base << endl;
    }
};

class derivedclass : public baseclass
{
public:
    int var_derived;
    void display()
    {
        cout << "displaying base class variable var_derived " << var_base << endl;
        cout << "displaying derived class variable var_derived " << var_derived << endl;
    }
};

int main()
{
    baseclass *base_class_pointer;
    baseclass obj_base;
    derivedclass obj_derived;
    base_class_pointer = &obj_derived; //pointing base class  pointer to derived class
    // base class ka ptr deerived classs k obj se point kr sktah but apn koi b fxn call krmge tab fxn(display) base class ka hi run hoga

    base_class_pointer->var_base = 34;
    //base_class_pointer->var_base=234;            will throw an error ye valid nh h ydi apnne baseclasss ka pointer bnaya  or derived class ko point tab sirf apn base class sse jo inherit hui h unhe hi access kr skte hai
    base_class_pointer->display();

    base_class_pointer->var_base = 3400; //we can change the value of base_class
    base_class_pointer->display();

    derivedclass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 9800;
    derived_class_pointer->var_derived = 90;
    derived_class_pointer->display();

//actual me binding tum ye vala fxn run kroge ye hoti h run time pr run time m decision lya ja rha h jiski bht sari definition h konsa vala fxn run hoga
    return 0;
}