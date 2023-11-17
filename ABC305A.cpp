#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;

int main()
{
  ll N;
  cin >> N;
  if (N % 5 > 2)
    cout << N + (5 - N % 5) << endl;
  else
    cout << N - N % 5 << endl;
}