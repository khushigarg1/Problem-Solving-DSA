//array is a type of data structure
#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

int main()
{
    // int mark[4] = {1,2,3,4};
    // mark[2] = 56;
    //value will be changed at second index i.e 3 = 56
    // size = n   then index = n-1
    
    // int mark[4];
    // mark[0] = 1;
    // mark[1] = 2;
    // mark[2] = 3;
    // mark[3] = 4;

    int size;
    cout<<"the size of array is ";
    cin>>size;
    int mark[size];
    for(int i = 0; i < size ; i++)    
    {
        cin>>mark[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout<<mark[i]<<endl;        
    }
    
return 0;
}