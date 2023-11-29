/*dynamic array 
in normal array we cannot increase and insert elemnt sbcoz we have to do initialise actual size of the array and elements taht storing in that array
it means that we want users jitne chahe utne elements add kr ske we will do thatt wil keep a internal array of any size and will allow user ki jitne chahe elements can addd so willl doing this so ek new element as soon as will came we will make a new array of double size nd phle vale aaray ko delete kr denge ort usk elements ko new me copy baki aage vale add 

*/
#include<bits/stdc++.h>
using namespace std;

class dynamicarray{
    int * data;
    int nextindex;
    int capacity;

    public :
    dynamicarray(){
        data = new int[5];
        nextindex = 0;
        capacity = 5;
    }

    void add(int element){
        if(nextindex == capacity)
        {
            int *newdata = new int[2*capacity];
            for(int i =0 ; i < capacity ; i++){
                newdata[i] = data[i];
            }
            delete [] data;
            data = newdata;
            capacity *=2;
        }
        data[nextindex] = element;
        nextindex ++;
    }

    int get(int i) const{
        if(i < nextindex){
            return data[i];
        }
        else{
            return -1;
        }
    }

    void add(int i , int element){
        if(i < nextindex){
            data[i] = element;
        }
        else if (i == nextindex){
            add(element);
        }
        else{
            return ;
        }
    }

    void print()const
    {
        for(int i =0 ; i < nextindex ; i++){
            cout << data[i] <<" " ;
        }
        cout << endl;
    }

//copy constructor  and it always to shallow copy so we will try to do deep copy 
    dynamicarray (dynamicarray const &d){
        // this-> data = d.data;           shallow copy 
        this-> nextindex = d.nextindex;
        this-> capacity = d.capacity;

        this-> data = new int[d.capacity];
        for(int i =0 ; i < d.nextindex ; i++){
            this-> data[i] = d.data[i];
        }
    }

    void operator= (dynamicarray const &d){

        this-> data = new int[d.capacity];
        for(int i =0 ; i < d.nextindex ; i++){
            this-> data[i] = d.data[i];
        }
        this-> nextindex = d.nextindex;
        this-> capacity = d.capacity;
    }
};

int main(){
    dynamicarray d1;

     d1.add(10);
     d1.add(20);
     d1.add(30);
     d1.add(40);
     d1.add(50);
     d1.add(60);

    d1.print();
    dynamicarray d2(d1);      // copy constructor

    // dynamicarray d3;
    // d3 = d1;            // copy assignment operator
    dynamicarray d3 ;
    d3 = d1;

    d1.add(0 , 100);
    // d2.print();               automatically phle shallow copy hui jab apnne d1 me change kya but changw will occurs in d2 also bcoz pf shallow copy we had not make new array so that changes which we r doing in d1 that can not change value of d2   so we will create apna khudka copy assignment operator nd deep copy kr denge 
    d1.print();
    d2.print();

    d3.print();
return 0;
}