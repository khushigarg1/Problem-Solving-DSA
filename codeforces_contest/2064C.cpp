#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<ll> vl;
typedef vector<vl> vvl;
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define REP(i, n) FOR(i, 0, n)
#define fastio()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline cout << endl;
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define pY cout << "YES";
#define pN cout << "NO";
#define py cout << "Yes";
#define pn cout << "No";
#define debug(x)     \
  cout << #x << " "; \
  _print(x);         \
  cout << endl;
template <class T>
istream &operator>>(istream &in, vector<T> &v)
{
  for (auto i = v.begin(); i != v.end(); ++i)
  {
    cin >> *(i);
  }
  return in;
}
template <class T>
ostream &operator<<(ostream &out, vector<T> &v)
{
  for (auto i : v)
    out << i << " ";
  cout << endl;
  return out;
}
void _print(ll t) { cout << t; }
void _print(int t) { cout << t; }
void _print(string t) { cout << t; }
void _print(char t) { cout << t; }
void _print(lld t) { cout << t; }
void _print(double t) { cout << t; }
void _print(ull t) { cout << t; }
template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
  cout << "{";
  _print(p.ff);
  cout << ",";
  _print(p.ss);
  cout << "}";
}
template <class T>
void _print(vector<T> v)
{
  cout << "[ ";
  for (T i : v)
  {
    _print(i);
    cout << " ";
  }
  cout << "]";
}
template <class T>
void _print(set<T> v)
{
  cout << "[ ";
  for (T i : v)
  {
    _print(i);
    cout << " ";
  }
  cout << "]";
}
template <class T>
void _print(multiset<T> v)
{
  cout << "[ ";
  for (T i : v)
  {
    _print(i);
    cout << " ";
  }
  cout << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
  cout << "[ ";
  for (auto i : v)
  {
    _print(i);
    cout << " ";
  }
  cout << "]";
}
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
/*---------------------------------------------------------------------------------------------------------------------------*/
ll gcd(ll a, ll b)
{
  if (b > a)
  {
    return gcd(b, a);
  }
  if (b == 0)
  {
    return a;
  }
  return gcd(b, a % b);
}
ll expo(ll a, ll b, ll mod)
{
  ll res = 1;
  while (b > 0)
  {
    if (b & 1)
      res = (res * a) % mod;
    a = (a * a) % mod;
    b = b >> 1;
  }
  return res;
}
void extendgcd(ll a, ll b, ll *v)
{
  if (b == 0)
  {
    v[0] = 1;
    v[1] = 0;
    v[2] = a;
    return;
  }
  extendgcd(b, a % b, v);
  ll x = v[1];
  v[1] = v[0] - v[1] * (a / b);
  v[0] = x;
  return;
} // pass an arry of size1 3
ll mminv(ll a, ll b)
{
  ll arr[3];
  extendgcd(a, b, arr);
  return arr[0];
} // for non prime b
ll mminvprime(ll a, ll b) { return expo(a, b - 2, b); }
bool revsort(ll a, ll b) { return a > b; }
ll combination(ll n, ll r, ll m, ll *fact, ll *ifact)
{
  ll val1 = fact[n];
  ll val2 = ifact[n - r];
  ll val3 = ifact[r];
  return (((val1 * val2) % m) * val3) % m;
}
void google(int t) { cout << "Case #" << t << ": "; }
vi primes;
vector<bool> is_prime;
void sieve(int n)
{
  is_prime.resize(n + 1, true);
  is_prime[0] = is_prime[1] = false;
  for (int i = 2; i <= n; i++)
    if (is_prime[i])
    {
      primes.push_back(i);
      for (int j = 2 * i; j <= n; j += i)
        is_prime[j] = false;
    }
}
ll mod_add(ll a, ll b, ll m)
{
  a = a % m;
  b = b % m;
  return (((a + b) % m) + m) % m;
}
ll mod_mul(ll a, ll b, ll m)
{
  a = a % m;
  b = b % m;
  return (((a * b) % m) + m) % m;
}
ll mod_sub(ll a, ll b, ll m)
{
  a = a % m;
  b = b % m;
  return (((a - b) % m) + m) % m;
}
ll mod_div(ll a, ll b, ll m)
{
  a = a % m;
  b = b % m;
  return (mod_mul(a, mminvprime(b, m), m) + m) % m;
} // only for prime m
ll phin(ll n)
{
  ll number = n;
  if (n % 2 == 0)
  {
    number /= 2;
    while (n % 2 == 0)
      n /= 2;
  }
  for (ll i = 3; i <= sqrt(n); i += 2)
  {
    if (n % i == 0)
    {
      while (n % i == 0)
        n /= i;
      number = (number / i * (i - 1));
    }
  }
  if (n > 1)
    number = (number / n * (n - 1));
  return number;
} // O(sqrt(N))
ll getRandomNumber(ll l, ll r) { return uniform_int_distribution<ll>(l, r)(rng); }
void solve()
{
  ll n;
  cin >> n;
  vector<ll> arr(n);
  for (ll i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  vector<ll> prefix1(n, 0);
  vector<ll> prefix2(n, 0);

  if (arr[0] > 0)
    prefix1[0] = arr[0];

  for (ll i = 1; i < n; i++)
  {
    if (arr[i] > 0)
      prefix1[i] += (prefix1[i - 1] + arr[i]);
    else
      prefix1[i] = prefix1[i - 1];
  }

  if (arr[n - 1] < 0)
    prefix2[n - 1] = -arr[n - 1];

  for (int i = n - 2; i >= 0; i--)
  {
    if (arr[i] < 0)
      prefix2[i] -= (arr[i] - prefix2[i + 1]);
    else
      prefix2[i] = prefix2[i + 1];
  }

  ll ans = 0;
  REP(i, n)
  {
    ans = max(ans, prefix1[i] + prefix2[i]);
  }

  cout << ++ans << endl;
}
int main()
{
#ifdef gargkhushi
  freopen("Error.txt", "w", stderr);
#endif
  fastio();
  auto start1 = high_resolution_clock::now();
  int t = 1;
  cin >> t;
  for (int test = 1; test <= t; test++)
    solve();
  auto stop1 = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef gargkhushi
  cout << "Time: " << duration.count() / 1000 << endl;
#endif
  return 0;
}