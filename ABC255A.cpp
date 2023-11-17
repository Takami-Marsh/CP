#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<string> vs;

int main()
{
  ll R, C;
  cin >> R >> C;
  R--;
  C--;
  vvl A(2, vl(2));
  for (ll i = 0; i < 2; i++)
  {
    for (ll j = 0; j < 2; j++)
    {
      cin >> A[i][j];
    }
  }
  cout << A[R][C];
}