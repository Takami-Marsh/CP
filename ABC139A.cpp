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
  ll ans = 0;
  string S, T;
  cin >> S >> T;
  for (ll i = 0; i < 3; i++)
    if (S[i] == T[i])
      ans++;
  cout << ans;
}