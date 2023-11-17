#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<string> vs;

int main()
{
  ll N, h = 0, pos;
  cin >> N;
  for (ll i = 0; i < N; i++)
  {
    ll H;
    cin >> H;
    if (H > h)
    {
      pos = i + 1;
      h = H;
    }
  }
  cout << pos << endl;
}