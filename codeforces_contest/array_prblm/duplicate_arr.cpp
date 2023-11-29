#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public :
        vector<int> duplicates(int arr[] , int n)
        {
            sort(arr , arr+n);
            int count =0;
            for(int i = 0 ;i < n-1 ; i++)
            {
                if(arr[i] == arr[i+1])
                {
                    cout << arr[i] <<" ";
                }
                else
                {
                    count ++;
                }
            }
            if(count == n-1)
            {
                cout << "-1";
            }
    }
};
int main(){
    int n ;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    Solution s1;
    s1.duplicates(arr , n);
return 0;
}