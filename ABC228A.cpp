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
  ll S, T, X;
  cin >> S >> T >> X;
  T += (S > T ? 24 : 0);
  cout << ((X >= S && X < T) || (X + 24 >= S && X + 24 < T) ? "Yes" : "No");
}