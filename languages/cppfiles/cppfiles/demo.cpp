/*
// #include<iostream>
// #include<vector>
// #include<string>
// #include<cmath>
// #include<stack>
// #include<algorithm>
// using namespace std;
// class complex
// {
//     int a,b;
//     public :
//     complex()
//     {
//         a=0;
//         b=0;
//     }
//        complex(int x,int y=9)
//        {
//            a=x;
//            b=y;
//        }

//        complex(int x=1)
//        {
//            a=x;
//            b=0;
//        }
//        void display()
//        {
//            cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
//        }       
// };
// //parameters jo mene pass kye h vo match krnge vhi vala fxn mera run ho jayga
// int main()
// {
//     complex c1(4);
//     c1.display();

//     //complex c2(2);
//     //c2.display();
    
//     complex a;
//     a.display();
//     return 0;
// }
*/
/*
// class B;
// class A
// {
//     private :
//         int x;
//     public :
//         void setdata(int x)
//         {
//             this-> x= x;
//         }
//         friend void min(A , B);
//         //friend class B;
// }
// class B
// {
//     int y;
//     public :
//         void sedtata(int y)
//         {
//             this-> y = y;
//         }
//         friend void min(A,B);
// }
// void min(A a , B b)
// {
//     if(a.x <= b.y)
//     {
//         cout << a.x << " < " << b.y;
//     }
//     else
//         cout << a.x << " > " << b.y;
// }

// int main()
// {
//     A a;
//     B b;
//     a.setdata(10);
//     b.setdata(10);
//     min(a ,b);
// }

// class frst
// {
//     private :
//         int x = 5;
//     public :
//         friend class sec;
// };
// class sec
// {
//     public :
//     void dispaly(frst a1)
//     {
//         cout << a1.x ;
//     }
// };
// int main()
// {
//     frst a;
//     sec b1;
//     b1.dispaly(a);
//     return 0;
// }
*/

#include<iostream>
using namespace std;
// class account{
//     public :
//         float salary = 60000;
//         void fun()
//         {
//             cout << "base";
//         }
// };
// class programmer : public account
// {
//     public:
//         float bonus = 1;
//         void fun()
//         {
//             cout << "d";
//         }
// };
// class C : public programmer , public account{
//     public :
//         int a = 5;
//         void view()
//         {
//             // fun();
//             account :: fun();
//         }
// };
// int main()
// {
//     programmer p1;
//     // C c1;
//     // c1.view();
//     p1.account ::fun();
//     cout << " "<< p1.bonus ;
//     return 0;
// }

// class Shape {                                        //  base class  
//     public:    
// void draw(){                             // virtual function  
// cout<<"drawing..."<<endl;      
//     }        
// };     
// class Rectangle: public Shape                  //  inheriting Shape class.  
// {      
//  public:    
//  virtual void draw()      
//    {      
//        cout<<"drawing rectangle..."<<endl;      
//     }      
// };    
// class Circle: public Rectangle                        //  inheriting Shape class.  
// {      
//  public:    
//  void draw()      
//    {      
//       cout<<"drawing circle..."<<endl;      
//    }      
// };    
// int main(void) {    
//     Shape *s;                               //  base class pointer.  
//     Shape sh;                               // base class object.  
//     Rectangle *rec;    
//     Circle cir;   

//     s=&sh;    
//     s->draw();   

//     rec = &cir;
//     s->draw();   

//     s=&cir; 
//     s->draw();     
// }    

template <class T>
class addition
{
    public :
        T a;
        T b;
        void add(T a , T b)
        {
            T c =a+ b;
            cout << c;
        }
};
int main()
{
    addition <int> a1;
    a1.add(1,2);
    return 0;
}