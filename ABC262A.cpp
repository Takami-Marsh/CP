#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vl;
typedef vector<string> vs;

int main()
{
  ll Y;
  cin >> Y;
  if (Y % 4 > 2)
    cout << Y + (4 - Y % 4) + 2;
  else
    cout << Y + (2 - Y % 4);
}