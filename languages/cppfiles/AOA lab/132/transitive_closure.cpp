#include <bits/stdc++.h>
using namespace std;

void transitiveclosure(int arr[4][4])
{
    for(int k = 0 ; k < 4 ; k++)
    {
        for(int i = 0 ; i < 4 ; i++)
        {
            for(int j=0;j<4;j++)
            {
                if(arr[i][j] || arr[i][k] && arr[k][j])
                {
                    arr[i][j] = 1;
                }
            }
        }
    }
}
int main(){
    int arr[4][4];
    for(int i=0; i<4;i++)
    {
        for(int j = 0 ; j <4;j++)
        {
            cin >> arr[i][j];
        }
    }
    transitiveclosure(arr);
    cout<<endl;

    for(int i = 0 ; i < 4;i++)
    {
        for(int j =0; j < 4;j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
 
    return 0;
}