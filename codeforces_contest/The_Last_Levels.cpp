#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int sum = 0;
        int div = x / 3;
        int rem = x % 3;
        if (x % 3 == 0)
        {
            sum = ((3 * y) * div) + (rem * y) + ((div-1)*z);
            cout << sum << endl;
        }
        else
        {
            sum = ((3 * y) * div) + (rem * y) + ((div)*z);
            cout << sum << endl;
        }
    }

    return 0;
}