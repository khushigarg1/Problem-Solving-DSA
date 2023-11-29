#include <iostream>
using namespace std;
int main()
{
    int i, j;
    char ch;

    for (i = 1; i < 5; i++)
    {
        ch = 'A';
        for (j = 1; j < 8; j++)
        {
            if (j >= 5 - i && j <= 3 + i)
            {
                 if (j <= 4)
                 {
                     cout << ch;
                 }
                 else if (j >= 4)
                {
                    ch = ch - 2;
                    cout << ch;
                }
                ch = ch + 1;
            }

            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}