
#include <iostream>
#include <vector>
#include <sstream>
#include <map>
#include <algorithm>

using namespace std;

// vector<string> getItems(const string &itemStr)
// {
//     vector<string> items;
//     stringstream ss(itemStr);
//     string item;
//     while (getline(ss, item, ' '))
//     {
//         items.push_back(item);
//     }
//     return items;
// }

void findItemsToBuy(int n, vector<int> &tokens, vector<int> &claim, int k, map<string, int> &items)
{
    int maxTokens = 0;
    int startIndex = 0;

    for (int i = 0; i <= n - k; ++i)
    {
        int sum = 0;
        for (int j = i; j < i + k; ++j)
        {
            if (claim[j] == 0)
            {
                sum += tokens[j];
            }
        }
        if (sum > maxTokens)
        {
            maxTokens = sum;
            startIndex = i;
        }
    }
    // cout << maxTokens << " " << startIndex << endl;

    vector<string> selectedItems;
    for (int i = startIndex; i < startIndex + k; ++i)
    {
        if (claim[i] == 0)
        {
            claim[i] = 1;
        }
    }
    int totalSum = 0;
    for (int i = 0; i < claim.size(); i++)
    {
        if (claim[i] == 1)
        {
            totalSum += tokens[i];
        }
    }

    int maxx = 0;
    for (auto &item : items)
    {
        if (item.second > maxx && item.second < totalSum)
        {
            maxx = item.second;
        }
    }

    for (auto &item : items)
    {
        // cout << item.first << " " << item.second << endl;
        if (item.second == maxx)
        {
            selectedItems.push_back(item.first);
        }
    }

    sort(selectedItems.begin(), selectedItems.end());
    for (const auto &item : selectedItems)
    {
        cout << item << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    vector<int> tokens(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> tokens[i];
    }

    vector<int> claim(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> claim[i];
    }

    int k;
    cin >> k;

    // string itemsStr;
    // cin.ignore();
    // getline(cin, itemsStr);

    // map<string, int> itemsMap;
    // vector<string> items = getItems(itemsStr);
    // for (int i = 0; i < items.size(); ++i)
    // {
    //     int cost;
    //     cin >> cost;
    //     itemsMap[items[i]] = cost;
    //     // itemsMap[cost] = items[i];
    // }
    cin.ignore();
    string itemsStr;
    getline(cin, itemsStr);

    map<string, int> itemsMap;

    istringstream iss(itemsStr);
    string item;
    while (getline(iss, item, ' '))
    {
        string itemName;
        int cost;
        stringstream itemStream(item);
        getline(itemStream, itemName, ':');
        itemStream >> cost;
        itemsMap[itemName] = cost;
    }

    // Printing the items and their costs stored in the map
    for (const auto &item : itemsMap)
    {
        cout << item.first << ": " << item.second << endl;
    }

    // for (auto item : items)
    // {
    //     cout << item;
    // }

    findItemsToBuy(n, tokens, claim, k, itemsMap);

    return 0;
}
