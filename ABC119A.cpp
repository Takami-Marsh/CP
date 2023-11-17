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
  cin >> S;
  ll year = stoll(S.substr(0, 4));
  ll month = stoll(S.substr(5, 2));
  cout << (year >= 2019 && month >= 5 ? "TBD" : "Heisei");
}