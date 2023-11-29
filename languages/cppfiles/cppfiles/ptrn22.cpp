#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter number ";
    cin >> n;
    int temp = 1;
    for (int i = 1; temp <= (n * 2 - 1);)
    {
        for (int j = 1; j <= (2 * i) - 1;)
        {
            if (j == 1 || j == ((2 * i) - 1))
            {
                cout << "* ";
                j++;
            }
            else
            {
                int count = 1;
                while (count < i && j < (2 * i) - 1)
                {
                    cout << count << " ";
                    if (j < i)
                    {
                        count++;
                        j++;
                    }
                    else
                    {
                        count--;
                        j++;
                    }
                }
            }
        }
        cout << endl;
        if (temp < n)
        {
            i++;
        }
        else
        {
            i--;
        }
        temp++;
    }
    // for (int i=(n-1); i>0; i--)
    // {
    //     for(int j = 1; j <= ((2*i)-1); )
    //     {
    //         if(j==1 || j==(2*i-1))
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             int count
    //         }
    //     }
    // }

    return 0;
}