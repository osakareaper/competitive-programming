#include <bits/stdc++.h>

using namespace std;

int main()
{
  double n, total = 0;
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    total += (i * 10000) * (1 / n);
  }

  cout << total << endl;

  return 0;
}