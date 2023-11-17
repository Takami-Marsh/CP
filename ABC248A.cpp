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
  sort(S.begin(), S.end());
  if (S[0] != '0')
  {
    cout << 0;
    return 0;
  }
  if (S[8] != '9')
  {
    cout << 9;
    return 0;
  }
  for (ll i = 0; i < S.size() - 1; i++)
  {
    if (char(S[i] + 1) != S[i + 1])
    {
      cout << char(S[i] + 1);
      return 0;
    }
  }
}