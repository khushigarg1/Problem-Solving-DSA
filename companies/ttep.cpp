#include <iostream>
#include <sstream>
#include <map>

using namespace std;

int main()
{
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

    return 0;
}
