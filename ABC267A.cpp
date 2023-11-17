#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vl;
typedef vector<string> vs;

int main()
{
  string S;
  cin >> S;
  vs w = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
  for (ll i = 0; i < 5; i++)
  {
    if (S == w[i])
    {
      cout << 5 - i << endl;
      return 0;
    }
  }
}