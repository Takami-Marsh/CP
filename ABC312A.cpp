#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;

int main()
{
  string S;
  cin >> S;
  set<string> s = {"ACE", "BDF", "CEG", "DFA", "EGB", "FAC", "GBD"};
  if (s.count(S))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}