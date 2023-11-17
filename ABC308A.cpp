#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;

int main()
{
  ll S, M = 0;
  for (ll i = 0; i < 8; i++)
  {
    cin >> S;
    if (S < M || S < 100 || S > 675 || S % 25 != 0)
    {
      cout << "No" << endl;
      return 0;
    }
    M = S;
  }
  cout << "Yes" << endl;
}