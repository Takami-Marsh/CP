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
  ll A, B;
  cin >> A >> B;
  A += B;
  if (A >= 15 && B >= 8)
    cout << 1;
  else if (A >= 10 && B >= 3)
    cout << 2;
  else if (A >= 3)
    cout << 3;
  else
    cout << 4;
}