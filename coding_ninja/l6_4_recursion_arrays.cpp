/* array given and we have to sort it by recursion and check it 
*/
#include<bits/stdc++.h>
using namespace std;


bool sorted(int a[] , int size)
{
    if(size==0 || size==1)
    {
        return true;
    }
    if(a[0] >a[1])
    {
        return false;
    }
    bool issmallersorted = sorted(a+1 , size-1);
    return issmallersorted;
    // if(issmallersorted)
    // {
    //     return true;
    // }
    // else{
    //     return false;
    // }
}
int main(){

return 0;
}