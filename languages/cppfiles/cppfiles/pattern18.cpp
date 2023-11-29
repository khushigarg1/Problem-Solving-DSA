#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 7;
    int m = 17;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m + 1; j++)
        {
            if ((i + j) == 10)
            {
                int count = 0;
                while (count != i)
                {
                    if (i % 2 == 0)
                    {
                        if (j % 2 == 0)
                        {
                            cout << i << " ";
                            count++;
                        }
                        else
                        {
                            cout << "* ";
                        }
                        j++;
                    }
                    else
                    {
                        if (j % 2 != 0)
                        {
                            cout << i << " ";
                            count++;
                        }
                        else
                        {
                            cout << "* ";
                        }
                        j++;
                    }
                }
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }

    return 0;
}