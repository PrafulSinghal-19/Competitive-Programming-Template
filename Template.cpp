#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace chrono;
using namespace __gnu_pbds;

#define fastio()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)
#define fo(a, n, i) for (ll i = a; i < n; i++)
#define FO(a, n, i) for (ll i = n; i >= a; i--)
#define fo1(a, n, i) for (ll i = a; i <= n; i++)
#define pa pair<ll, ll>
#define vec vector<ll>
#define vpa vector<pair<ll, ll>>
#define vecs vector<vector<ll>>
#define pb push_back
#define ff first
#define ss second
#define INF 1e18
#define nline "\n"
#ifndef ONLINE_JUDGE
#define debug(x)     \
  cerr << #x << " "; \
  _print(x);         \
  cerr << endl;
#else
#define debug(x) ;
#endif
#define all(a) a.begin(), a.end()
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef tree<pair<ll, ll>, null_type, less<pair<ll, ll>>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key
void _print(ll t) { cerr << t; }
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }
void _print(pbds v)
{
  cerr << "[ ";
  for (auto i : v)
  {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}

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
  cerr << "{";
  _print(p.ff);
  cerr << ",";
  _print(p.ss);
  cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
  cerr << "[ ";
  for (T i : v)
  {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T>
void _print(set<T> v)
{
  cerr << "[ ";
  for (T i : v)
  {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
  cerr << "[ ";
  for (T i : v)
  {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
  cerr << "[ ";
  for (auto i : v)
  {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
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
const ll mxm = 2 * 1e5;
ll M = 1e9 + 7;
void google(int t) { cout << "Case #" << t << ": "; }

ll LNIS(vector<ll> &a)
{
  int n = a.size();
  vector<ll> dp(n + 1, INF);
  dp[0] = -1 * INF;

  for (int i = 0; i < n; i++)
  {
    int j = upper_bound(dp.begin(), dp.end(), a[i]) - dp.begin();
    dp[j] = a[i];
  }

  ll ans = 0;
  for (int i = 1; i <= n; i++)
  {
    if (dp[i] != INF)
      ans = i;
  }
  return ans;
}

ll LIS(vector<ll> &a)
{
  int n = a.size();
  vector<ll> dp(n + 1, INF);
  dp[0] = -1 * INF;

  for (int i = 0; i < n; i++)
  {
    int j = upper_bound(dp.begin(), dp.end(), a[i]) - dp.begin();
    if (dp[j - 1] < a[i] && a[i] < dp[j])
      dp[j] = a[i];
  }

  ll ans = 0;
  for (int i = 1; i <= n; i++)
  {
    if (dp[i] != INF)
      ans = i;
  }
  return ans;
}

ll gcd(ll a, ll b)
{
  if (b == 0)
  {
    return a;
  }
  else
  {
    return gcd(b, a % b);
  }
}

ll expo(ll a, ll b, ll m)
{
  if (b == 0)
  {
    return 1;
  }
  if (b % 2 == 0)
  {
    ll temp = expo(a, b / 2, m);
    return (temp % m * temp % m) % m;
  }
  else
  {
    ll temp = expo(a, b / 2, m);
    return (a % m * temp % m * temp % m) % m;
  }
}

ll modInverse(ll a, ll m)
{
  return (expo(a, m - 2, m));
}

/*
ll spf[mxm];

void primefactor(){
  memset(spf,-1,sizeof(spf));

  for(ll i=2;i<mxm;i++){
    if(spf[i]==-1){
      spf[i]=i;
      for(ll j=i;j<mxm;j+=i){
        if(spf[j]==-1){
          spf[j]=i;
        }
      }
    }
  }
}
*/

void solve()
{
  int t = 1;
  // cin >> t;
  for (int z = 1; z <= t; z++)
  {
  }
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("inputf.txt", "r", stdin);
  freopen("outputf.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
#endif
  fastio();
  auto start1 = high_resolution_clock::now();
  solve();
  auto stop1 = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop1 - start1);
#ifndef ONLINE_JUDGE
  cerr << "Time: " << duration.count() / 1000 << endl;
#endif
  return 0;
}

// Remember in a min max problem or max min problem apply BINARY SEARCH
/*
Why? Because we can make a check function to check if mid gives us
right answer or not and accordingly manipulate low and high

While designing the comparator function for inbuilt sort never use <= or >= as inbuilt sort works on strictly decreasing principle so using
f(x,x) should return false but if we use >= it will return true.
*/