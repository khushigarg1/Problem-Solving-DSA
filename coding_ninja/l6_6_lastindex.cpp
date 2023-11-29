/*
0-> 5
1-> 5
2-> 5
3-> 5
4-> 6
size =5
x     ans
5     3
6     4
10    -1 

array ko toden k 2 methods hai frst tod kr usko hum handle krnge baki ko recursion handle krega 
or last vale ko break krk last ko hum handle krnge baki recursion handle krega 
ab last index me right to left travel krnge 
*/
#include<bits/stdc++.h>
using namespace std;
int lastIndex(int a[], int size, int x)
{
    if (size == 0)
    {
        return -1;
    }
    int ans = lastIndex(a + 1, size - 1, x); //5 6 5 5 6

    if (ans == -1 && a[0] == x)
    {
        return 0;
    }
    if (ans == -1)
    {
        return -1;
    }
    else
    {
        return ans + 1;
    }
}
int main(){
    int arr[5] = {5 , 5 , 6 , 5 , 6};
    // cout << lastIndex(arr , 5 , 7);
    cout << lastIndex(arr , 5 , 5);
    // cout << lastIndex(arr , 5 , 6); 
return 0;
}