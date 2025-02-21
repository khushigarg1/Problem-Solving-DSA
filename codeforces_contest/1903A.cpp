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
    int issorted=true;
    for(int i =1;i<n;i++)
    {
      cin >> arr[i];
      if(arr[i] < arr[i-1])
      {
        issorted=false;
      }
    }
    if(!issorted && (k==0 || k==1))
    {
      cout << "NO" <<endl;
    }
    else{
      cout << "YES"<<endl;
    }
  }
  return 0;
}