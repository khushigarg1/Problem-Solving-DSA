#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int flag = 0;
    while (t--)
    {
        char arr[8][8];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> arr[i][j];
            }
        }
        int countr = 0;
        int countb = 0;
        int count = 0;
        for (int i = 0; i < 8; i++)
        {
            countr = 0;
            countb = 0;
            count = 0;
            for (int j = 0; j < 8; j++)
            {
                if (arr[i][j] == 'R')
                {
                    countr++;
                }
                else if (arr[i][j] == 'B')
                {
                    countb++;
                }
                else
                {
                    break;
                }
            }
            if (countr == 8)
            {
                cout << "R" << endl;
                flag = 1;
                break;
            }
            if (countb == 8)
            {
                cout << "B" << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            for (int i = 0; i < 8; i++)
            {
                countr = 0;
                countb = 0;
                count = 0;
                for (int j = 0; j < 8; j++)
                {
                    if (arr[j][i] == 'R')
                    {
                        countr++;
                    }
                    else if (arr[j][i] == 'B')
                    {
                        countb++;
                    }
                    else
                    {
                        break;
                    }
                }
                if (countr == 8)
                {
                    cout << "R" << endl;
                    break;
                }
                if (countb == 8)
                {
                    cout << "B" << endl;
                    break;
                }
            }
        }
    }
    return 0;
}