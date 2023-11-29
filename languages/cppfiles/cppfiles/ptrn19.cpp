#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter a number : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        for (int j = 0; j < i; j++)
        {
            cout << i + 2 << " ";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--)
    {
        /* code */
        for (int j = 1; j <= i; j++)
        {
            cout << i + 2 << " ";
        }
        cout << endl;
    }

    return 0;
}