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
  ll A, B, C;
  cin >> A >> B >> C;
  cout << (pow(A, 2) + pow(B, 2) < pow(C, 2) ? "Yes" : "No");
}