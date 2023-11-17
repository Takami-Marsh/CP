#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vl;
typedef vector<string> vs;

int main()
{
  ll N;
  cin >> N;
  stringstream ss;
  ss << uppercase << hex << N;
  string s = ss.str();
  if (s.size() == 1)
    cout << '0';
  cout << s;
}