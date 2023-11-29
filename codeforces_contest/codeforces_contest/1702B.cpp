// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int T;
//     cin >> T;
//     while (T--)
//     {
//         string str;
//         cin >> str;
//         sort(str.begin(), str.end());
//         int count = 0;
//         for (int i = 1; i <= str.length(); i++)
//         {
//             if (str[i] != str[i - 1])
//             {
//                 count++;
//             }
//         }
//         int ans;
//         if (count % 3 == 0)
//         {
//             ans = count / 3;
//         }
//         else
//         {
//             ans = ((count / 3) + 1);
//         }
//         cout << ans << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string str;
        cin >> str;
        char a = '0', b = '0', c = '0';
        a = str[0];
        int count = 0;
        int flag = 0;
        if (str.length() < 3)
        {
            flag = 1;
        }

        for (int i = 1; i <= str.length(); i++)
        {
            if (str[i] != a && b == '0' && c == '0')
            {
                b = str[i];
            }
            if (str[i] != a && str[i] != b && c == '0')
            {
                c = str[i];
            }
            if (str[i] != a && str[i] != b && str[i] != c)
            {
                count++;
                a = str[i];
                b = '0', c = '0';
                // if (i == (str.length() - 1) || i == (str.length() - 2))
                // {
                //     count++;
                //     break;
                // }
            }
            if ((i == (str.length() - 1)))
            {
                count++;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "1" << endl;
        }
        else
            cout << count << endl;
    }

    return 0;
}