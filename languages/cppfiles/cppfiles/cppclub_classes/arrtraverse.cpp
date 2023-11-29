#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
// const int a = 10;
// const int* a = 2;

    int arr[5] = {1,3,4,6,9};
    // integer separate containers hai jinko we give collectively arr name
    int sum =0;
    // for (int i = 0; i < 100; i++)
    // {
    //     sum +=arr[i];
    // }    

    int i=100;
    cout<<arr;      //arr is a address which stores containers   it will give hexadecimal value
    // it will store address of 0th index  it is a constant pointer which value we cannt change

    // int* ptr = arr;  //arr khud hi ek address hai islye apnne& nh lgaya nd we cannt change value of pointer
    int* ptr = &arr[0];
       //ptr = arr
    //    jo address pointer m h usk according dekha jayga ki ptr[2] ki value kya h vo jiska address store use 0 index
    cout<< ptr[2];

    // while(i--)       //i=5
    // {
    //     // sum +=ptr[i];      //i = 4
    //     ptr[i];
    //     cout<<ptr[i] << " ";
    // }

    // int * ptr = arr    means ki ptr b ek array bn gya like
    //  int ptr[5] = {1,3,4,6,9}
    //  ptr storing address of base element
    
    cout<<endl;
    // cout<<*ptr;

    // ptr++;

    // cout<<" "<<*ptr;

    while(i<5)
    {
        cout<<*ptr <<" ";
        ptr++;
    }

return 0;
}

// arr bas ek constant hai baki ptr or arr dono equal hai