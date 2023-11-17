#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  ll N, M, P;
  cin >> N >> M >> P;
  if (N > M)
    cout << ll((N - M) / P) + 1 << endl;
  else if (N == M)
    cout << 1 << endl;
  else
    cout << 0 << endl;
}