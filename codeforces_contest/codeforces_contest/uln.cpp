#include <bits/stdc++.h>
using namespace std;

bool isVowel(char ch)
{
    return (ch == 'a' || ch == 'e');
}

string breakwords(string word)
{
    // string word = reverse(str.begin(), str.end());
    string result;
    int i = word.length() - 1;
    while (i > 0)
    {
        if ((i > 0 && isVowel(word[i]) && !isVowel(word[i - 1])))
        {

            if (result == "")
            {
                result += word.substr(i - 1, 2);
            }
            else
            {
                result = word.substr(i - 1, 2) + "." + result;
            }
            i = i - 2;
        }
        else
        {
            if (i > 1 && !isVowel(word[i]) && isVowel(word[i - 1]) && !isVowel(word[i - 2]))
            {
                if (result == "")
                {
                    result += word.substr(i - 2, 3);
                }
                else
                {
                    result = word.substr(i - 2, 3) + "." + result;
                }
            }
            i = i - 3;
        }
    }
    return result;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string word;
        cin >> word;
        if (word.length() <= 2)
        {
            cout << word << endl;
            break;
        }
        string syllables = breakwords(word);
        cout << syllables << endl;
    }

    return 0;
}