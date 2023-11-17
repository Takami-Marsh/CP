#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;

int main()
{
  ll N, H, X, P;
  cin >> N >> H >> X;
  for (ll i = 0; i < N; i++)
  {
    cin >> P;
    if (H + P >= X)
    {
      cout << i + 1 << endl;
      return 0;
    }
  }
}