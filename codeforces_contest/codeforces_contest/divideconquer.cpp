#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int sum = 0;
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        if (sum % 2 == 0)
        {
            cout << 0 << endl;
        }
    }
    return 0;
}