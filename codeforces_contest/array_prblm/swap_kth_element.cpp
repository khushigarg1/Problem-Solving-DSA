#include<bits/stdc++.h>
using namespace std;

class Solution{
public:	
	// swap k'th element from beginning and end
	void swapKth(int *arr, int n, int k) {
	    // code here
	    for(int i=0 ; i <n ; i++)
	    {
	        if(i == k-1 )
	        {
	            int temp = arr[k-1];
	            arr[k-1] = arr[n-k];
	            arr[n-k] = temp;
	        }
	    }
	}
};

int main(){
    int n , k ;
    cin >> n >>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    Solution obj;
    obj.swapKth(arr , n , k);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] <<" ";
    }
    
return 0;
}