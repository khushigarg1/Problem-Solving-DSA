#include <iostream>
using namespace std;

int main()
{
    int i, j, x = 0, y = 0;
    for (i = 1; i < 6; i++)
    {
        if (i % 2 == 0)
        {
            for (j = 5 - x; j >= i - x; j--)
            {
                cout << j;
                x++;
            }
        }
        else
        {
            for (j = i - y; j <= 5 - y; j++)
            {
                cout << j;
                y++;
            }
        }
        cout << endl;
    }
    return 0;
}