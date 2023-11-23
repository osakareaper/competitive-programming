#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, abc = -1;
  cin >> n;
  char string[n];

  for (int i = 0; i < n; i++)
  {
    cin >> string[i];
  }

  for (int i = 0; i < n - 2; i++)
  {
    if (string[i] == 'A' && string[i + 1] == 'B' && string[i + 2] == 'C')
    {
      abc = i + 1;
      break;
    }
  }

  cout << abc << endl;

  return 0;
}