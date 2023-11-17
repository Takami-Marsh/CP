#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<string> vs;

int main()
{
  ll a, b;
  cin >> a >> b;
  if (a + a == b || a + a + 1 == b)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}