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
  ll N, c = 0;
  cin >> N;
  while (N >= 3)
  {
    N -= 3;
    c++;
  }
  cout << c;
}