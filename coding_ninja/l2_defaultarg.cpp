#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;
//  si = start index
int sum (int a[] , int size ,int si =0){
    int ans =0;
    for ( int i = si ; i < size ; i++)
    {
        ans += a[i];
    }
    return ans;
}

int sum2 ( int a, int b=0 , int c=0, int d=0)  // we had make 4 fxn and it returns sum 2 baki ydi apn value nh denge to default value 
{
    return a+ b+ c+ d;
}

int main(){
    int a[20];
    cout << sum(a,20,0) << endl;
    cout << sum(a,20) << endl;

    cout << sum2(1,2,3,4) << endl;
    cout << sum2(1,2,3) << endl;
    cout << sum2(1,2) << endl;
    cout << sum2(1) << endl;


    //  default value right most se starthona chiye
return 0;
}