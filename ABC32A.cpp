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
  ll a, b, n;
  cin >> a >> b >> n;
  ll i = n;
  while (true)
  {
    if (i % a == 0 && i % b == 0)
    {
      cout << i << endl;
      break;
    }
    i++;
  }
}