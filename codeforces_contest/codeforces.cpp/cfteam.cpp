#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<stack>

using namespace std;

int main()
{
    int i,n,pet,vas,ton,count=0;
    std:: cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> pet >> vas >> ton;

        if (pet + vas + ton >= 2)
        {
            count=count+1 ;
        }
        
    } 
    cout << count << endl;

    return 0 ;
}