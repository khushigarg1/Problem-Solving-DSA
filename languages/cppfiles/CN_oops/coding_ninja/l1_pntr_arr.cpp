/*      POINTERS AND ARRAYS DIFFERENCE */
#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    int a[10];
    cout<<a<<endl;
    cout<<&a[0]<<endl;  //pointer and arrays are mostly same only diff is that pointers allocates 8 butes memory separately and array does not stores 40 bytes memory ie 10 * 4 = 40 every integer is of 4 butes so 10 integers will  be of 40 bytes.

    a[0] = 5;
    a[1] = 10;
    cout << *a << endl;     //a points to zeroth index 5
    cout << *(a+1) <<endl;  // a + 1 will point to zeroth + 1 index element
    // we can do arithmetic in arry also like a pointer 
    // *(a+i) = a[i]
    // i[a] = *(a+i)

    int* p = &a[0];

    cout<< a<<endl;      // address of first element of an array 
    cout<< p << endl;    //address of array 
   
    cout<< &a << endl;    
    // address of array will not change i.e. it does not store another memory
    cout<< &p << endl;
    // address will be diff bcoz it points to array a and &p ka mtlb ki address aayega a ka 
    
    cout << sizeof(p) <<endl;
    cout << sizeof(a) <<endl;

    p = p + 1;    //we can resize pointer
    // a = a + 1;     //we cannot change the array that is cannot resize 
    p = a + 1;
return 0;
}