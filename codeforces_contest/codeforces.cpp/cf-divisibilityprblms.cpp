#include<iostream>
using namespace std;

long long int divisible(long long int a , long long int b){
    if(a%b == 0){
        return 0;
    }
    else if(a < b)
    {
        return b-a ;
    }
    else
    {
        return b - (a%b);
    }
}
int main(){
    int t ;
    long long int a , b;
    cin >> t;

    for(int i =0 ; i < t ; i++){
        cin >> a>> b;
        cout << divisible(a,b);
    }
return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t , count =0;
    long long int a , b;
    cin >> t ;
    for(int i =0 ; i <=t ; i++){
        cin >> a >> b;
        while(a%b!=0){
            if(a%b==0){
                cout << "0";
            }
            else if(a&b!=0)
            {
                a = a+1;
                count ++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
*/

/*
#include<iostream>
using namespace std;
int main(){
    int t ;
    cin >> t;
    for(int i =0 ; i<t ; i++){
        long long int a, b;
        cin >> a >> b;
        if(a%b=0)
            cout << "0" <<endl;
        else
            cout << b-(a%b) << endl;
    }
return 0;
}
*/
