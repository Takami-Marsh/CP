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
  cout << fixed << setprecision(20);
  ll N, sum = 0;
  cin >> N;
  for (ll i = 1; i <= N; i++)
    if (i % 2 == 1)
      sum++;
  cout << (ld)sum / (ld)N;
}