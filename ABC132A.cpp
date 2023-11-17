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
  set<char> s;
  for (ll i = 0; i < 4; i++)
    s.insert(S[i]);
  cout << (s.size() == 2 ? "Yes" : "No");
}