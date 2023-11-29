// #include <bits/stdc++.h>
// using namespace std;
// int findans(vector<int> &arr, int pos)
// {
//     int frst = -1;
//     int maxxx = -1;
//     int n = arr.size();
//     for (int i = 0; i < n; i++)
//     {
//         if (maxxx < arr[i])
//         {
//             frst = i;
//             maxxx = arr[i];
//         }
//     }
//     if (frst == pos)
//     {
//         return 0;
//     }
//     arr[frst] = -1;
//     for (int i = 0; i < frst; i++)
//     {
//         if (arr[i] > 0)
//         {
//             arr[i]++;
//         }
//     }
//     return 1 + findans(arr, pos);
// }
// int main()
// {
//     int t, n;
//     cin >> n;
//     vector<int> arr(n);
//     for (auto &i : arr)
//     {
//         cin >> i;
//     }
//     int k;
//     cin >> k;
//     k--;
//     cout << 1 + findans(arr, k) << endl;

//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int findOrderToServe(int N, vector<int> &priorities, int K)
{
    queue<pair<int, int>> orders;

    for (int i = 0; i < N; ++i)
    {
        orders.push({priorities[i], i});
    }

    int orderServed = 0;
    while (!orders.empty())
    {
        int maxPriority = orders.front().first;

        auto currentOrder = orders.front();
        orders.pop();

        bool served = true;
        int size = orders.size();

        for (int i = 0; i < size; ++i)
        {
            auto nextOrder = orders.front();
            orders.pop();

            if (nextOrder.first > maxPriority)
            {
                served = false;
                nextOrder.first--;
            }

            orders.push(nextOrder);
        }

        if (served)
        {
            orderServed++;
            if (currentOrder.second == K)
            {
                break;
            }
        }
        else
        {
            orders.push(currentOrder);
        }
    }

    return orderServed;
}

int main()
{
    int N, K;
    cin >> N;

    vector<int> priorities(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> priorities[i];
    }

    cin >> K;

    int servedOrder = findOrderToServe(N, priorities, K);
    cout << servedOrder << endl;

    return 0;
}
