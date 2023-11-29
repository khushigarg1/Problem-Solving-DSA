#include<bits/stdc++.h>
using namespace std;
class vehicle {
    private:
        int maxspeed;
    protected:
        int numtyres;
    public :
        string colour;
    vehicle (){
        cout <<"vehicle's default constructor "<<endl;
    }
    vehicle (int z){
        cout <<"vehicle's parameterized constructor "<<endl;
        maxspeed = z;
    }
    ~vehicle(){
        cout <<"vehucle's destructor"<<endl;
    }
};
class car :public vehicle{
    public :
        int numgears;

    car(int x , int y) : vehicle(x){
        cout <<"car's parameterized constructor "<<endl;
        numgears = y;
    }
    // car(){
    //     cout <<"car's default constructor "<<endl;
    // }
    ~car(){
        cout <<"car's destructor "<<endl;
    }
    void print(){
        cout <<"numtyres :"<<numtyres <<endl;
        cout <<"colour :"<<colour <<endl;
        cout <<"numgears :"<<numgears <<endl;
    }
};
class hondacity : public car{
    public :
        hondacity(int x , int y) : car(x,y) {
            cout <<"hondacity 's constructor "<<endl;
        }
        // hondacity(){
        //     cout <<"hondacity 's constructor "<<endl;
        // }
// yha hum hondacity se phle ca class ka constructor call kr rhe hai but upr hai hi nhi default toso we have to make default constructor 
        ~hondacity(){
            cout <<"hondacity's destructor "<<endl;
        }
};
int main(){
    // vehicle v;
    // car c;
    // hondacity h;

    hondacity h(4,5);
return 0;
}