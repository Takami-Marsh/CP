#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vl;
typedef vector<string> vs;

int main()
{
  vl v(5);
  for (ll i = 0; i < 5; i++)
    cin >> v[i];
  sort(v.begin(), v.end());
  if ((v[0] == v[1] && v[2] == v[3] && v[3] == v[4]) || (v[3] == v[4] && v[0] == v[1] && v[1] == v[2]))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}