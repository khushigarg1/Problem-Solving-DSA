// #include<iostream>
// #include<vector>
// #include<string>
// #include<cmath>
// #include<stack>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     int i,l=0;
//     string s;
//     cin>>s;
//     for(i=0;i<s.length();i++)
//     {
//         if(s[i]=='4' || s[i]=='7')
//         {
//             l++;    
//         }
//     }
//     if(l==4 || l==7)
//     {
//         cout<<"YES";
//     }
//     else
//     {
//     cout<<"NO";
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin >> n;
    int flag = 0;
    int arr[14] = {4 , 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 777, 747, 774};
    for(int i = 0 ; i < 14 ; i++)
    {
        if((n%arr[i])==0)
        {
            flag = 1;
        }
    }
    if(flag== 1)
    {
        cout << "YES" <<endl;
    }
    else
    {
        cout << "NO" <<endl;
    }
    return 0;
}