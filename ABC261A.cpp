#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vl;
typedef vector<string> vs;

int main()
{
  ll l, r, L, R;
  cin >> l >> r >> L >> R;
  if (min(r, R) - max(l, L) <= 0)
    cout << 0;
  else
    cout << min(r, R) - max(l, L);
}