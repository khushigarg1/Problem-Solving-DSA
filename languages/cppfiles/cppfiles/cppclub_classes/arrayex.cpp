#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    int size;
    int sum =0;
    cin>>size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i];
        sum = arr[i] + sum;
    }
    cout<<endl;
    cout<<sum;
    
    
return 0;
}