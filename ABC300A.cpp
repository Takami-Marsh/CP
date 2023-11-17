#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<string> vs;

int main()
{
  ll N, A, B;
  cin >> N >> A >> B;
  for (ll i = 0; i < N; i++)
  {
    ll tmp;
    cin >> tmp;
    if (tmp == A + B)
      cout << i + 1 << endl;
  }
}