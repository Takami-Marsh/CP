#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;

int main()
{
  ll N, P, M = 0;
  cin >> N >> P;
  for (ll i = 1; i < N; i++)
  {
    ll tmp;
    cin >> tmp;
    M = max(M, tmp);
  }
  if (P <= M)
    cout << M + 1 - P << endl;
  else
    cout << 0 << endl;
}