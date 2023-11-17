#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;

int main()
{
  ll N;
  cin >> N;
  for (ll i = 0; i < N; i++)
  {
    ll t = 0;
    for (ll i = 0; i < 7; i++)
    {
      ll tmp;
      cin >> tmp;
      t += tmp;
    }
    cout << t << " ";
  }
  cout << endl;
}