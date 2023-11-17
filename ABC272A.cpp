#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vl;
typedef vector<string> vs;

int main()
{
  ll N, sum = 0;
  cin >> N;
  for (ll i = 0; i < N; i++)
  {
    ll tmp;
    cin >> tmp;
    sum += tmp;
  }
  cout << sum << endl;
}