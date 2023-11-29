/* OOPs - classes and objects
    C++ --> initially called --> C with classes by stroustroup
    class--->extension of structures (in c)
    structures had limitation ---->members of public
        -->members are public
        -->no methods 
    classes ---> structures + more
    classes ---> can have methods and properties
    classes ---> can make few members as private & few as public
    structures in c++ are typedef  mtlb ydi typedef nh lgaynge tb b structure k variable declare ho jayge
    you can declare objects right along with class declaration
    */

/* class Employee
       {
          class definition
       } harry ,rohan,lovish;  */

// harry.salary= 8 makes no sense if salary is private

//nesting of memeber function

#include <iostream>
#include <string>
using namespace std;

class binary
{
    // private:
    string s; //ydi yha check binary kr de private m to koi b iska use bhr nh kr payga
              //void chk_bin(void);           //ek fxn ko ek fxn k andr use kya ja skta h or private b bnaya ja skta h ek fxn ko

public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "enter a binary number" << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary ::ones_compliment(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    cout << "displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{

    binary b;
    b.read();
    //b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}