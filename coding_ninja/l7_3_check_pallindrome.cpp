#include<bits/stdc++.h>
using namespace std;

int pallindrome(string str ,int n , int start , int end)
{
    if(n==0 || start ==end )
    {
        return true;
    }
    if(str[start ] != str[end ])
    {
        return false;
    }
        bool ans = pallindrome(str ,n-2, start +1 , end -1);
        return ans;
}

bool ispallindrome(string str)
{
    int n = str.length() ;
    int s = 0;
    return pallindrome(str ,n , s , n-1);
}

int main(){
    string str;
    //  = "12342" ;
    cin >> str;
    if( ispallindrome(str) )
    {
        cout << "pallindrome"<<endl;
    }
    else
    {
        cout <<"non pallindrome" <<endl;
    }
return 0;
}