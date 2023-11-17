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
  ll k;
  vl s(5);
  for (ll i = 0; i < 5; i++)
    cin >> s[i];
  cin >> k;
  sort(s.begin(), s.end());
  cout << (s[4] - s[0] <= k ? "Yay!" : ":(");
}