#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;

int main()
{
  string S;
  cin >> S;
  for (ll i = 0; i < S.size(); i++)
  {
    if (S[i] != 'a' && S[i] != 'e' && S[i] != 'i' && S[i] != 'o' && S[i] != 'u')
      cout << S[i];
  }
  cout << endl;
}