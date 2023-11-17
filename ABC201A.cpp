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
  vl A(3);
  for (size_t i = 0; i < 3; i++)
    cin >> A[i];
  sort(A.rbegin(), A.rend());
  cout << (A[2] - A[1] == A[1] - A[0] ? "Yes" : "No");
}