#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<string> vs;

int main()
{
  ll a, b, c;
  cin >> a >> b >> c;
  if ((b >= a && b <= c) || (b <= a && b >= c))
    cout << "Yes";
  else
    cout << "No";
}