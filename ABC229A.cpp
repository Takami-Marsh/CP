#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<ld> vd;
typedef vector<vd> vvd;
typedef vector<string> vs;

int main()
{
  vs S(2);
  cin >> S[0] >> S[1];
  if (S[0][0] == '#' && S[0][1] == '.' && S[1][0] == '.')
    cout << "No";
  else if (S[0][1] == '#' && S[0][0] == '.' && S[1][1] == '.')
    cout << "No";
  else if (S[1][0] == '#' && S[1][1] == '.' && S[0][0] == '.')
    cout << "No";
  else if (S[1][1] == '#' && S[1][0] == '.' && S[0][1] == '.')
    cout << "No";
  else
    cout << "Yes";
}