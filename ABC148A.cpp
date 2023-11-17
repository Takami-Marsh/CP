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
  set<ll> s;
  for (ll i = 0; i < 2; i++)
  {
    ll tmp;
    cin >> tmp;
    s.insert(tmp);
  }
  for (ll i = 1; i <= 3; i++)
  {
    if (!s.count(i))
    {
      cout << i;
      return 0;
    }
  }
}