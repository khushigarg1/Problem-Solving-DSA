#include<bits/stdc++.h>
using namespace std;
int main(){
    int *arr{ new int[11]{1 , 2 ,3 , 4, 5, 6, 8 , 9, 10 , 13 ,14 } };
    int diff = arr[0] - 0;
    for(int i = 0 ; i < 11 ; i++)
    {
        if(arr[i]-i != diff)
        {
            while(arr[i] - i > diff)
            {
                cout << diff + i<<endl;
                diff++;
            }
        }
    }
return 0;
}

/*
by hashing
l = 1 , h =12 ,  n = 10
one array banaynge in which all elemnts declared 0 and now we r filling the elemnts in this array by arr elemens adn jo bhi elment 0 hai uski index ko print krva do iska mtlb ov element array me nhiZ

for(int i = 0 ; i < n ;i++)
{
    H[arr[i]]++;
}
for(i = l ; l < h ; i++)
{
    if(H[i] == 0)
    {
        cout <<  i <<endl;
    }
}
*/