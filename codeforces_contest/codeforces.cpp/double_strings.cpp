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
//         string str[a];
//         for (int i = 0; i < a; i++)
//         {
//             cin >> str[i];
//         }
//         for(int i = 0 ; i < a ; i++)
//         {
//             int flag = 0;
//             // cout << str[i] + str[i+1] <<endl;
//             for(int j = 0 ; j < a ; j++)
//             {
//                 for(int l = 0;l<a; l++)
//                 {
//                 if(str[i] == (str[l]+str[j]))
//                 {
//                     flag = 1;
//                 }
//                 }
//             }
//             if(flag == 1)
//             {
//                 cout << 1;
//             }
//             else
//             {
//                 cout << 0;
//             }
//         }
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin >> t;
    while(t--)
    {
        long long n ;
        cin >> n;
        int count = 0;
        unordered_map<string,long long> vec;
        vector<string> str;
        for(long long i = 0; i < n ; i++)
        {
            string s;
            cin >> s;
            str.push_back(s);
            count++;
            vec[s] = 1;
        }
        string s2 ="";
        for(auto &it : str)
        {
            bool flag = false;
            for(long long j = 0 ; j < it.size();++j)
            {
                if(vec[it.substr(0,j)] == 1 && vec[it.substr(j,it.size())] == 1)
                {
                    flag = true;
                    break;
                }
                count--;
            }
                if(flag)
                s2+='1';
                else
                s2+='0';
        }
            cout << s2<<endl;
    }
 
return 0;
}