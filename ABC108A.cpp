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
  ll K;
  cin >> K;
  cout << (K / 2) * ((K % 2 == 0 ? K / 2 : K / 2 + 1));
}