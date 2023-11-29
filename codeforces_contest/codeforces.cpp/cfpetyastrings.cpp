#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
    int i;
    string a;
    string b;
    cin >> a >> b;
    for (i = 0; i < a.length(); i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        a[i]=a[i]+32;
    }
    for(i=0;i<b.length();i++)
    {
        if(b[i]>='A' && b[i]<='Z')
        b[i]=b[i]+32;
    }

        if (a == b)
        {
            cout << "0";
        }
        else if (a < b)
        {
            cout << "-1";
        }
        else if (a > b)
        {
            cout << "1";
        }
    return 0;
}