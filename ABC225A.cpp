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
  ll ans = 0;
  string S;
  cin >> S;
  sort(S.begin(), S.end());
  do
  {
    ans++;
  } while (next_permutation(S.begin(), S.end()));
  cout << ans;
}