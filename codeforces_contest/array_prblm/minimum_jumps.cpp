//minimum number of jumps to reach end
//GREEDY ALGOO
#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public :
        int minJump(int arr[] , int n)
        {
            if(n <= 1)
            {
                return 0;     //only one element is there
            }
            if(arr[0] == 0)
            {
                return -1;   //not possible to jump
            }
            int maxr = arr[0];
            int step = arr[0];
            int jump = 1;
            for(int i = 1 ; i < n ; i++)
            {
                if( i == n-1)
                    return jump;
//updating maxr
                maxr = max(maxr , i+arr[i]);
// we use a step to get to the current index
                step--;
// If no further steps left
                if(step == 0)
                {
                    jump++;
//  Check if the current index/position or lesser index is the maximum reach point from the previous indexes
                    if(i >= maxr)
                    {
                        return -1;
                    }
// re-initialize the steps to the amount of steps to reach maxReach from position i.
                    step = maxr - i;
                }
            }
            return -1;
        }
};
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;
        cin >> n ;
        int arr[n];
        for(int i =0 ; i < n ; i++)
        {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minJump(arr , n );
    }
    
return 0;
}

// C++ program to find Minimum
// number of jumps to reach end
// #include <bits/stdc++.h>
// using namespace std;

// // Function to return the minimum number
// // of jumps to reach arr[h] from arr[l]
// int minJumps(int arr[], int n)
// {

//     // Base case: when source and
//     // destination are same
//     if (n == 1)
//         return 0;

//     // Traverse through all the points
//     // reachable from arr[l]
//     // Recursively, get the minimum number
//     // of jumps needed to reach arr[h] from
//     // these reachable points
//     int res = INT_MAX;
//     for (int i = n - 2; i >= 0; i--) {
//         if (i + arr[i] >= n - 1) {
//             int sub_res = minJumps(arr, i + 1);
//             if (sub_res != INT_MAX)
//                 res = min(res, sub_res + 1);
//         }
//     }

//     return res;
// }

// // Driver Code
// int main()
// {
//     int arr[] = { 2 , 3 , 1 ,1, 2 , 4 ,2  , 0 ,1 ,1 };
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "Minimum number of jumps to";
//     cout << " reach the end is " << minJumps(arr, n);
//     return 0;
// }

