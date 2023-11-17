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
  if (N >= 42)
    N++;
  cout << "AGC" << setfill('0') << right << setw(3) << N << endl;
}