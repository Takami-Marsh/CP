#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<string> vs;

int main()
{
  ll N, flag = 0;
  string S;
  cin >> N >> S;
  for (ll i = 0; i < N; i++)
  {
    if (S[i] == 'x')
    {
      cout << "No" << endl;
      return 0;
    }
    if (S[i] == 'o')
      flag = 1;
  }
  if (flag)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}