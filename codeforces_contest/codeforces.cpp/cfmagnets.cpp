#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
    int n, num , count = 0,last=0;
    cin >> n;
    while(n--)
    {
        cin>>num;
        if(num!=last)
        {
            count++;
        }
        last=num;
    }
    
    cout << count;
    return 0;
}