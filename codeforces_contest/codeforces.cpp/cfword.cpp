#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
    int i, l = 0, u = 0;
    string s;
    cin >> s;
    for (i = 0;i<s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            l++;
        }
        else
        {
            u++;
        }
    }
    if(u>l)
    {
        for (i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] = s[i] - 32;
            }
        }
    }
    else
    {
        for (i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] = 32 + s[i];
            }
        }
    }

    cout << s;
    return 0;
}