#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool contains_1100(const string& s, int i) {
    return i >= 0 && i + 3 < s.size() && s.substr(i, 4) == "1100";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int q;
        cin >> q;

        int count1100 = 0;
        for (int i = 0; i + 3 < s.size(); ++i) {
            if (contains_1100(s, i)) {
                count1100++;
            }
        }

        while (q--) {
            int i, v;
            cin >> i >> v;
            i--;

            for (int j = i - 3; j <= i; ++j) {
                if (contains_1100(s, j)) {
                    count1100--;
                }
            }

            s[i] = v + '0';

            for (int j = i - 3; j <= i; ++j) {
                if (contains_1100(s, j)) {
                    count1100++;
                }
            }

            cout << (count1100 > 0 ? "YES" : "NO") << "\n";
        }
    }

    return 0;
}
