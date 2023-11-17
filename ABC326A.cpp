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
  if (Y - X > 2 || X - Y > 3)
    cout << "No";
  else
    cout << "Yes";
}