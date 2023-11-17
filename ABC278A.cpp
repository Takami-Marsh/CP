#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<string> vs;

int main()
{
  ll N, K;
  cin >> N >> K;
  vl A(N);
  for (ll i = 0; i < N; i++)
  {
    cin >> A[i];
  }
  for (ll i = K; i < N; i++)
  {
    cout << A[i] << " ";
  }
  for (ll i = 0; i < min(N, K); i++)
  {
    cout << 0 << " ";
  }
}