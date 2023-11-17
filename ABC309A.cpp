#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;

int main()
{
  ll A, B;
  cin >> A >> B;
  A--;
  B--;
  if (A / 3 == B / 3 && (A % 3 == 1 || B % 3 == 1))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}