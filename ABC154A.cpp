#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<ld> vd;
typedef vector<vd> vvd;
typedef vector<string> vs;

int main()
{
  string s, t, u;
  ll a, b;
  cin >> s >> t >> a >> b >> u;
  a -= (u == s ? 1 : 0);
  b -= (u == t ? 1 : 0);
  cout << a << " " << b;
}