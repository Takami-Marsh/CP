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
  ll V, T, S, D;
  cin >> V >> T >> S >> D;
  cout << (D >= V * T && D <= V * S ? "No" : "Yes");
}