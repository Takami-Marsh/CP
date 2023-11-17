#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<string> vs;

int main()
{
  ll N, P, Q, R, S;
  cin >> N >> P >> Q >> R >> S;
  P--;
  Q--;
  R--;
  S--;
  vl A(N);
  for (ll i = 0; i < N; i++)
  {
    cin >> A[i];
  }
  for (ll i = 0; i < N; i++)
  {
    if (i >= P && i <= Q)
      cout << A[i + (R - P)] << " ";
    else if (i >= R && i <= S)
      cout << A[i - (R - P)] << " ";
    else
      cout << A[i] << " ";
  }
}