/*---------destructors--------*/
/* jo bhi memory constructors ne or object ne gher kr rkhi thi allocate kr rkhi thi apne lye usk destroy krna destructors ka kaam hai

jab ek object destroy kiya ja rha h tab usne jo dynamic memory allocate krk rkh rkhi thi uskko free kr de 
destructor never takes an argument nor does it return any value
*/
#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

//int count=0;      //global variable
class num
{
    public :
    int count=0;  
        num()
        {
            count++;
            cout<<"this is the time when constructor is called fr object number "<<count<<endl;
        }
        
        ~num()
        {
            cout<<"this is the time wehn my destructor is called for object number "<<count<<endl;
            count--;
        }
};

int main()
{
    cout<<"we r inside our main function "<<endl;
    cout<<"creating first objects n1"<<endl;
    num n1;              //isk bd ek block khla mtlb ki j b cheeze rkhi hui h block khtm hone k bd destroy
    {
        cout<<"entering this block "<<endl;
        cout<<"creating tw more objects "<<endl;
        num n2,n3;
        cout<<"exiting this block "<<endl;
    }        //n1 destroy nh hg only block k andr n2 n3 destroy ho jaynge jse hi block exit krnge bcoz n1 abhi b kam aa skta h or uska scope main k andr h
    cout<<"back to main"<<endl;
return 0;
}