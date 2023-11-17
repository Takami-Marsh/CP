#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<string> vs;

int main()
{
  ll N, count = 0;
  string S;
  cin >> N >> S;
  for (ll i = 0; i < N; i++)
  {
    if (S[i] == '|')
      count++;
    if (S[i] == '*' && count != 1)
    {
      cout << "out" << endl;
      return 0;
    }
  }
  cout << "in" << endl;
}