#include<bits/stdc++.h>
using namespace std;

class vehicle {
    private :
        int maxspeed;
    protected:
        int numtyres;
    public :
        string colour;
    vehicle(){
        cout <<"vehicle's default constructor "<<endl;
    }
    vehicle(int p){
        cout <<"vehicle's parameterized constructor "<<endl;
        maxspeed = p;
    }
    ~vehicle(){
        cout <<"vehicle;s destructor "<<endl;
    }
};

class car : public vehicle {
    public :
        int numgears;
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

class truck : public vehicle{
    public :
        int seats;
    
    truck(int x , int y ) : vehicle(x){
        cout <<"trucks constructor "<<endl;
        seats = y;
    }
    ~truck(){
        cout <<"truck's destructor "<<endl;
    }
};
int main(){
    vehicle v;
    car c(1,2);
    truck t(2,3);
return 0;
}