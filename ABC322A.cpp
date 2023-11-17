#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  ll N;
  string S;
  cin >> N >> S;
  for (ll i = 0; i < N - 2; i++)
  {
    if (S[i] == 'A' && S[i + 1] == 'B' && S[i + 2] == 'C')
    {
      cout << i + 1 << endl;
      return 0;
    }
  }
  cout << -1 << endl;
}