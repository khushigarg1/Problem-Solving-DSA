#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >>t;
  while (t--)
  {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    cin >> arr[0];
    int maxx = arr[0];
    
    for(int i = 1; i < n; i++)
    {
      cin >> arr[i];
      maxx = max(maxx, arr[i] - arr[i-1]);
    }
    if(n>0)
    {      
      maxx = max(maxx, 2*(k - arr[n-1]));
    }
    if(n==0)
    {
      maxx =k*2;
    }
    cout << maxx<<endl;
  }
  return 0;
}