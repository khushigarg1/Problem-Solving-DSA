#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007

int main()
{
  ll n;
  cin >> n;
  vector<ll> arr(n);
  map<ll, ll> mp; // rem:- frequency
  ll remainder = 0;
  ll sum = 0;

  mp[0]++;
  for (ll i = 0; i < n; i++)
  {
    cin >> arr[i];

    remainder = ((remainder + arr[i]) % n + n) % n;
    sum += mp[remainder];
    mp[remainder]++;
    // cout << mp[remainder] <<": "<< remainder << " "<<sum<<endl
  }
  cout << sum << endl;
}
