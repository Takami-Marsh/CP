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
  string c;
  cin >> c;
  cout << (c[0] == c[1] && c[1] == c[2] ? "Won" : "Lost");
}