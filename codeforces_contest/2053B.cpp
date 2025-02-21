#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  ll t;
  cin >> t;
  while (t--)
  {
    ll n;
    cin >> n;
    vector<pair<ll, ll>> arr;
    map<ll, ll> mp;
    ll max_val = 0;

    for (ll i = 0; i < n; i++)
    {
      ll a, b;
      cin >> a >> b;
      arr.push_back({a, b});
      if (a == b)
      {
        mp[a]++;
      }
      max_val = max({max_val, a, b});
    }

    vector<ll> freq(max_val + 1, 0);
    for (auto &p : mp)
    {
      freq[p.first] = 1;
    }

    vector<ll> prefix(max_val + 2, 0);
    for (ll i = 1; i <= max_val; i++)
    {
      prefix[i] = prefix[i - 1] + freq[i];
    }

    string s = "";
    for (auto &it : arr)
    {
      ll a = it.first, b = it.second;

      if (a == b)
      {
        if (mp[a] > 1)
          s += '0';
        else
          s += '1';
      }
      else
      {
        if (prefix[b] - prefix[a - 1] == (b - a + 1))
          s += '0';
        else
          s += '1';
      }
    }
    cout << s << endl;
  }

  return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define MOD 1000000007

// int main()
// {
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);
//   cout.tie(NULL);

//   ll t;
//   cin >> t;
//   while (t--)
//   {
//     ll n;
//     cin >> n;
//     vector<pair<ll, ll>> arr;
//     map<ll, ll> mp;
//     for (ll i = 0; i < n; i++)
//     {
//       ll a, b;
//       cin >> a >> b;
//       if (a == b)
//       {
//         mp[a]++;
//       }
//       arr.push_back({a, b});
//     }
//     // for (auto it : mp)
//     // {
//     //   cout << it.first << " " << it.second << endl
//     //        << endl;
//     // }
//     string s = "";
//     for (auto it : arr)
//     {
//       ll a = it.first, b = it.second;

//       if (a == b)
//       {
//         if (mp[a] > 1)
//           s += '0';
//         else
//           s += '1';
//       }
//       else
//       {
//         bool flag = true;
//         for (ll i = a; i <= b; i++)
//         {
//           if (!mp.count(i))
//           {
//             flag = false;
//             break;
//           }
//         }
//         if (flag)
//           s += '0';
//         else
//           s += '1';
//       }
//     }
//     cout << s << endl;
//   }

//   return 0;
// }
