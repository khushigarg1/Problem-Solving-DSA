#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int tt= 1 ; tt <= t ; tt++)
    {
        string I;
        string P;
        cin >> I >> P;
        if(P.length() < I.length())
        {
            cout << "Case #"<<tt <<": " << "IMPOSSIBLE"<<endl;
            continue;
        }
        sort(I.begin() , I.end());
        sort(P.begin(), P.end());
        cout << I << " "<<P<<endl;
        int count = 0;
        int flag = 1;
        int m = 0 , n = 0;
        for(int j = 0 ; j < P.length() && n<P.length(); j++)
        {
            if(I[m] == P[n] && m< I.length() && n < P.length())
            {
                m++; n++;
                // continue;
            }
            else if(I[m] > P[n] && m< I.length() && n < P.length())
            {
                count++;
                n++;
                // continue;
            }
            else if(I[m] < P[n] && m< I.length() && n < P.length())
            // else
            {
                flag = 0;
                break;
            }
            else if(m >= I.length() && n< P.length())
            {
                count++;
                n++;
            }
        }
        if(flag == 0 || m!=I.length())
        {
            cout << "Case #"<<tt <<": " << "IMPOSSIBLE"<<endl;
        }
        else
        {
            cout << "Case #"<<tt <<": " << count<<endl;
        }
    }
return 0;
}   

