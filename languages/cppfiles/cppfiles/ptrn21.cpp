#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "enter a number ";
    cin >> n;
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            if (j % 2 == 0)
            {
                cout << "*";
            }
            else
            {
                cout << count;
                count++;
            }
        }
        cout << endl;
    }

    for (int i = n; i > 0; i--)
    {
        count = count - i;
        int temp = count;
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            if (j % 2 == 0)
                cout << "*";
            else
            {
                cout << temp;
                temp++;
            }
        }
        cout << endl;
    }

    return 0;
}
