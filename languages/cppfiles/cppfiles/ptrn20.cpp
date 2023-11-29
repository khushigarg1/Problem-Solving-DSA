#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cout << "enter a number ";
    cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j < (2 * i) - 1; j++)
    //     {
    //         if (j % 2 == 0)
    //             cout << "*";
    //         else
    //             cout << i;
    //     }
    //     cout << endl;
    // }

    // for (int i = n; i >= 1; i--)
    // {
    //     /* code */
    //     for (int j = 1; j <= 2 * i - 1; j++)
    //     {
    //         if (j % 2 == 0)
    //             cout << "*";
    //         else
    //             cout << i;
    //     }
    //     cout << endl;
    // }

    int count = 0;
    for (int i = 1; count < n * 2;)
    {
        /* code */
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            if (j % 2 == 0)
                cout << "*";
            else
                cout << i;
        }
        if (count < n - 1)
        {
            i++;
        }
        else if (count == n - 1)
        {
            i = i;
        }
        else
        {
            i--;
        }
        count++;
        cout << endl;
    }

    return 0;
}