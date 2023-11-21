#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, k, x, y;
  cin >> n >> k >> x >> y;

  n > k ? cout << (x * k) + y * (n - k) << endl : cout << x * n << endl;

  return 0;
}