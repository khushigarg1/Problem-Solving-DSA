#include<bits/stdc++.h>
using namespace std;
int indices(int arr[] , int size , int x , int outputarr[])
{
    if(size==0)
    {
        return 0;
    }
    int ans = indices(arr+1 , size -1 , x , outputarr);
    if(arr[0] == x)
    {
        for(int i = ans-1 ; i>=0 ; i--)
        {
            outputarr[i+1] = outputarr[i] + 1;
        }
        outputarr[0]= 0;
        ans++;
    }
    else
    {
        for(int i = ans-1 ; i >=0 ; i--)
        {
            outputarr[i] = outputarr[i]+1;
        }
    }
    return ans;
}

void smallindices(int arr[] , int n , int x)
{
    int output[n];
    int size = indices(arr , n , x , output);
    for(int i = 0 ; i < size ; i++)
    {
        cout << output[i] <<" ";
    }
}
int main(){
    int arr[] = {5 , 5 ,6 ,5 ,6};
    int x = 5;
    int n = sizeof(arr) / sizeof(arr[0]);
    smallindices(arr , n, x);
return 0;
}