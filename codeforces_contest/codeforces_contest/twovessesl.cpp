#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int one, sec, c;
        cin >> one >> sec >> c;
        int diff = abs(sec - one);
        int move = 0;
        if (diff <= c)
        {
            if (one == sec)
                move = 0;
            else
                move = 1;
        }
        else
        {
            int temp = diff;
            while (temp >= (c * 2))
            {
                move++;
                temp -= (c * 2);
            }
            if (temp != 0)
            {
                move++;
            }
        }
        cout << move << endl;
    }
    return 0;
}