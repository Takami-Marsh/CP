#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<string> vs;

int main()
{
  ll N;
  string S, T;
  cin >> N >> S >> T;
  for (ll i = 0; i < N; i++)
  {
    if (S[i] != T[i] && !(S[i] == '1' && T[i] == 'l') && !(S[i] == 'l' && T[i] == '1') && !(S[i] == '0' && T[i] == 'o') && !(S[i] == 'o' && T[i] == '0'))
    {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}