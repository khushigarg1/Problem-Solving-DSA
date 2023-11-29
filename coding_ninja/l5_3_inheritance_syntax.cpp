#include<bits/stdc++.h>
using namespace std;
//vahicle class will beparent/base calss and car class wll be child class that is derived clsass 
class vehicle{
    private:
        int maxspeed;
    protected:
        int numtyres;
    public:
        string colour;
};
/*
here public means kijo vehicle class ki private property ko car class me use nhi kr paynge inherit ka means normlaly ye hai ki vehicle clas ki properety ko car class access kr skti hai
vehicle       car
private      ->   no
proected     -> protected
public       ->  public
*/
class car : public vehicle{
    public :
        int numgears;
    
    void print(){
        cout << "numtyres : "<<numtyres <<endl;
        cout << "colour : "  <<colour <<endl;
        cout << "numgears : "<<numgears <<endl;
        // cout << "maxspeed : "<<maxspeed <<endl;  we cannot do this boz it is a private in vehicle class
    }
};


int main(){
    vehicle v;
    v.colour = "blue";
    // v.maxspeed = 100;    there will be error bcoz its a private
    // v.numtyres = 4;       isko b access nh bcoz protected emebr classs k bhar accessable hai but only derived class me not in main class

    car c;
    c.colour = "black";    //public
    c.numgears = 5;          //public
    // c.numtyres = 4;        // protected so we cannot access this out of the class
    c.print();
    return 0;
}

/*
vehicle   protected    car
public    ----------> protected
protected  ---------> protected
private   ----------> no     

vehicle   private     car
private   ----------> no
public    ----------> private
protected ----------> private
*/