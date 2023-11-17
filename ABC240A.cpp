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
  ll a, b;
  cin >> a >> b;
  if (a == 1 && b == 10)
    cout << "Yes";
  else if (b - a == 1)
    cout << "Yes";
  else
    cout << "No";
}