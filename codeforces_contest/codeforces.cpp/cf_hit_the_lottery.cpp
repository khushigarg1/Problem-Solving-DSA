#include<iostream>
using namespace std;
int main(){
    int n ;
    int count =0 , den;
    cin >> n;
    int a[] = {100 , 20, 10 ,5 ,1};
    for(int i =0 ; i <5; i++)
    {
            count += n/a[i];
            den = n%a[i];
    }
    cout << count;
    return 0;
}

