#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < a; i++)
        {
            string str;
            int abc;
            cin >> abc;
            for (int j = 0; j < abc; j++)
            {
                cin >> str[j];
            }
            for (int l = 0; l < abc; l++)
            {
                if (str[l] == 'U')
                {
                    if (arr[i] == 0)
                    {
                        arr[i] = 9;
                    }
                    else
                    {
                        arr[i]--;
                    }
                }
                else
                {
                    if (arr[i] == 9)
                    {
                        arr[i] = 0;
                    }
                    else
                    {
                        arr[i]++;
                    }
                }
            }
        }
        for (int i = 0; i < a; i++)
        {
            /* code */
            cout << arr[i] << " ";
        }
    }

    return 0;
}