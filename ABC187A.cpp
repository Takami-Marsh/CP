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
  string A, B;
  cin >> A >> B;
  cout << max(ll(A[0] - '0') + ll(A[1] - '0') + ll(A[2] - '0'), ll(B[0] - '0') + ll(B[1] - '0') + ll(B[2] - '0'));
}