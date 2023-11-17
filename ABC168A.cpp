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
  string N, h = "24579", p = "0168";
  cin >> N;
  cout << (h.find(N.back()) != string::npos ? "hon" : p.find(N.back()) != string::npos ? "pon" : "bon");
}