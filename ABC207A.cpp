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
  vl X(3);
  cin >> X[0] >> X[1] >> X[2];
  sort(X.rbegin(), X.rend());
  cout << X[0] + X[1];
}