#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vl;
typedef vector<string> vs;

int main()
{
  ll N, X;
  cin >> N >> X;
  if (X % N == 0)
    cout << (char)('A' + X / N - 1) << endl;
  else
    cout << (char)('A' + X / N) << endl;
}