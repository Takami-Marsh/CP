#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<string> vs;

int main()
{
  string S;
  cin >> S;
  for (ll i = 1; i <= S.size() / 2; i++)
  {
    swap(S[(2 * i - 1) - 1], S[(2 * i) - 1]);
  }
  cout << S << endl;
}