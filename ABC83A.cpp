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
  ll A, B, C, D, L, R;
  cin >> A >> B >> C >> D;
  L = A + B;
  R = C + D;
  cout << (L == R ? "Balanced" : (L > R ? "Left" : "Right"));
}