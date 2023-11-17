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
  if (A >= B)
    cout << A + max(A - 1, B);
  else
    cout << B + B - 1;
}