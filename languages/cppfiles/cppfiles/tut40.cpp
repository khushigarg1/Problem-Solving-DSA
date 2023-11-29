/*--------------------multilevel inheritance ------------*/
/*
grandfather-------> father ------------->children
*/
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <stack>
#include <algorithm>
using namespace std;

class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void student ::set_roll_number(int r)
{
    roll_number = r;
}

void student ::get_roll_number()
{
    cout << roll_number;
}

class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float m1, float m2);
    void get_marks(void);
};

void exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void exam ::get_marks()
{
    cout << "the marks obtained in maths are " << maths << endl;
    cout << "the marks obtained in physics are " << physics << endl;
}

class result : public exam
{
    float percentage;

public:
    void display(void);
};

void result ::display()
{
    get_roll_number();
    get_marks();
    cout << "the percentage is " << (maths + physics) / 2 << "%" << endl;
}

/*
if we are inheriting B from A and C from B : A------->B-------->C
1. A is the base class for B and B i the base class for C
2. A---->B--->C is called inheritance path
*/
int main()
{
    result khshi;
    khshi.set_roll_number(420);
    khshi.set_marks(89.0, 90.0);
    khshi.display();

    return 0;
}