#include <bits/stdc++.h>
using namespace std;

// int trap(vector<int> &height)
// {
//     int i = 0;
//     int n = height.size();
//     int maxx = height[0];
//     // int secondmaxx = height[0];
//     int ans = 0;
//     while (i != height.size())
//     {
//         int count = 0;
//         int secondmaxx = maxx - 1;
//         while (i < height.size() && maxx >= height[i])
//         {
//             count += (maxx - height[i]);
//             i++;
//             secondmaxx = max(secondmaxx, height[i]);
//         }
//         // if (i < height.size() - 1)
//         // {
//         // }
//         if (maxx < secondmaxx)
//         {
//             maxx = max(maxx, height[i]);
//             ans += count;
//             i++;
//         }
//         else
//         {
//             i++;
//         }
//     }
//     return ans;
// }

//------------------------------CAN REACH TO THE END IF TRUE OTHERWISE FALSE------------
int called(int i, int A[], int N)
{
    cout << i << " " << N << endl;
    if (i >= N)
    {
        return 0;
    }
    if (i == N - 1)
    {
        return 1;
    }
    // if (A[i] == 0)
    // {
    //     return 0;
    // }
    int jump = A[i] + i;
    for (int k = i + 1; k <= jump && k < N; k++)
    {
        // if (A[k] == 0)
        // {
        //     break;
        // }
        if (called(k, A, N) == 1)
        {
            return 1;
        }
    }
    return 0;
}
int canReach(int A[], int N)
{
    int i = 0;
    int ans = called(i, A, N);
    return ans;
}
int main()
{
    int n;
    cin >> n;
    // vector<int> v(n);
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // int count = trap(v);
    int count = canReach(v, n);
    cout << count;
    return 0;
}