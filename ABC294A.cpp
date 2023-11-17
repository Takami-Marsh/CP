#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<string> vs;

int main()
{
  ll N;
  cin >> N;
  for (ll i = 0; i < N; i++)
  {
    ll tmp;
    cin >> tmp;
    if (tmp % 2 == 0)
      cout << tmp << " ";
  }
}