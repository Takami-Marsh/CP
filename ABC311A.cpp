#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;

int main()
{
  ll N, a = 0, b = 0, c = 0;
  string S;
  cin >> N >> S;
  for (ll i = 0; i < N; i++)
  {
    if (!a && S[i] == 'A')
      a = i + 1;
    if (!b && S[i] == 'B')
      b = i + 1;
    if (!c && S[i] == 'C')
      c = i + 1;
  }
  cout << max(a, max(b, c)) << endl;
}