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
  string a, b, c;
  cin >> a >> b >> c;
  cout << (a.back() == b.front() && b.back() == c.front() ? "YES" : "NO");
}