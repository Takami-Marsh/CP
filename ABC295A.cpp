#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<string> vs;

int main()
{
  ll N;
  cin >> N;
  vs W(N);
  set<string> w = {"and", "not", "that", "the", "you"};
  for (ll i = 0; i < N; i++)
  {
    cin >> W[i];
    if (w.count(W[i]))
    {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}