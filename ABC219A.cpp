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
  ll X;
  cin >> X;
  if (X < 40)
    cout << 40 - X;
  else if (X < 70)
    cout << 70 - X;
  else if (X < 90)
    cout << 90 - X;
  else
    cout << "expert";
}