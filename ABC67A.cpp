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
  cout << (A % 3 == 0 || B % 3 == 0 || (A + B) % 3 == 0 ? "Possible" : "Impossible");
}