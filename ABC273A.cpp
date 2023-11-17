#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vl;
typedef vector<string> vs;

ll f(ll k)
{
  if (k == 0)
    return 1;
  return k * f(k - 1);
}

int main()
{
  ll N;
  cin >> N;
  cout << f(N) << endl;
}