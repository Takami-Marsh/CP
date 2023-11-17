#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<string> vs;

int main()
{
  ll N, M, sum = 0;
  cin >> N >> M;
  vl A(N), B(M);
  for (ll i = 0; i < N; i++)
  {
    cin >> A[i];
  }
  for (ll i = 0; i < M; i++)
  {
    cin >> B[i];
    sum += A[B[i] - 1];
  }
  cout << sum << endl;
}