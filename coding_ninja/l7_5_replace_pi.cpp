#include<bits/stdc++.h>
using namespace std;

char* Replacepi(char str[] , int n)
{
    if(str[n] == '\0')
    {
        return str; 
    }

    str = Replacepi(str  , n + 1);
    if(str[0] == 'p' && str[1] == 'i')
    {
        for(int i = strlen(str) + 2 ; i >= 0; i--)
        {
            str[i] = str[i-2];
        } 
        str[0] = '3';
        str[1] = '.';        
        str[2] = '1';        
        str[3] = '4';
    }
    if( str[n] == 'p' && str[n + 1] == 'i')
    {
        for(int i = strlen(str) + 2 ; i >= n; i--) 
        {
            str[i] = str[i-2];
        }
        str[n] = '3';
        str[n + 1] = '.';
        str[n + 2] = '1';        
        str[n + 3] = '4';   
    }
    return str;
}

void Replace(char str[] )
{
    Replacepi( str , 0);
}

int main(){
    char str[100] ;
    cin >> str;
    Replace(str);
    cout << str;
return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
 
// return 0;
// }