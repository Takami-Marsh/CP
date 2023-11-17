#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  string N;
  cin >> N;
  for (ll i = 1; i < N.size(); i++)
  {
    if (N[i - 1] <= N[i])
    {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}