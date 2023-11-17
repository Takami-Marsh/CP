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
  set<char> s;
  for (ll i = 0; i < 3; i++)
  {
    char c;
    cin >> c;
    s.insert(c);
  }
  cout << (s.count('a') && s.count('b') && s.count('c') ? "Yes" : "No");
}