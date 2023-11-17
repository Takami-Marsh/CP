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
  string n;
  cin >> n;
  for (ll i = 0; i < 3; i++)
  {
    n[i] = (n[i] == '1' ? '9' : '1');
  }
  cout << n;
}