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
  vl a(3);
  cin >> a[0] >> a[1] >> a[2];
  sort(a.begin(), a.end());
  cout << a[0] + a[1];
}