#include<bits/stdc++.h>
using namespace std;
class solution
{
    public:
        int min_distance(int arr[] , int n , int x , int y)
        {
            int i, j;
            int min_dist = n+1;
            for (i = 0; i < n; i++) {
                for (j = i + 1; j < n; j++) {
                    if ((x == arr[i] && y == arr[j] || y == arr[i] && x == arr[j]) && min_dist > abs(i - j))
                    {
                        min_dist = abs(i - j);
                    }
                }
            }
            if (min_dist > n) {
                return -1;
            }
            return min_dist;
        }
};
int main(){
    int n ;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
    }
    int x , y;
    cin >> x >> y;
    solution obj;
    cout << obj.min_distance(a , n , x , y);
return 0;
}