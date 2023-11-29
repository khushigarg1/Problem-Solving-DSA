#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
    int i, n, k, a[100], b = 0;
    cin >> n >> k;

    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (i = 1; i <= n; i++)
    {
        if (a[i] >= a[k] && a[i] > 0)
        {
            b++;
        }
    }
    cout << b;
    return 0;
}