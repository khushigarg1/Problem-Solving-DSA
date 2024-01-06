#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int num)
{
    int squareRoot = sqrt(num);
    return squareRoot * squareRoot == num;
}
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> buckets(n);
        long long totalSquares = 0;

        for (int i = 0; i < n; ++i)
        {
            cin >> buckets[i];
            totalSquares += buckets[i];
        }

        // long long maxBucket = *max_element(buckets.begin(), buckets.end());
        if (totalSquares == 0)
        {
            cout << "NO" << endl;
            break;
        }
        if (isPerfectSquare(totalSquares))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}

// char findReplacedLetter(vector<string> &square)
// {
//     char replacedLetter = ' ';

//     // Check each row for missing character
//     for (int i = 0; i < 3; ++i)
//     {
//         int countA = 0, countB = 0, countC = 0;
//         for (int j = 0; j < 3; ++j)
//         {
//             if (square[i][j] == 'A')
//                 countA++;
//             else if (square[i][j] == 'B')
//                 countB++;
//             else if (square[i][j] == 'C')
//                 countC++;
//         }

//         if (countA == 0)
//             replacedLetter = 'A';
//         else if (countB == 0)
//             replacedLetter = 'B';
//         else if (countC == 0)
//             replacedLetter = 'C';

//         if (replacedLetter != ' ')
//             break;
//     }

//     // If row check didn't find the missing character, check columns
//     if (replacedLetter == ' ')
//     {
//         for (int i = 0; i < 3; ++i)
//         {
//             int countA = 0, countB = 0, countC = 0;
//             for (int j = 0; j < 3; ++j)
//             {
//                 if (square[j][i] == 'A')
//                     countA++;
//                 else if (square[j][i] == 'B')
//                     countB++;
//                 else if (square[j][i] == 'C')
//                     countC++;
//             }

//             if (countA == 0)
//                 replacedLetter = 'A';
//             else if (countB == 0)
//                 replacedLetter = 'B';
//             else if (countC == 0)
//                 replacedLetter = 'C';

//             if (replacedLetter != ' ')
//                 break;
//         }
//     }
//     return replacedLetter;
// }

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         vector<string> square(3);
//         for (int i = 0; i < 3; ++i)
//         {
//             cin >> square[i];
//         }

//         char replacedLetter = findReplacedLetter(square);
//         cout << replacedLetter << endl;
//     }

//     return 0;
// }
