
// 1 2 4 -1 -1 6 -1 -1 3 8 -1 -1 9 -1 -1
#include <bits/stdc++.h>
using namespace std;

string encryptt(int key, string name, vector<vector<char>> &matrix)
{
    int n = name.length();
    // int key = key.length();
    string s = "";
    int k = -1;
    int row = 0, col = 0;

    int ind = 0;
    for (int i = 0; i < n; i++)
    {
        matrix[row][col++] = name[ind++];
        if (row == 0 || row == (key - 1))
        {
            k = (-1 * k);
        }
        row = row + k;
    }
    for (int i = 0; i < key; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] != '/')
            {
                // cout << matrix[i][j];
                s += matrix[i][j];
            }
        }
    }
    for (int i = 0; i < key; i++)
    {
        for (int j = 0; j < name.length(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return s;
}

string decrypt(int key, string name, vector<vector<char>> &matrix)
{
    int n = name.length();
    int row = 0, col = 0, k = -1;
    int ind = 0;
    string s = "";
    for (int i = 0; i < n; i++)
    {
        matrix[row][col++] = '/';
        if (row == 0 || row == key - 1)
        {
            k = -1 * k;
        }
        row += k;
    }
    for (int i = 0; i < key; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == '/')
            {
                matrix[i][j] = name[ind++];
            }
        }
    }
    k = -1, row = 0, col = 0;
    for (int i = 0; i < n; i++)
    {
        s += matrix[row][col++];
        if (row == 0 || row == key - 1)
        {
            k = k * -1;
        }
        row += k;
    }
    return s;
}
int main()
{
    string name;
    int key;
    cout << "enter a message " << endl;
    getline(cin, name);
    cout << "enter a key " << endl;
    cin >> key;

    // char matrix[key.length()][name.length()];
    // char **matrix = new char *[key.length()][name.length()];
    vector<vector<char>> matrix(key, vector<char>(name.length(), '/'));

    string encrpytedmsg = encryptt(key, name, matrix);
    // for (int i = 0; i < key; i++)
    // {
    //     for (int j = 0; j < name.length(); j++)
    //     {
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    cout << encrpytedmsg;

    vector<vector<char>> matrix1(key, vector<char>(name.length(), '*'));
    string decryptedmsz = decrypt(key, encrpytedmsg, matrix1);
    cout << decryptedmsz;
    return 0;
}