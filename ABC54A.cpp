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
  ll a, b;
  cin >> a >> b;
  a = (a + 11) % 13;
  b = (b + 11) % 13;
  cout << (a > b ? "Alice" : (a < b ? "Bob" : "Draw"));
}