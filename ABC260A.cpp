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
  for (ll i = 0; i < 3; i++)
  {
    bool flag = true;
    for (ll j = 0; j < 3; j++)
    {
      if (i == j)
        continue;
      if (S[i] == S[j])
      {
        flag = false;
        break;
      }
    }
    if (flag)
    {
      cout << S[i] << endl;
      return 0;
    }
  }
  cout << -1 << endl;
}