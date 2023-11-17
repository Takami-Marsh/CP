#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vl;
typedef vector<string> vs;

int main()
{
  ll N, M, X, T, D;
  cin >> N >> M >> X >> T >> D;
  if (M >= X)
    cout << T;
  else
    cout << T - (D * (X - M));
}