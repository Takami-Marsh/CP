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
  ll N, K, A;
  cin >> N >> K >> A;
  cout << (N == 1 ? 1 : ((A - 1 + K) % N != 0) ? (A - 1 + K) % N : N);
}