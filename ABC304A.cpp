#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<string> vs;

int main()
{
  ll N, m = -1, index = 0;
  cin >> N;
  vs S(N);
  vl A(N);
  for (ll i = 0; i < N; i++)
  {
    cin >> S[i] >> A[i];
    if (m == -1)
      m = A[i];
    else if (m > A[i])
    {
      m = min(m, A[i]);
      index = i;
    }
  }
  for (ll i = index; i < N; i++)
  {
    cout << S[i] << endl;
  }
  for (ll i = 0; i < index; i++)
  {
    cout << S[i] << endl;
  }
}