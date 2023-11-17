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
  ll H, W, R, C, cnt = 0;
  cin >> H >> W >> R >> C;
  for (ll r = 1; r <= H; r++)
    for (ll c = 1; c <= W; c++)
      if (abs(R - r) + abs(C - c) == 1)
        cnt++;
  cout << cnt;
}