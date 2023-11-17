#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<string> vs;

int main()
{
  ll A, B;
  cin >> A >> B;
  if (A % B != 0)
    cout << ll(A / B) + 1 << endl;
  else
    cout << ll(A / B) << endl;
}