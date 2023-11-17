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
  vl x(3);
  for (ll i = 0; i < 3; i++)
    cin >> x[i];
  sort(x.rbegin(), x.rend());
  cout << x[0] * 10 + x[1] + x[2];
}