#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ,count =0;
    cin >> n;
    string str;
    cin >> str[0];
    for(int i = 1 ; i < n ; i++)
    {
        cin >> str[i];
    }
    for (int i = 0 ; i < n ; i++)
    {
        for(int j = 1; j < n ; j++)
        {
            if(str[i] > str[j])
            {
                int temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    for (int i = 1; i < n; i++)
    {
        if(str[0] != str[i] )
        {
            count++;
        }
        str[0] = str[i];
    }
    if(count == n-1)
    {
        cout << "No";
    }
    else
    cout <<"YES";
    
return 0;
}