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
  string S, T;
  cin >> S >> T;
  vs s = {S, T};
  sort(s.begin(), s.end());
  cout << (s[0] == S ? "Yes" : "No");
}