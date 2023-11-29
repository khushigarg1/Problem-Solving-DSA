#include<bits/stdc++.h>
using namespace std;
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    int ans=0; 
	    for(int i =0 ; i < n ;i++)
	    {
	        if(arr[i] == x)
	        {
	            ans++;
	        }
	    }
	   return ans;
    }
};
int main(){
    int n , x;
    cin >> n >>x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    Solution obj;
    auto ans = obj.count(arr , n , x);
    cout << ans;
    
return 0;
}