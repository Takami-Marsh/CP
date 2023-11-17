#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<string> vs;

int main()
{
  ll N;
  cin >> N;
  vs S(N);
  for (ll i = 0; i < N; i++)
  {
    cin >> S[i];
  }
  for (ll i = 0; i < N; i++)
  {
    cout << S[N - i - 1] << endl;
  }
}