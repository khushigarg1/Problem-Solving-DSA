#include <iostream>
using namespace std;
int main()
{
    int i, j;
    char ch;

    for (i = 1; i < 5; i++)
    {
        ch = 65;
        for (j = 1; j < 8; j++)
        {
            if (j >= 5 - i && j <= 3 + i)
            {
                if (j <= 4 && j >= 6 - i)
                {
                    cout << ch;
                    ch = ch + 1;
                }

               else if (j >= 4 && j <= 2 + i)
                {
                    ch = ch - 2;
                    cout << ch;
                    ch = ch + 1;
                }
                else if (j == 5 - i || j==3+i)
                 {
                    cout <<"1";
                 }
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