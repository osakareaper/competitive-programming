#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
  ll n, sum = 0;
  cin >> n;

  for (int i = 0; i < n - 1; i++)
  {
    ll num;
    cin >> num;

    sum += num;
  }

  ll missing = (n * (1 + n) / 2) - sum;

  cout << missing << endl;

  return 0;
}