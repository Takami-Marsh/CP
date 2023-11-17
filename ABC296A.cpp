#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<string> vs;

int main()
{
  ll N;
  string S;
  cin >> N >> S;
  for (ll i = 1; i < N; i++)
  {
    if (S[i] == S[i - 1])
    {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}