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
  ll x, y;
  cin >> x >> y;
  if (x == y)
    cout << x;
  else
    for (ll i = 0; i < 3; i++)
      if (i != x && i != y)
      {
        cout << i;
        return 0;
      }
}