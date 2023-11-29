#include <bits/stdc++.h>
using namespace std;

void solveboard(int col, vector<int> &board) int main()
{
    int n;
    cin >> n;
    vector<vector<char>> board(n, vector<char>(n, '.'));
    vector<vector<char>> ans(n, vector<char>(n,   ''));

    vector<int> left(n, 0);
    vector<int> upperdi(2 * n - 1, 0);
    vector<int> lowerdi(2 * n - 1, 0);
    solveboard(0, board, ans, n, left, upperdi, lowerdi);

    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n; i++)
        {
            cout << board[i] << " ";
        }
        cout << endl;
    }

    return 0;
}