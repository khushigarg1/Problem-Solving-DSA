

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> customer;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        customer.push_back({b, a});
    }

    vector<vector<int>> bags;

    for (int i = 0; i < m; i++)
    {
        int q, p;
        cin >> q >> p;

        bags.push_back({p, q});
    }

    sort(customer.begin(), customer.end());
    sort(bags.begin(), bags.end());

    vector<int> vis(m, 0);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int quantity = -1, ind = -1;
        for (int j = 0; j < m; j++)
        {
            if (!vis[j])
            {

                if (bags[j][0] > customer[i][0])
                    break;

                if (bags[j][1] > customer[i][1])
                {
                    if (quantity == -1)
                    {
                        quantity = bags[j][1];
                        ind = j;
                    }
                    else
                    {
                        if (quantity > bags[j][1])
                        {
                            ind = j;
                            quantity = bags[j][1];
                        }
                    }
                }
            }
        }

        if (ind != -1)
        {
            vis[ind] = 1;
            ans++;
        }
    }
    cout << ans << endl;
}