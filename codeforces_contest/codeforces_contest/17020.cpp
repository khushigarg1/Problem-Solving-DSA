#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long m;
        cin >> m;
        long long n = m;
        long long ans;
        int count = 0;
        int output;
        while (n != 0)
        {
            n = n / 10;
            ++count;
        }
        ans = count - 1;
        int diff = pow(10, ans);
        // cout << diff;
        output = (m - diff);
        cout << output << endl;
    }

    return 0;
}