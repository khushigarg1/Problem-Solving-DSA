#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int row , col;
        cin >> row >> col;
        int multi = row*col;
        if(row%2 == 0 && col%2==0)
            cout << "0"<<endl;
        if(row%2!=0 && col%2==0)
            cout << col << endl;
        if(row%2==0 && col%2!=0)
            cout << row << endl;
        if(row%2!=0 && col%2!=0)
            cout << (row + col)-1 <<endl;
    }
    
 
return 0;
}