#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<string> vs;

int main()
{
  ll N, t = 0, a = 0;
  string S;
  cin >> N >> S;
  for (ll i = 0; i < N; i++)
  {
    if (S[i] == 'T')
      t++;
    else
      a++;
  }
  if (t > a)
    cout << "T" << endl;
  else if (a > t)
    cout << "A" << endl;
  else if (S[S.size() - 1] == 'A')
    cout << "T" << endl;
  else
    cout << "A" << endl;
}