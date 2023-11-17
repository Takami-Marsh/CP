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
  ll A, B, C, D, E, F, X, t = 0, a = 0;
  cin >> A >> B >> C >> D >> E >> F >> X;
  for (ll i = 0; i < X; i++)
  {
    if (i % (A + C) < A)
      t += B;
    if (i % (D + F) < D)
      a += E;
  }
  if (t > a)
    cout << "Takahashi";
  else if (a > t)
    cout << "Aoki";
  else
    cout << "Draw";
}