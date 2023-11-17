#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<string> vs;

int main()
{
  string S;
  cin >> S;
  for (ll i = 0; i < S.size(); i++)
  {
    cout << (char)toupper(S[i]);
  }
}