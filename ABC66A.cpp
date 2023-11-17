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
  cin >> x[0] >> x[1] >> x[2];
  sort(x.begin(), x.end());
  cout << x[0] + x[1];
}