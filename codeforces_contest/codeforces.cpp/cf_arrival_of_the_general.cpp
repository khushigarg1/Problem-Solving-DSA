#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    int n ;
    cin >> n;
        int arr;
    int maxind=0 , minind=0 , maxnum=0 , minnum = 100;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr;
        if(maxnum < arr )
        {
            maxind = i;
            maxnum = arr;
        }
        if(arr <= minnum)
        {
            minind= i;
            minnum = arr;
        }
    }
    if(maxind > minind)
    {
        cout << ((maxind-1) + (n-minind) -1);
    }
    else{
        cout << ((maxind-1) + (n-minind));
    }
return 0;
}