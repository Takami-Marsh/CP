#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<ld> vd;
typedef vector<vd> vvd;
typedef vector<string> vs;

int main()
{
  ll N;
  cin >> N;
  vl A(N);
  for (ll i = 0; i < N; i++)
  {
    cin >> A[i];
  }
  sort(A.begin(), A.end());
  cout << (A[0] == A.back() ? "Yes" : "No");
}