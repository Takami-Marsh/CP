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
  ll N, tmp;
  cin >> N;
  tmp = N;
  while (tmp % 2 == 0 && tmp >= N)
    tmp /= 2;
  cout << tmp * 2;
}