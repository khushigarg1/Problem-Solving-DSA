/*HYBRID INHERITANCE
         A   B
          \ /
           C
           |
           D
          / \
         E   F

            A
           / \
          B   C
           \ /
            D
*/

#include<bits/stdc++.h>
using namespace std;

// class vehicle {
//     private :
//         int maxspeed;
//     protected:
//         int numtyres;
//     public :
//         string colour;
//     vehicle(){
//         cout <<"vehicle's default constructor "<<endl;
//     }
//     vehicle(int p){
//         cout <<"vehicle's parameterized constructor "<<endl;
//         maxspeed = p;
//     }
//     ~vehicle(){
//         cout <<"vehicle's destructor "<<endl;
//     }
//     void print(){
//         cout <<"vehicle"<<endl;
//     }
// };

// class car : virtual public vehicle {
//     public :
//         int numgears;
//         car(){
//             cout <<"car's defualt constructor "<<endl;
//         }
//     car(int x , int y ) : vehicle (x){
//         cout <<"car's constructor" <<endl;
//         numgears = y;
//     }
//     ~car(){
//         cout <<"car's destructor" <<endl;
//     }
//     void print(){
//         cout <<"numtyres : "<<numtyres <<endl;
//         cout <<"colour : "<<colour <<endl;
//         cout <<"numgears : "<<numgears <<endl;
//     }
// };

// class truck : virtual public vehicle{
//     public :
//         int seats;
    
//     truck(){
//         cout <<"truck's default constructor "<<endl;
//     }
//     truck(int x , int y ) : vehicle(x){
//         cout <<"trucks constructor "<<endl;
//         seats = y;
//     }
//     ~truck(){
//         cout <<"truck's destructor "<<endl;
//     }
// };
// class bus : public car , public truck{
//     public :
//         bus()
//         {
//             cout <<"bus's constructor " <<endl;
//         }
//         void print(){
//             cout <<"bus"<<endl;
//         }
// };
// int main(){
//     bus b;
//     // b.print(); here it will give error"print fxn preset n multiple classes" bczo compiler will not understand that which print fxn will be called truck or car class
//     b.print();
//     //here it will prit bus print fxn bczo firstly it will check ther ki bus class me print fxn is presenr or not

//     b.car :: print();    // now it will print fxn of car mean vehicle bcoz abhi car class me print fxn ko humne comment kr rkha nd nhi hAI 
//     b.car :: print();  // now car class me bhi print fxn is available then vehicle se phle car ka constructor call hoga  

//     // now we have two diff copies of vehicle class in bus class then we will avoid it for this we will use virtual keyword we will wrote virtual in both car and truck  now b k pas sir fone copy will come no two copies 
// return 0;
// }

/*
ab virtual k bd ye hau ki bus is directly calling vehicle's constructor na to car or no else truck class will call vehicle class    ab ye hua ki bus k call krne se 2-2 copy will not come car k pas ek pointer pdha hua hai jo vehicle class k pointer ko point and same as for truck
bus have object of car adn truck also
*/


class vehicle {
    private :
        int maxspeed;
    protected:
        int numtyres;
    public :
        string colour;
    // vehicle(){
    //     cout <<"vehicle's default constructor "<<endl;
    // }
    // now if i will comment vehicle's default constructor then compiler will give error bcoz child class only can access default constructor from base class now it can it can be access grandparents's class 
        vehicle(int p){
        cout <<"vehicle's parameterized constructor "<< p << endl;
        maxspeed = p;
    }
    ~vehicle(){
        cout <<"vehicle's destructor "<<endl;
    }
    void print(){
        cout <<"vehicle"<<endl;
    }
};

class car : virtual public vehicle {
    public :
        int numgears;
        car() :vehicle(5){
            cout <<"car's defualt constructor "<<endl;
        }
    car(int x , int y ) : vehicle (x){
        cout <<"car's constructor" <<endl;
        numgears = y;
    }
    ~car(){
        cout <<"car's destructor" <<endl;
    }
    void print(){
        cout <<"numtyres : "<<numtyres <<endl;
        cout <<"colour : "<<colour <<endl;
        cout <<"numgears : "<<numgears <<endl;
    }
};

class truck : virtual public vehicle{
    public :
        int seats;
    
    truck() :vehicle(6){
        cout <<"truck's default constructor "<<endl;
    }
    truck(int x , int y ) : vehicle(x){
        cout <<"trucks constructor "<<endl;
        seats = y;
    }
    ~truck(){
        cout <<"truck's destructor "<<endl;
    }
};
class bus : public car , public truck{
    public :
        bus() :vehicle(6)
        {
            cout <<"bus's constructor " <<endl;
        }
        void print(){
            cout <<"bus"<<endl;
        }
};
int main(){
    bus b;
    // b.print(); here it will give error"print fxn preset n multiple classes" bczo compiler will not understand that which print fxn will be called truck or car class
    b.print();
    //here it will prit bus print fxn bczo firstly it will check ther ki bus class me print fxn is presenr or not

    b.car :: print();    // now it will print fxn of car mean vehicle bcoz abhi car class me print fxn ko humne comment kr rkha nd nhi hAI 
    b.car :: print();  // now car class me bhi print fxn is available then vehicle se phle car ka constructor call hoga  

    // now we have two diff copies of vehicle class in bus class then we will avoid it for this we will use virtual keyword we will wrote virtual in both car and truck  now b k pas sir fone copy will come no two copies 



    //when we make vheice class default then bus class ka parameterized constructor direct call hoga bcoz of virtual fxn bus class ka constructor willbe called 
return 0;
}