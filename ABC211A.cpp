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
  cout << fixed << setprecision(20);
  ld A, B;
  cin >> A >> B;
  cout << ld((A - B) / (ld)3.0 + B);
}