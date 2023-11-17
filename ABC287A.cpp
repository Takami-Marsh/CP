#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<string> vs;

int main()
{
  ll N, sum = 0;
  string S;
  cin >> N;
  for (ll i = 0; i < N; i++)
  {
    cin >> S;
    if (S == "For")
      sum++;
  }
  if (sum > N / 2)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}