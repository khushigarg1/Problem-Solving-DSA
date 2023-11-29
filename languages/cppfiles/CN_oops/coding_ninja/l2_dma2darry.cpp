#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cin >> m >> n;
    int** p = new int*[m];
    for (int i = 0; i < m; i++)
    {
        p[i] = new int[n];
        for (int j = 0; j < n; i++)
        {
            cin >> p[i][j];
        }
    }

    delete [] p;
    for (int i = 0; i < m; i++)
    {
        delete [] p[i];
    }
}
/*
if we make array of 5,10 then total memory allocation
int** p = new int*[5]    //8 bytes 5*8
p[i] = new int[10]     / 8 bytes
cin >> p[i] [j]     // 50 blocks of int 50*4 = 200 bytes
*/