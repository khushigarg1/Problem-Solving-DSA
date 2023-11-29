#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

int a;  // isko ab anyone can use we dont need to declare a again
void g(){
    a++;
    cout << a<< endl;   //12
}

void f(){
    cout << a<< endl;   //10
    a++;
    g();
}

int main(){
    a = 10;    
    f();
    cout << a << endl;   //12
return 0;
}