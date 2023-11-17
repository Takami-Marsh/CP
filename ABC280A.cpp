#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<string> vs;

int main()
{
  ll H, W, sum = 0;
  cin >> H >> W;
  vs S(H);
  for (ll i = 0; i < H; i++)
  {
    cin >> S[i];
    for (ll j = 0; j < W; j++)
    {
      if (S[i][j] == '#')
        sum++;
    }
  }
  cout << sum << endl;
}