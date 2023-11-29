// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int T;
//     cin >> T;
//     for (int j = 1; j <= T; j++)
//     {
//         int N, M;
//         cin >> N >> M;
//         int arr[N];
//         int len = sizeof(arr) / sizeof(arr[0]);
//         for (int i = 0; i < len; i++)
//         {
//             cin >> arr[i];
//         }
//         sort(arr, arr + len);

//         int diff = M - 1;
//         double sum = 0;
//         double median = 0;
//         int count = 0;
//         long double ans = 0;

//         for (int i = 0; i < len; i++)
//         {
//             if ((len - diff) <= i)
//             {
//                 sum += arr[i];
//             }
//             else
//             {
//                 median += arr[i];
//                 count++;
//             }
//         }

//         if (M == 1)
//         {
//             if (count % 2 == 0)
//             {
//                 ans = median / count;
//             }
//             else
//             {
//                 ans = (median / count) + 1;
//             }
//         }
//         else
//         {
//             ans = sum + (median / count);
//         }

//         // cout.precision(7);
//         // cout << "Case #" << j << fixed << ": " << ans << endl;
//         cout << "Case #" << j << ": " << ans << endl;
//         j++;
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for (int j = 1; j <= T; j++)
    {
        int N, M;
        cin >> N >> M;
        vector<double> arr;
        for (int i = 0; i < N; i++)
        {
            double var;
            cin >> var;
            arr.push_back(var);
        }
        sort(arr.begin(), arr.end());
        long double output = 0;
        N = N - 1;
        for (M = 1; M > 1; M--, N--)
        {
            output += arr[N];
        }
        if (N % 2 != 0)
        {
            output += ((arr[(N + 1) / 2]) + (arr[(N / 2)])) / 2;
        }
        else
        {
            output += arr[N / 2];
        }
        cout << "Case #" << j << ": " << setprecision(6) << fixed << output << endl;
    }

    return 0;
}