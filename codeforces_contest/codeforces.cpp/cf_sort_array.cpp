#include<bits/stdc++.h>
using namespace std;
bool check_sort(int arr[] , int n )
{
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = i ; j < n ; j++)
        {
            if(arr[i] > arr[j])
            {
                return false;
            }
        }
    }
    return true;
}
int main(){
    int n ;
    cin>> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }
    bool frst = check_sort(arr , n);
    bool flag;
    int l , r;
    for(int i = 0 ; i < n ; i++)
    {
        int j = i+1;
        while (j!= n)
        {
            if(arr[i]>arr[j])
            {
                l = i;
                r = j;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                flag = check_sort(arr,n);
                break;
            }
            j++;
        }
            cout << arr[i] << " "<<arr[j] <<endl;
    }
    if(frst == true)
    {
        cout << "YES"<<endl;
        cout << 1 <<" "<<1 ;
    }
    else if(flag == true)
    {
        cout << "YES"<<endl;
        cout << arr[l] <<" "<<arr[r];
    }
    else{
        cout << "NO";
    }
    return 0;
}