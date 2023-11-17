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
  ll a, b, c, d;
  cin >> a >> b >> c >> d;
  cout << ((abs(a - c) <= d) || (abs(a - b) <= d && abs(b - c) <= d) ? "Yes" : "No");
}