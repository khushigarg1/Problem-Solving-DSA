#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int k, n;
        cin >> k >> n;
        int vec[k];
        vec[0] = 1;
        int count = 1;
        int i;
        for (i = 1; i < k; i++)
        {
            int cndtn = vec[i - 1] + count;
            int rem = k - i - 1;
            if (n - cndtn < rem)
            {
                break;
            }
            else
            {
                vec[i] = vec[i - 1] + count;
                count++;
            }
        }
        if (i < k)
        {
            while (i < k)
            {
                vec[i] = vec[i - 1] + 1;
                i++;
            }
        }
        for (int i = 0; i < k; i++)
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
