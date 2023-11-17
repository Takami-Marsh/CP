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
  ll x, y, x_flag = -1, y_flag = -1;
  cin >> x >> y;
  vvl z = {{1, 3, 5, 7, 8, 10, 12}, {4, 6, 9, 11}, {2}};
  for (ll i = 0; i < 3; i++)
  {
    for (ll j = 0; j < z[i].size(); j++)
    {
      if (x == z[i][j])
        x_flag = i;
      if (y == z[i][j])
        y_flag = i;
    }
  }
  cout << (x_flag == y_flag ? "Yes" : "No");
}