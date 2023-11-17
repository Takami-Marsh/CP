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
  vl A(4);
  for (ll i = 0; i < 4; i++)
    cin >> A[i];
  sort(A.begin(), A.end());
  cout << A[0];
}