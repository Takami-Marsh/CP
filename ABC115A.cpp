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
  ll D;
  cin >> D;
  string s = "Christmas";
  for (ll i = 0; i < 25 - D; i++)
    s += " Eve";
  cout << s;
}