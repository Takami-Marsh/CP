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
  ll N;
  cin >> N;
  N *= 1.08;
  cout << (N < 206 ? "Yay!" : (N == 206) ? "so-so" : ":(");
}