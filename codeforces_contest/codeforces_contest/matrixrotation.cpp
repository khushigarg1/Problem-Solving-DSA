#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int ar[2][2];
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> ar[i][j];
            }
        }
        int flag = 0;
        if (ar[0][0] < ar[0][1] && ar[1][0] < ar[1][1] && ar[0][0] < ar[1][0] && ar[0][1] < ar[1][1])
        {
            // cout << "YES" << endl;
            flag = 1;
        }
        else
        {
            for (int i = 0; i < 4; i++)
            {
                int temp = ar[0][0];
                ar[0][0] = ar[1][0];
                ar[1][0] = ar[1][1];
                ar[1][1] = ar[0][1];
                ar[0][1] = temp;
                if (ar[0][0] < ar[0][1] && ar[1][0] < ar[1][1] && ar[0][0] < ar[1][0] && ar[0][1] < ar[1][1])
                {
                    flag = 1;
                }
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
