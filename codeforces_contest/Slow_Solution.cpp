#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long maxT, maxN, sumN;
        cin >> maxT >> maxN >> sumN;
        long long ans = 0;
        int sqr = maxN * maxN;
        if (maxT <= sumN / maxN)
        {
            cout << sqr * maxT << endl;
        }
        else
        {
            int div = sumN / maxN;
            int rem = sumN % maxN;
            int ans = (sqr * div) + (rem * rem);
            cout << ans << endl;
        }
    }

    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef pair<int, int> pii;
// typedef pair<ll, ll> pll;
// typedef pair<string, string> pss;
// typedef vector<int> vi;
// typedef vector<vi> vvi;
// typedef vector<pii> vii;
// typedef vector<ll> vl;
// typedef vector<vl> vvl;
// ll m = 1e9 + 7;
// double epsilon = 1e-6;
// #define fi first
// #define se second
// #define mp make_pair
// #define pb push_back
// #define VALUE(x) cerr << "The value of " << #x << " is " << x << endl;
// #define endl "\n"
// #define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
// #define REP(i, n) FOR(i, 0, n)
// #define ALL(v) v.begin(), v.end()
// template<class T>
// istream& operator>>(istream &in , vector<T> &v){
//     for(auto i = v.begin(); i != v.end();++i){
//         cin>>*(i);
//     }
//     return in;
// }
// template<class T>
// ostream& operator<<(ostream &out , vector<T> &v){
//     for(auto i:v) out<<i<<" ";
//         cout<<endl;
//     return out;
// }
// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int ttt = 1;
//     cin>>ttt;
//     while(ttt--){
//         ll t,n,s;
//         cin>>t>>n>>s;
//         if(t<=s/n){
//             cout<<(n*n)*t<<endl;
//         }
//         else{
//             ll rem = s%n;
//             ll num = s/n;
//             n = n*n;
//             cout<<(n*num + (rem*rem))<<endl;
//         }
//     }
//     return 0;
// }