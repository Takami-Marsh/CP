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
  ll N, X, T;
  cin >> N >> X >> T;
  cout << (N % X == 0 ? N / X * T : (N / X + 1) * T);
}