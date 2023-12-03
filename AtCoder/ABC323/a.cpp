#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main()
{
  int caso = 0;
  string s;
  cin >> s;

  for (size_t i = 0; i <= 16; i++)
  {
    if ((i + 1) % 2 == 0)
    {
      if (s[i] == '1')
        caso = 1;
    }
  }

  caso == 1 ? cout << "No\n" : cout << "Yes\n";

  return 0;
}