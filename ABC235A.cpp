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
  string x, y, z;
  cin >> x;
  y += x[1];
  y += x[2];
  y += x[0];
  z += x[2];
  z += x[0];
  z += x[1];
  cout << stol(x) + stol(y) + stol(z) << endl;
}