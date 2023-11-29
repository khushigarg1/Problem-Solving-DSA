#include <iostream>
using namespace std;

int main()
{
    //array example

    int marks[4] = {23, 45, 56, 89}; //4 likhna optional h yadi nhi ikhnge tab b computer automatic figure out kr lega
    int mathsmarks[4];
    mathsmarks[0] = 12;
    mathsmarks[1] = 22;
    mathsmarks[2] = 32;
    mathsmarks[3] = 42;

    cout << "these are maths mraks" << endl;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;

    //we can change the value of an arry also
    marks[2] = 455;

    // cout<<"these are marks"<<endl;
    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;

    // for(int i=0;i<4;i++)
    // {
    //     cout<<"the value of markks "<<i<<" is "<<marks[i] <<endl;
    // }

    int i = 0;
    // while (i<4)
    // {
    //     cout<<"the value of markks "<<i<<" is "<<marks[i] <<endl;
    //     i++;
    // }

    do
    {
        cout << "the value of markks " << i << " is " << marks[i] << endl;
        i++;
    } while (i < 4);

    //--------------------<< arrays and pointer >>-------------
    int* p = marks;
    cout << *(p++) << endl;      //phle to ye frst element ko point but jse ++ pr phuchi line to ye dusre elemnt ko address kr rha tha
    cout << *p << endl;
    cout << *(++p) << endl;      //ab yha frstly  increment then usl bd vali value ko point krega

    // cout<<"the value of  *p is "<<*p <<endl;            //pointers points to the first element i.e. address base element of an arry
    // cout<<"the value of  *(p+1) is "<<*(p + 1) <<endl;
    // cout<<"the value of  *(p+2) is "<<*(p + 2) <<endl;
    // cout<<"the value of  *(p+3) is "<<*(p + 3) <<endl;

    return 0;
}
