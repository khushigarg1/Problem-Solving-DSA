#include <bits/stdc++.h>
using namespace std;

int findmin(int arr[], int n)
{
    int min = 0;
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a;
        cin >> a;
        int arr[a];
        int sum = 0, flag = 0;
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2)
            {
                sum++;
            }
            if (arr[i] == 1)
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            cout << "CHEF" << endl;
        }
        else if (sum % 2 == 0)
        {
            cout << "CHEFINA" << endl;
        }
        else
        {
            cout << "CHEF" << endl;
        }
    }

    return 0;
}