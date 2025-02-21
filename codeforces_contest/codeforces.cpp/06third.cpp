#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n, k;
    cin >> n >> k;

    vector<int> permutation(n);

    // Construct the first k elements in the permutation
    for (int i = 0; i < k; ++i)
    {
      permutation[i] = i + 1;
    }

    // Construct the remaining elements in the permutation
    for (int i = k; i < n; ++i)
    {
      permutation[i] = n - (i - k);
    }

    // Output the constructed k-level permutation
    for (int i = 0; i < n; ++i)
    {
      cout << permutation[i] << " ";
    }

    cout << endl;
  }

  return 0;
}
