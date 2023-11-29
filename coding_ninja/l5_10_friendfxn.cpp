/*
friend fxn -> to access private property 
truck {
    private , public , protected
}
bus class -> print(){}  and that wants to access private value of truck
then we will use friend fxn we will make friend cus class of the truc fxn then it will get all private rpoperety 
*/
#include<bits/stdc++.h>
using namespace std;

class bus{
    public:
        void print();
            //access x of truck so we have to make friend 
};
void test();

class truck{
    private :
        int x;
    protected:
        int y;
    public:
        int z;

        friend class bus;
        // bus class ka hr emmebr fxn iski ;private property ko access kr skta hai nut vice versa is not true like truck bus k koi b private property ko access nhi kr skta 
    // friend void bus :: print();
    friend void test();
};

void bus :: print(){
    truck t;
    t.x = 10;
    t.y = 20;
    cout << t.x << " " <<t.y <<endl;
}

void test(){
    // access truck private 
    truck t;
    t.x = 10;
    t.y = 20;
    cout << t.x << " " <<t.y <<endl;
}
int main(){
    bus b;
    b.print();

    test();
return 0;
}

/*
-> friend fxn doesnot have access of this keyword bcoz they dont have fxn of our class
-> hum in frnd fxn ko ksii bhi modifier me daal sktehai isse koi phrk nh pdega public , private , protected
-> like mere pas 4 print fxn hai and i want ki ye truck class ki private property ko acees then we have on1 option ki ek ek krk sbko frn bna de and hum puri class ko hi frnd bna denge like frnd class bus
*/