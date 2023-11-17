#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vl;
typedef vector<string> vs;

int main()
{
  ll K;
  cin >> K;
  if (K >= 60)
  {
    string mm = to_string(K - 60);
    if (mm.size() == 1)
      cout << "22:0" << mm;
    else
      cout << "22:" << mm;
  }
  else
  {
    string mm = to_string(K);
    if (mm.size() == 1)
      cout << "21:0" << mm;
    else
      cout << "21:" << mm;
  }
}