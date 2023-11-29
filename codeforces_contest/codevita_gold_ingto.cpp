#include<bits/stdc++.h>
using namespace std;
int main(){
    int G;
    cin >> G ;
    int b , h;               //breadth and height
    cin >> b >> h;
    vector <int> arr(G);    //length
    for(int i = 0 ; i < 7 ; i++)
    {
        cin >> arr[i];
    }
    int largest_vol = 0;
    int vol;
    for(int i = 0 ; i < 7 ; i++)
    {
        vol = arr[i]* b * h;
        largest_vol += vol;
    }
    // cout << largest_vol<<endl;

    int shadedvol = 0;
    int flag , ans;
    for(int i = 0 ; i < 7 ; i++)
    {
        ans = 0;
        flag = 0;
        int val = h*b*arr[i];
        for(int j = i-1 ; j >= 0 ; j--)
        {
            if(arr[j] < arr[i])
            {
                flag = 1; break;
            }
            ans+=val;
        }
        flag = 0;
        for(int j = i ; j < G ; j++)
        {
            if(arr[j] < arr[i])
            {
                flag = 1;
                break;
            }
            ans+=val;
        }
        //cout << "-------->" << ans <<endl;
        if(shadedvol < ans)
        {
            shadedvol = ans;
        }
    }
    // cout << shadedvol <<endl;

    int res = (largest_vol - shadedvol);
    cout << res;
    return 0;
}