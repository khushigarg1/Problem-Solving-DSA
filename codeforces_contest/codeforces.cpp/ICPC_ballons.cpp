// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int a;
//         cin >> a;
//         vector<vector<int>> matrix;
//         vector<vector<int>> temp;

//         for (int i = 0; i < a; i++)
//         {
//             for (int j = 0; j < a; j++)
//             {
//                 cin >> matrix[i][j];
//                 temp[i][j] = matrix[i][j];
//             }
//         }
//         int count = 0;
//         int count2 = 0;
//         while (count != 1)
//         {
//             for (int i = 0; i < a; i++)
//             {
//                 for (int j = 0; j < a; j++)
//                 {
//                     swap(temp[i][j], temp[j][i]);
//                 }
//             }
//             for (int i = 0; i < a; i++)
//             {
//                 reverse(temp[i].begin(), temp[i].end());
//             }
//             int abc = false;
//             for (int l = 0; l < a; l++)
//             {
//                 for (int m = 0; m < a; m++)
//                 {
//                     if (matrix[l][m] != temp[l][m])
//                     {
//                         abc = true;
//                         break;
//                     }
//                 }
//             }
//             if (abc == false)
//             {
//                 count = 1;
//             }
//             if (count > 100)
//             {
//                 count = 0;
//                 break;
//             }
//             count2++;
//         }
//         cout << count << endl;
//     }

//     return 0;
// }


#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a;
        cin >> a;
        string s(a);
        for (int i = 0; i < a; i++)
        {
            cin >> s[i];
        }
 
        sort(s.begin(), s.end());
        
        int count = 2;
        for (int i = 1; i < a; i++)
        {
            cout << s[i-1];
            if (s[i] != s[i - 1])
            {
                count += 2;
            }
            else
            {
                count += 1;
            }
        }
        cout << count << endl;
    }
 
    return 0;
}