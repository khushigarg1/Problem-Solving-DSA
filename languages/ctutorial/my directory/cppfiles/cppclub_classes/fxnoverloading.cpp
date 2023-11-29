#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

void change(int* ptr)
{
    for(int i=0;i<=3;i++)
    {
        ptr[i]=ptr[i]+1;
       cout<< ptr[i]<<endl ;
    }
}

void change(string str)
{
    int i;
    for(i=str.length()-1; i>=0 ;i--)
    {
        cout<<str[i];
    }
}
int main()
{
    int arr[4]={1,2,3,5};
    string str="hello";
    change(arr);
    change(str);
    return 0;
}