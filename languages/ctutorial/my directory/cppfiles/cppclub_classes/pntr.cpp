#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

// pointer stores address of another variable
/*
int main(){
    int sum = 10;
    int* psum = &sum;
    
    // base_datatype * ptr_name
    cout<<"thebaddress is psum : "<<psum <<endl;
    cout<<"the value at address is : "<<*psum;           //dereferencing
return 0;
}
*/

// int main() 
// {
//     int sum ;
//     cout<<"the value of sum is "<<endl;
//     cin>>sum;
    
//     int* psum;
//     psum = &sum;

//     cout<<sum;
//     cout<<"thebaddress is psum : "<<psum <<endl;
//     cout<<"the value at address is : "<<*psum;

//     return 0;
// }

int main()
{
    int sum = 10;
    int dsum = sum;
    dsum = 100;
    cout<<sum <<endl;

    int* psum = &sum;
    *psum = 100;
    cout<<sum;
}