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
  string N;
  cin >> N;
  for (ll i = 0; i < 2; i++)
  {
    string s = N.substr(i, 3);
    if (s[0] == s[1] && s[0] == s[2])
    {
      cout << "Yes";
      return 0;
    }
  }
  cout << "No";
}