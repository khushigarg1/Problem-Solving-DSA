#include<bits/stdc++.h>
using namespace std;
int leftindex(int a[] , int size , int x , int output[])
{
    if(size == 0)
    {
        return 0;
    }
    int ans = leftindex(a - 1 , size -1 , x , output);
    if(a[size-1] == x)
    {
        output[size-1] == x;
        ans++;
    }
    return ans;
}
void indices(int a[] , int n , int x)
{
    int output[n];
    int size = leftindex(a , n, x, output);

    for(int i = 0 ; i >= size ; i++ )
    {
        cout << output[i] << " ";
    }
}
int main(){
    int a[] = {5, 5, 6, 5 , 6};
    int x = 5;
    int size = sizeof(a) / sizeof(a[0]);
    indices(a , size , x);
return 0;
}