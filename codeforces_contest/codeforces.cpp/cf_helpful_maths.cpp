#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    int count1=0 , count2=0 , count3=0 , count=0;
    for (int i = 0; i < str.length(); i+=2)
    {
        /* code */
        for(int j = i; j < str.length();j+=2)
        {
            if(str[i]>str[j])
            {
                int temp = str[i];
                str[i]= str[j];
                str[j] =temp;
            }
        }
    }
    for (int i = 0; i < str.length(); i++)
    {
        /* code */
        cout << str[i];
    }
    
return 0;
}