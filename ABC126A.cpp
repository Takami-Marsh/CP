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
  ll N, K;
  string S;
  cin >> N >> K >> S;
  S[K - 1] = char(tolower(S[K - 1]));
  cout << S;
}