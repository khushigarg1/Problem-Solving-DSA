#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

int sum(int *a , int size)
{
    int ans = 0;
    //  * a[5] = *(a + 5)
    //  cout << sizeof(a) <<endl;      // size of pointer
    for( int i = 0 ; i < size ; i++)
    {
        ans += a[i];
        // cout << ans << " ";
    }
    return ans;
}

int main(){
    int a[10];
    cout << sizeof(a) <<endl;
    cout << sum(a,10) <<endl;
    // we can pass arrays nd here when we sending array then its going as a pointer
    
    cout << sum(a + 3,7) <<endl;
    // we can pass part of an array to fxn
return 0;
}