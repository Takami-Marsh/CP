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
  vl a(3);
  for (ll i = 0; i < 3; i++)
    cin >> a[i];
  sort(a.begin(), a.end());
  cout << a[1] - a[0] + a[2] - a[1];
}