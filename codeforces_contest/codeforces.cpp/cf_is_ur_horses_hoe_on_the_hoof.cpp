#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    int arr[10] , sum=0;
    for(int i=0;i<4 ;i++){
        cin >> arr[i];
    }
    // for(int i =0 ;i<4;i++){
    //     if(arr[i]>arr[i+1])
    //     { 
    //         int temp = arr[i];
    //         arr[i] = arr[i+1];
    //         arr[i+1] = temp;
    //     }
    // }
    sort(arr ,arr + 4);
    for(int i =0; i<4;i++){
        if(arr[i] == arr[i+1]){
            sum++;
        }
    }
    cout <<sum;
return 0;
}