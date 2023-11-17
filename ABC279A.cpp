#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<string> vs;

int main()
{
  ll sum = 0;
  string S;
  cin >> S;
  for (ll i = 0; i < S.size(); i++)
  {
    if (S[i] == 'w')
      sum += 2;
    else
      sum++;
  }
  cout << sum << endl;
}