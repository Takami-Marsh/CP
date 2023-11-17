#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vl;
typedef vector<string> vs;

int main()
{
  ll X, Y, N;
  cin >> X >> Y >> N;
  if (N < 3)
    cout << X * N << endl;
  else
    cout << min(Y * (N / 3) + X * (N % 3), X * N);
}