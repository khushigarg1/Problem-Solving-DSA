#include<bits/stdc++.h>
using namespace std;

void subString(string s, int n)
{
    int z = 0;
    string arr[];
	for (int i = 0; i < n; i++)
    {
        for (int len = 1; len <= n - i; len++)
        {			
            arr[z++] == s.substr(i, len) ;
        }
    }
}

int main()
{
	string s = "abcd";
	subString(s,s.length());
	return 0;
}
