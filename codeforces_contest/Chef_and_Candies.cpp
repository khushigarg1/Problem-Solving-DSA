#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int A, X;
        cin >> A >> X;
        int ans = 0;
        if (X >= A)
        {
            ans = 0;
        }
        else
        {
            int sub = A - X;
            int rem = (sub % 4);
            if (rem == 0)
            {
                ans = (sub / 4);
            }
            else
            {
                ans = (sub / 4) + 1;
            }
        }
        /* code */
        cout << ans << endl;
    }

    return 0;
}