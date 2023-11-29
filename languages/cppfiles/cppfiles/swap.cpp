#include<iostream>
#include<vector>
#include<string>
#include<math.h>
#include<stack>
#include<algorithm>
using namespace std;
/*
int main()
{
    int a=10,b=20,c;
    swapf(a,b);             //yha apn only a b kivalue send kr rhe h a or b ko nh

    cout<<a<<" "<<b;
    return 0;
}

void swapf(int x,int y)
{
    int temp=x;
        x=y;
        y=x;
        cout<<x<<" "<<y;
}
*/
void swapf(int* aptr , int* bptr)
{
    int temp;
    temp=*aptr;
    *aptr=*bptr;
    *bptr=temp;          //dereferencing

}

int main()
{
    int a=10,b=20,temp;
    swapf(&a,&b);

    cout<<a<<" "<<b;

    return 0;
}