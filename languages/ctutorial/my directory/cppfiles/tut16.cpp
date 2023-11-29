#include<iostream>
using namespace std;

int sum(int a,int b)
{
    int c=a+b;
    return c;
}
//this will not swap a,b
// void swap(int a,int b)
// {                                                                 //formal arguments
//     int temp =a;         //temp=4,a=4,b=5
//     a=b;                 //4,5,5
//     b=temp;              //4,5,4
// }

//--------call by reference using pointers
// void swappointer(int* a,int* b)
// {                                                                 //formal arguments
//     int temp =*a;         //temp=4,a=4,b=5
//     *a=*b;                 //4,5,5 yha value hi chng ho gy addresses k andr so it will work
//     *b=temp;              //4,5,4
// }

//--------call by reference using c++ reference variables
 void swapreferencevar(int &a,int &b)
 {  // a point krega x ko b point krega y ko  memory m                                                            //formal arguments
     int temp =a;             //temp=4,a=4,b=5
     a=b;                    //4,5,5
     b=temp;                //4,5,4    
 }

//---------return by ref var 
/*yha int& ka mtlb h ye integer return nh krega blki reference variable ko return krega jo ki ref h x ka equals to76  */
// int& swapreferencevar(int &a,int &b)
// { 
       // a point krega x ko b point krega y ko  memory m   
//     int temp =a;             //temp=4,a=4,b=5     //formal arguments
//     a=b;                    //4,5,5
//     b=temp;                //4,5,4    
//     return a;
// }

int main()
{
    int x=4,y=5;
    //cout<<"the sum of 4 and 5 is"<<sum(a,b);
    cout<<"the value of x is "<<x <<"the value of y is "<<y<<endl;
    //swap(x,y);                                                       //this will not swap a,b   
    //swappointer(&x,&y);                             //this will swap a,b using pointer reference
    swapreferencevar(x,y);                          //this will swap a and b using c++ reference variables
    cout<<"the value of x is "<<x <<"the value of y is "<<y<<endl; 
    
    // swapreferencevar(x,y)=76;                          //yha a return kr dega 76 this wil swap a and b using refernce variables
    // cout<<"the value of x is "<<x <<"the value of y is "<<y<<endl;
    //  return 0;
}