#include<iostream>
#include<string.h>
#include<algorithm>
#include<conio.h>
using namespace std;

int main(){
    string str1 , str2 , str3;
    cin >> str1 >> str2 >> str3;
    string s = str1 + str2;

    sort(s.begin() , s.end());
    sort(str3.begin() , str3.end());

    if (s.length() <= 100)
    {
        if(s == str3)
        {
            cout << "YES"<<endl ;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
return 0;
}
    // for(int i = 0 ; i <s.length() ; i++)
    // {
    //     if(s[i] > s[i+1])
    //     {
    //         char temp = s[i] ;
    //         s[i] = s[i+1];
    //         s[i+1] = temp;
    //     }
    // }
    // for(int j = 0 ; j < str3.length() ; j++)
    // {
    //     if(str3[j] > str3[j+1])
    //     {
    //         char temp = str3[j];
    //         str3[j] = str3[j+1];
    //         str3[j+1] = temp;
    //     }
    // }