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
  ll X, Y;
  cin >> X >> Y;
  if (X >= Y)
    cout << 0;
  else if ((Y - X) % 10 == 0)
    cout << (Y - X) / 10;
  else
    cout << (Y - X) / 10 + 1;
}