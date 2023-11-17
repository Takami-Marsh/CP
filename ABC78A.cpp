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
  char X, Y;
  cin >> X >> Y;
  ll x = (ll)X, y = (ll)Y;
  cout << (x == y ? "=" : (x < y ? "<" : ">"));
}