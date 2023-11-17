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
  if (ll(S.back() - '0') <= 2)
  {
    S.pop_back();
    S.pop_back();
    S += '-';
  }
  else if (ll(S.back() - '0') <= 6)
  {
    S.pop_back();
    S.pop_back();
  }
  else
  {
    S.pop_back();
    S.pop_back();
    S += '+';
  }
  cout << S;
}