#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007

// ll factorial(ll num)
// {
//   vector<long long> factorial(num + 1);

//   factorial[0] = 1;

//   for (int i = 1; i <= num; i++)
//   {
//     factorial[i] = i * factorial[i - 1];
//   }
//   return factorial[num];
// }

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  ll t;
  cin >> t;
  while (t--)
  {
    ll n, d;
    cin >> n >> d;

    string s = "1";

    if (d == 3 or d == 6 or d == 9)
    {
      s += " 3";
    }
    else if (n >= 3)
    {
      s += " 3";
    }

    if (d == 5)
    {
      s += " 5";
    }

    if (n == 7)
    {
      s += " 7";
    }
    else if (n > 2)
    {
      s += " 7";
    }

    if (d == 9)
    {
      s += " 9";
    }
    else if (d == 3 or d == 6)
    {
      if (n >= 3)
      {
        s += " 9";
      }
    }
    else if (n >= 6)
    {
      s += " 9";
    }

    cout << s << endl;
    // ll n, k;
    // cin >> n >> k;
    // set<int> arr;
    // arr.insert(1);

    // if (k % 3 == 0)
    //   arr.insert(3);

    // if (k % 5 == 0)
    //   arr.insert(5);

    // if (k % 7 == 0)
    //   arr.insert(7);

    // if (k % 9 == 0)
    //   arr.insert(9);

    // if (n >= 3)
    // {
    //   arr.insert(3);
    //   arr.insert(7);
    //   if (k == 3 || k == 6)
    //   {
    //     arr.insert(9);
    //   }
    // }
    // // if (n >=6 == 0)
    // // {
    // //   arr.insert(7);
    // // }
    // if (n >= 6)
    // {
    //   arr.insert(9);
    // }

    // for (auto it : arr)
    // {
    //   cout << it << " ";
    // }
    // cout << endl;
  }

  return 0;
}