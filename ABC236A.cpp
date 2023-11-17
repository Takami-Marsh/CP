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
  string S;
  ll a, b;
  cin >> S >> a >> b;
  swap(S[a - 1], S[b - 1]);
  cout << S << endl;
}