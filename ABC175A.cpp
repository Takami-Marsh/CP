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
  ll sum = 0, tmp = 0;
  string S;
  cin >> S;
  for (ll i = 0; i < 3; i++)
  {
    if (S[i] != 'R')
    {
      sum = max(sum, tmp);
      tmp = 0;
      continue;
    }
    tmp++;
  }
  sum = max(sum, tmp);
  cout << sum;
}