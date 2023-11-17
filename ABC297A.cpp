#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<string> vs;

int main()
{
  ll N, D;
  cin >> N >> D;
  vl T(N);
  for (ll i = 0; i < N; i++)
  {
    cin >> T[i];
  }
  for (ll i = 1; i < N; i++)
  {
    if (T[i] - T[i - 1] <= D)
    {
      cout << T[i] << endl;
      return 0;
    }
  }
  cout << -1 << endl;
}