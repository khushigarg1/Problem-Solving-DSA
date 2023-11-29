#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        string str1, str2;
        cin >> str1 >> str2;
        int x1=0, s1=0, l1=0, m1=0;
        int x2=0, s2=0, l2=0, m2=0;
        for(int i = 0 ; i < str1.length();i++){
            if(str1[i] == 'X')
                x1++;
            else if(str1[i] == 'S')
                s1++;
            else if(str1[i] == 'L')
                l1++;
            else
            {
                m1++;
            }    
        }
        for(int i = 0 ; i < str2.length();i++){
            if(str2[i] == 'X')
                x2++;
            else if(str2[i] == 'S')
                s2++;
            else if(str2[i] == 'L')
                l2++;
            else
            {
                m2++;
            }    
        }
        if((x1 > x2 && s1==1 && s2==1) || (x1>x2 && s1==1 && m2==1) || (x1>x2 && s1==1 && l2==1) || ( s1==1 && m2==1) || (s1==1 && l2==1) || ( m1==1 && l2==1) )
        {
            cout << "<" <<endl;
        }
        else if((x1 > x2 && l1==1 && l2==1) || (x1>x2 && l1==1 && m2==1) || (x1>x2 && l1==1 && s2==1) || ( m1==1 && s2==1) || ( l1==1 && m2==1) || ( l1==1 && s2==1))
        {
            cout << ">" <<endl ;
        }
        else if((x1==x2) && (s1==s2  || l1==l2 || m1==m2))
        {
            cout << "="<<endl;
        }
        else
        {
            return -1;
        }
    }
    
    return 0;
}  