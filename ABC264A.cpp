#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vl;
typedef vector<string> vs;

int main()
{
  ll L, R;
  string s = "atcoder";
  cin >> L >> R;
  cout << s.substr(L - 1, R - L + 1);
}