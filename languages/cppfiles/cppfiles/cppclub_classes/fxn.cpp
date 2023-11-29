#include<bits/stdc++.h>
using namespace std;
//function in cpp
//declaration
// return type function name{};

// void <datatypes> 

void hello();
// void hello(){
//     cout << "hello world"<<endl;
// }

void hello(string s){
    cout << "hello world"<< s << endl;
}

int add(int a , int b){
    int c;
    c = a+ b;
    return c;
}

bool isprime(int a){

}
//definition

int main(){
//     string str = "ritesh";
//     for (int i = 0; str[i] ; i++)
//     {
//         cout << i[str] <<endl;
//         // cout << str[i] <<endl;
//     }
//     // str[i] , i[str] , *[str+i] , *[i+str]
    
    string name = "khushi";
    hello(name);
    // hello();
    int a = 1 , b = 2;
    int c = add(a,b);
    cout << c;
return 0;
}

void hello(){
    cout << "hello world"<<endl;
}

/*
int a = 1 , b = 2;
CALL BY VALUE 
cout << \n before fxn call \n";
cout <<"a= "<<a<<" b= "<<b <<endl;

*/