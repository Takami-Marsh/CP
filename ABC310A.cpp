#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;

int main()
{
  ll N, P, Q, D;
  cin >> N >> P >> Q;
  D = P;
  for (ll i = 0; i < N; i++)
  {
    ll tmp;
    cin >> tmp;
    D = min(D, tmp + Q);
  }
  cout << D << endl;
}