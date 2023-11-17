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
  string s;
  cin >> s;
  for (ll i = 0; i < s.size(); i++)
  {
    if (s[i] == ',')
      s[i] = ' ';
  }
  cout << s;
}