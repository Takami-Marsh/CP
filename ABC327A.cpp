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
  ll N;
  string S;
  cin >> N >> S;
  for (ll i = 1; i < S.size(); i++)
    if ((S[i] == 'a' && S[i - 1] == 'b') || (S[i] == 'b' && S[i - 1] == 'a'))
    {
      cout << "Yes" << endl;
      return 0;
    }
  cout << "No" << endl;
}