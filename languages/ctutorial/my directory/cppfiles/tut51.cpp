/*-------------pointers to objeect and operation-----------*/
#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

class complex 
{
    int real ;
    int imaginary ;
    public :
        void set_data(int a,int b)
        {
            real=a;
            imaginary=b;
        }
        void get_data(void)
        {
            cout<<"the real part is "<<real<<endl;
            cout<<"the imaginary part is "<<imaginary<<endl;
        }
};

int main(){
    complex c1;
    //complex *ptr=&c1;       //ptr is apoointer whch points to (*ptr)
    complex *ptr=new complex ;    //we can use this to make an complex object  new operator means --->new object
    
    // c1.set_data(4,5);
    // (*ptr).set_data(4,5);     is exactly same as
    ptr->set_data(4,5);               //is arrrow ka mtlb h ptr jis object(c1) ko point kr rha uska set data 
    
    // c1.get_data();
    //(*ptr).get_data();   is similarly same as
    ptr->get_data();

    /*-------array of objects---------*/
    // complex *ptr1 = new complex[4];        isse humara 4 new objects bn jaynge array bn jayga basically oobjects ka
    //yha 4 objects h jisme ptr 1 point krega phle frst vale obj ko phr secnd phr third complex object ko
    // ptr1->set_data(2,3);
    // ptr1->get_data();

return 0;
}