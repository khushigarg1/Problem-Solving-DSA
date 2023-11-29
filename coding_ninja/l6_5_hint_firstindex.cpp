/*
an array hai like 5 size ki jisme 
0 index pr -> 5
1 -> 5 
2-> 6 
3-> 5
4-> 6
ye krha hu ahai ab hum recursion se ye chathe hai ki koi bhi ek variable dekr uska indexx pta laggaye
and yadi sime vo variablenhi hai to -1
1-> base case     -> -1
2-> recursive call      
3-> small calculation 
2-3 me se apnko choose krna hia ki phle kya krna chiye 
so we will do 3 frstly then 2 bcoz phle humcalculation krng eor starting me element hoga to starting m ehi pta chl jayga pura recursion call krne ki need nh
a[0] ==  x jab b hoga tab print 
2nd me (a+1 , size-1 , x) = ans 
abis according thod code kr lenge 
apn aarrray k do trh se cut kr skt erhia frst starting ka elemnet cut krk adn second last vala cut krk

*/
#include<bits/stdc++.h>
using namespace std;

int hint(int arr[] , int size , int x)
{
    if(size == 0 )
    {
        return -1;
    }
    if(arr[0] == x)
    {
        return 0;
    }
    int ans = hint(arr +1 , size-1 , x);
    if(ans == -1)
    {
        return -1;
    }
    else{
        return ans+1;
    }
    return ans;
}
int main(){
    int arr[5] = {5 , 5 , 6 , 5 , 6};
    // cout << hint(arr , 5 , 7);
    // cout << hint(arr , 5 , 5);
    cout << hint(arr , 5 , 6);
return 0;
}