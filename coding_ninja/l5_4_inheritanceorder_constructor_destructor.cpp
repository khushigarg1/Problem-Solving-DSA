#include<bits/stdc++.h>
using namespace std;
/* jese hi car class ka object bnega vehicle class ka defult construtor automatic call ho jyga we will see it in code
like ssbse phle A class bani then B then C to sbse phle construvtor a ka then b then c ka call hoga but distructor will be oppposite destructor sbsbe phle c ka then b then a 
*/
class vehicle{
    private :
        int maxspeed;
    protected :
        int numtyres;
    public :
        string colour;
    // vehicle(){
    //     cout <<"vehicle's default constructor "<<endl;
    // }
    vehicle (int z){
        cout <<"vehicle's parameterized constructor "<<endl;
        maxspeed = z;
    }
    ~vehicle (){
        cout <<"vehicle's destructor" <<endl;
    }
};
class car : public vehicle{
    public :
        int  numgears;

    car() : vehicle(5) {
        cout <<"car's parameterized constryctor" <<endl;
    }
// we can take a parameter in car class too
    car(int x ) : vehicle(x) {
        cout <<"car's parameterized constryctor" <<endl;
    }

// ye is trh se automatic call ho rha hai so hume esa likhne ki need nhi abhi but we want vehivle(m) ka parameterized constructor calld jab expllicitly likhna hoga 
    // car() : vehicle() {
    //     cout <<"car's default constryctor" <<endl;
    // }
    // car(){
    //     cout <<"car's default constryctor" <<endl;
    // }
    ~ car(){
        cout <<"car's destructor" <<endl;
    }
    void print(){
        cout << "numtyres " <<numtyres <<endl;
        cout << "colour " <<colour <<endl;
        cout << "numgears " <<numgears <<endl;
    }
};
int main(){
    // vehicle v;
    // v.colour = "blue";
    // v.maxspeeed = 100;
    // v.numtyres = 4;

    // car c;
    // c.colour = "black";
    // c.numtyres = 4;
    // c.numgears = 5;
    car c(5);

return 0;
}



/*   OUTPUT
vehicle's default constructor       //ye sbse phle vehicle k lye call hua bcoz apnne sbse phle b=vehicle ka object bnaya tha 
*/
/*
vehicle's default constructor
car's default constructor
isk bad isak constructor call hua bcoz apnne car class ka objecy bnaya and car class vehiucle ko inherit kr rhi so phle vehicle ka then car ka call hua
constructor sbse phle parent then derived class ka call hoga
*/
/*
car's destructor
vehicle's destructor
vehicle's destructor
usk bd usk opposite destrcutor call hue jse jse object destroy hoynge like sbse phle niche ka phir upr phir upr
*/

/* paramterized constructor apne aap call nhi hota hume krvana pdta hai 
*/