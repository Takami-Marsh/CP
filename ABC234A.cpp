#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<ld> vd;
typedef vector<vd> vvd;
typedef vector<string> vs;

ll f(ll x)
{
  return pow(x, 2) + 2 * x + 3;
}

int main()
{
  ll t;
  cin >> t;
  cout << f(f(f(t) + t) + f(f(t)));
}