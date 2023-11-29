#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
    int i, k, n, w,res,sum=0;
    cin >> k >> n >> w;
    for (i = 1; i <= w; i++)
    {
        sum = sum + (i * k);
    }
    if (sum <= n)
    {
        cout << 0;
    }
    else
    {
        res =sum-n;
        cout <<res;
    }
    return 0;
}