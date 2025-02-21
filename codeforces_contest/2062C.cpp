#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> transform(const vector<ll> &arr)
{
  vector<ll> transformed;
  for (size_t i = 1; i < arr.size(); ++i)
  {
    transformed.push_back(arr[i] - arr[i - 1]);
  }
  return transformed;
}

ll arraySum(const vector<ll> &arr)
{
  ll sum = 0;
  for (ll i = 0; i < arr.size(); i++)
  {
    sum += arr[i];
  }
  return sum;
}

int main()
{
  ll t;
  cin >> t;
  while (t--)
  {
    ll n;
    cin >> n;

    vector<ll> arr(n);
    for (ll i = 0; i < n; ++i)
    {
      cin >> arr[i];
    }

    ll maxSum = arraySum(arr);

    while (arr.size() > 1)
    {
      vector<ll> normalTransformed = transform(arr);
      ll normalSum = arraySum(normalTransformed);

      vector<ll> reversedArr = arr;
      reverse(reversedArr.begin(), reversedArr.end());
      vector<ll> reversedTransformed = transform(reversedArr);
      ll reversedSum = arraySum(reversedTransformed);

      if (reversedSum > normalSum)
      {
        arr = reversedTransformed;
        maxSum = max(maxSum, reversedSum);
      }
      else
      {
        arr = normalTransformed;
        maxSum = max(maxSum, normalSum);
      }

      // for (ll val : arr)
      // {
      //   cout << val << " ";
      // }
      // cout << "\n";
    }

    cout << maxSum << "\n";
  }
  return 0;
}