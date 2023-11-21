#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a, b, c, ans;
  cin >> a >> b >> c;

  if (a == b && a == c)
    ans = 1;
  else if (a != b && a != c && b != c)
    ans = 3;
  else
    ans = 2;

  cout << ans << endl;

  return 0;
}