// #include <iostream>
// #include <vector>
// #include <unordered_map>
// using namespace std;

// string checkEqualJuice(vector<int> &glasses)
// {
//     int n = glasses.size();
//     unordered_map<long long, int> oddPrefix, evenPrefix;
//     long long oddSum = 0, evenSum = 0;
//     string result = "NO";

//     for (int i = 0; i < n; ++i)
//     {
//         if (i % 2 == 0)
//             evenSum += glasses[i];
//         else
//             oddSum += glasses[i];

//         if ((i % 2 == 0 && evenSum == oddSum) || (i % 2 != 0 && evenSum == oddSum))
//         {
//             result = "YES";
//             break;
//         }

//         if (i % 2 == 0)
//         {
//             if (evenPrefix.find(evenSum - oddSum) != evenPrefix.end())
//             {
//                 result = "YES";
//                 break;
//             }
//             evenPrefix[evenSum - oddSum] = i;
//         }
//         else
//         {
//             if (oddPrefix.find(oddSum - evenSum) != oddPrefix.end())
//             {
//                 result = "YES";
//                 break;
//             }
//             oddPrefix[oddSum - evenSum] = i;
//         }
//     }

//     return result;
// }

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> glasses(n);

//         for (int i = 0; i < n; ++i)
//         {
//             cin >> glasses[i];
//         }

//         string result = checkEqualJuice(glasses);
//         cout << result << endl;
//     }

//     return 0;
// }

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

string checkEqualJuice(vector<int> &glasses)
{
    int n = glasses.size();
    unordered_map<long long, int> prefixSum;
    long long sum = 0;
    string result = "NO";

    for (int i = 0; i < n; ++i)
    {
        sum += (i % 2 == 0) ? glasses[i] : -glasses[i];

        if (sum == 0 || prefixSum.find(sum) != prefixSum.end())
        {
            result = "YES";
            break;
        }
        else
        {
            prefixSum[sum] = i;
        }
    }

    return result;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> glasses(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> glasses[i];
        }

        string result = checkEqualJuice(glasses);
        cout << result << endl;
    }

    return 0;
}
