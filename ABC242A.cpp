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
  ld A, B, C, X;
  cin >> A >> B >> C >> X;
  if (X <= A)
    cout << 1.0;
  else if (X <= B)
    cout << (ld)(C / (B - A));
  else
    cout << 0.0;
}