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
  ll V, A, B, C;
  cin >> V >> A >> B >> C;
  while (true)
  {
    for (ll i = 0; i < 3; i++)
      if (i == 0)
        if (V < A)
        {
          cout << "F";
          return 0;
        }
        else
          V -= A;
      else if (i == 1)
        if (V < B)
        {
          cout << "M";
          return 0;
        }
        else
          V -= B;
      else if (V < C)
      {
        cout << "T";
        return 0;
      }
      else
        V -= C;
  }
}