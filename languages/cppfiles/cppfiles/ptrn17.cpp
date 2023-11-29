#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 1; i <= 11; i++)
    {
        for (int j = 0; j <= 10; j++)
        {
            /* code */
            if (((i + j) == (n + 1)) || (i - j == (n + 1)))
            {
                cout << "0 ";
                int a = 1;
                // j++;
                while ((a >= 0 && i != 11) && ((j - i) != 4) || ((j - i) != 0 && j < 5))
                {
                    /* code */
                    j++;
                    cout << a << " ";
                    if (j < 5)
                    {
                        a++;
                    }
                    else
                    {
                        a--;
                    }
                }
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}
