#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<string> vs;

int main()
{
  ll pos = -1;
  string S;
  cin >> S;
  for (ll i = 0; i < S.size(); i++)
  {
    if (S[i] == 'a')
    {
      pos = i + 1;
    }
  }
  cout << pos << endl;
}