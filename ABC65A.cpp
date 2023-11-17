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
  ll X, A, B;
  cin >> X >> A >> B;
  cout << (B - A <= 0 ? "delicious" : (B - A <= X ? "safe" : "dangerous"));
}