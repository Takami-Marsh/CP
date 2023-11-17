#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<string> vs;

int main()
{
  ll N, X;
  cin >> N >> X;
  for (ll i = 0; i < N; i++)
  {
    ll P;
    cin >> P;
    if (P == X)
    {
      cout << i + 1 << endl;
      return 0;
    }
  }
}