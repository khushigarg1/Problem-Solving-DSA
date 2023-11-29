#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        if (n <= 10)
        {
            cout << n << endl;
        }
        else
        {
            int ans = 0;
            int temp = n;
            int m;
            while (temp > 0)
            {
                if (temp <= 9)
                {
                    ans += temp;
                }
                else
                {
                    ans += 9;
                }
                m = temp % 10;
                temp = temp / 10;
            }
            cout << ans << endl;
        }
    }
    return 0;
}