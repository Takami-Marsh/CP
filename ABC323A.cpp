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
  for (ll i = 1; i < 16; i += 2)
  {
    if (S[i] == '1')
    {
      cout << "No";
      return 0;
    }
  }
  cout << "Yes";
}