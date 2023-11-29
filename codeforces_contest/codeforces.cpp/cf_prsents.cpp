#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
    int n, i,a;
    cin >> n;
    vector<int> b(n+1);
    for (i = 1; i <= n; i++)
    {
        cin >> a;
        b[a] = i;
    }
    for (i = 1; i <= n; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}
/*
2 3 4 1 
| | | |
1 2 3 4

1 2 3 4
| | | |
4 1 2 3 
*/