#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    int i = 65;
    char c = i;      // typecasting implicit
    cout << c << endl;

    int *p = &i;
    // char *p = p;       // int* cannot covert in char* it will be weird bcoz kuch pta hi nh na memory m kya rkha hua h or ye kya krna cha rha
    char *pc = (char*)p;   //explicit that is good it will read like a char variable in memory when we r going to typecasting

    cout << p << endl;
    cout << pc << endl;          // character will not print address as we kn jab tak it will get null character so frst byte me 65 nd second me 0 so null character so it will print A character

    cout << i << endl;
    cout << *p << endl;
    // integer ki least significant byte sbse phle rkhi hoti islye pc m 65 nh to pc + 3 65 hona chiye tha but integer ulta rkha hua hai iska mtlb last vali byte phle rkhi hui hai thats it
    cout << *pc << endl;           //65         pc[0]
    cout << *(pc + 1) << endl;      //0 null    pc[1]
    cout << *(pc + 2) << endl;     //0          pc[2]
    cout << *(pc + 3) << endl;     //0 an integer has 4 four bytes three zero plus one integer

return 0 ;
}