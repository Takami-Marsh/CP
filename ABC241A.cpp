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
  vl a(10);
  for (ll i = 0; i < 10; i++)
  {
    cin >> a[i];
  }
  cout << a[a[a[0]]];
}