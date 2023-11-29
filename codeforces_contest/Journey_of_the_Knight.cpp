#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int X1, Y1, X2, Y2;
        cin >> X1 >> X2 >> Y1 >> Y2;
        int diff1 = abs(X1 - Y1);
        int diff2 = abs(X2 - Y2);
        if ((diff1 % 2 == 0 && diff2 % 2 == 0) || ((diff1 % 2) != 0 && (diff2 % 2) != 0))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}