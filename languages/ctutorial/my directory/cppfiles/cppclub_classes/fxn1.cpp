#include<iostream>
#include<vector>
#include<string>
#include<math.h>
#include<stack>
#include<algorithm>
using namespace std;

int main()
{
    int a,result;
    float b;
    cin>>a>>b;
    if(a%5==0 && b>a)
    {
        result=b-a-0.50;
    }
    cout<<result;
    return 0;
}
