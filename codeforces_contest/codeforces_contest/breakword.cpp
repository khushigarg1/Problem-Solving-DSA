#include <iostream>
#include <string>
using namespace std;

bool isVowel(char ch)
{
    return (ch == 'a' || ch == 'e');
}

string breakIntoSyllables(string word)
{
    string result;
    for (int i = 0; i < word.length(); ++i)
    {
        if ((i > 0 && isVowel(word[i]) && isVowel(word[i - 1])) ||
            (i > 1 && !isVowel(word[i - 2]) && isVowel(word[i - 1]) && !isVowel(word[i])))
        {
            result += '.';
        }
        result += word[i];
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

        string syllables = breakIntoSyllables(word);
        cout << syllables << endl;
    }

    return 0;
}
