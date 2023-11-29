// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int T;
//     cin >> T;
//     while (T--)
//     {
//         int a, b;
//         cin >> a >> b;
//         int arr[a];
//         for (int i = 0; i < a; i++)
//         {
//             cin >> arr[i];
//         }
//         for (int abc = 0; abc < b; abc++)
//         {
//             int l, m;
//             cin >> l >> m;
//             int flag = 0;
//             int flag1 = 0;
//             int ind1 = -1, ind2 = -1;
//             for (int j = 0; j < a; j++)
//             {
//                 if (arr[j] == l && flag == 0)
//                 {
//                     flag = 1;
//                     ind1 = j;
//                 }
//                 if (arr[j] == m && ind2 < ind1 && flag1 == 0)
//                 {
//                     flag1 = 1;
//                     ind2 = j;
//                 }
//             }
//             if (flag == 1 && flag1 == 1 && ind2 >= ind1)
//             {
//                     cout << "YES" << endl;
//             }
//             else
//             {
//                 cout << "NO" << endl;
//             }
//         }
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
        int a, b;
        cin >> a >> b;
        int arr[a];
        HashMap<int, List<Integer>> map == new HashMap<>();
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
            map.computeIfAbsent(arr[i], li->new ArrayList()).add(i);
        }
        for (int abc = 0; abc < b; abc++)
        {
            long long l, m;
            cin >> l >> m;

            if (!map.containsKey(l) || !map.containsKey(m))
            {
                cout << "No" << endl;
                continue;
            }
            List<Integer> lia = map.get(l), lib = map.get(m);
            int ai = lia.get(lia.size() - 1), bi = lib.get(lib.size() - 1);
            boolean temp = false;
            for (int j : lia)
            {
                if (j < bi)
                    temp = true;
            }
            for (int j : lib)
            {
                if (j > a)
                    temp = true;
            }
            if (temp == true)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}