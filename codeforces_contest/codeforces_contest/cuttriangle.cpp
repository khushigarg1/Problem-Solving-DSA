#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int X1, Y1, X2, Y2, X3, Y3;
        cin >> X1 >> Y1;
        cin >> X2 >> Y2;
        cin >> X3 >> Y3;

        int A = (int)pow((X2 - X1), 2) + (int)pow((Y2 - Y1), 2);

        int B = (int)pow((X3 - X2), 2) + (int)pow((Y3 - Y2), 2);

        int C = (int)pow((X3 - X1), 2) + (int)pow((Y3 - Y1), 2);

        if ((A > 0 and B > 0 and C > 0) and (A == (B + C) or B == (A + C) or C == (A + B)))
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}