#include <iostream>
using namespace std;

int main()
{
    int i, j;
    // cout << "enter no of rows" << endl;
    // cin >> i;
    // cout << "enter no. of columns" << endl;
    // cin >> j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (j >= 4 - i && j <= 4 + i)
            {
                cout <<"*";
            }
            else
            {
                cout <<" "; 
            }
        }
        cout<<"\n";
    }
    return 0;
}