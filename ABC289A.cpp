#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<string> vs;

int main()
{
  string s;
  cin >> s;
  for (ll i = 0; i < s.size(); i++)
  {
    if (s[i] == '0')
      cout << 1;
    else
      cout << 0;
  }
}