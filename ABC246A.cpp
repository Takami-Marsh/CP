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
  vl x(3), y(3);
  for (ll i = 0; i < 3; i++)
  {
    cin >> x[i] >> y[i];
  }
  sort(x.begin(), x.end());
  sort(y.begin(), y.end());
  if (x[1] == x[2])
    cout << x[0];
  else
    cout << x[2];
  cout << " ";
  if (y[1] == y[2])
    cout << y[0];
  else
    cout << y[2];
}