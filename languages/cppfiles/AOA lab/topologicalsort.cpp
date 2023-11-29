#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int matrix[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> matrix[i][j];
        }
    }
    vector<int> v;
    stack<int> st2;

    for (int i = 0; i < a; i++)
    {
        v.push_back(i+1);
    }

    while (v.size() != 0)
    {
        for (int i = 0; i < a; i++)
        {
            int count = 0;
            for (int j = 0; j < b; j++)
            {
                if (matrix[i][j] == 0)
                {
                    count++;
                }
            }
            // cout << count;
            if (count == a)
            {
                int flag = 0;
                for (int m = 0; m < v.size(); m++)
                {
                    flag = 1;
                    if (v[m] == i + 1)
                    {
                        flag = 1;
                    }
                }
                if (flag == 1)
                {
                    while (!v.size())
                    {
                        cout << v[i] << " ";
                    }
                    cout << endl;
                    st2.push(i + 1);
                    v.erase(find(v.begin(), v.end(), i + 1));
                    while (!v.size())
                    {
                        cout << v[i] << " ";
                    }
                    cout << endl;
                    for (int l = 0; l < a; l++)
                    {
                        matrix[l][i + 1] = 0;
                    }
                }
            }
            while (!st2.empty())
            {
                cout << st2.top() << " ";
                st2.pop();
            }
        }
    }

    while (!st2.empty())
    {
        cout << st2.top() << " ";
        st2.pop();
    }
}
