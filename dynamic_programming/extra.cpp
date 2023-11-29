#include <bits/stdc++.h>
using namespace std;
void findans(int ind, string s, vector<string> &res, vector<string> &wordDict, string &ans, int n)
{
    if (ind == n)
    {
        res.push_back(ans);
        return;
    }
    string temp = "";
    for (int i = ind; i < n; i++)
    {
        cout << temp << endl;
        temp += s[i];
        if (find(wordDict.begin(), wordDict.end(), temp) != wordDict.end())
        {
            string new_ans = ans.empty() ? temp : ans + " " + temp;
            findans(i + 1, s, res, wordDict, new_ans, n);
        }
    }
}
vector<string> wordBreak(string s, vector<string> &wordDict)
{
    vector<string> ans;
    string ab;
    findans(0, s, ans, wordDict, ab, s.length());
    return ans;
}
int main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    vector<string> dict;
    for (int i = 0; i < n; i++)
    {
        string s1;
        cin >> s1;
        dict.push_back(s1);
    }
    vector<string> ans = wordBreak(s, dict);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}