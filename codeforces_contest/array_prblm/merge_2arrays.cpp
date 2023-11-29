//merging two arrays without using another space
#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public :
        void mergearr(int arr1[] , int arr2[] , int n , int m)
        {
            int i = 0 , j = 0 , k = n-1;
            while (i <= k && j < m)
            {
                if(arr1[i] < arr2[j])
                {
                    i++;
                }
                else
                {
                    swap(arr1[k--], arr2[j++]);
                }
    // for (int i = 0; i < n; i++)
    // {
    //     /* code */
    //     cout << arr1[i] <<" ";
    // }
    // for (int i = 0; i < m; i++)
    // {
    //     /* code */
    //     cout << arr2[i] <<" ";
    // }
    // cout << endl;
            }
            sort(arr1 , arr1+n);
            sort(arr2 , arr2+m);
        }
};
int main(){
    int n , m ;
    cin >> n >> m;
    int arr1[n] , arr2[m];
    for(int i =0 ; i < n ; i++)
    {
        cin >> arr1[i];
    }
    for(int j = 0 ;j < m ; j++)
    {
        cin >> arr2[j];
    }
    Solution s1;
    s1.mergearr(arr1, arr2 , n , m);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr1[i] <<" ";
    }
    for (int i = 0; i < m; i++)
    {
        /* code */
        cout << arr2[i] <<" ";
    }
    
return 0;
}