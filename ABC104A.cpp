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
  ll R;
  cin >> R;
  cout << (R < 1200 ? "ABC" : (R < 2800 ? "ARC" : "AGC"));
}