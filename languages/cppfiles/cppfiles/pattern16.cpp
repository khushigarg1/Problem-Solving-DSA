#include <iostream>
using namespace std;

int main()
{
    int i, j, c;
    c = 1;
    for (i = 1; i < 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout<<c<<"\t";
            c++;
        }
        cout << "\n";
    }
}