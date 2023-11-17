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
  set<ll> a;
  for (ll i = 0; i < 3; i++)
  {
    ll tmp;
    cin >> tmp;
    a.insert(tmp);
  }
  cout << a.size();
}