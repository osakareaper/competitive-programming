#include <bits/stdc++.h>

using namespace std;

int main()
{
  string dna;
  cin >> dna;

  int count = 1, max_count;

  for (int i = 1; i < dna.size(); i++)
  {
    if (dna[i] == dna[i - 1])
    {
      count++;
      if (i == dna.size() - 1 && count > max_count)
      {
        max_count = count;
      }
    }
    else
    {
      if (count > max_count)
        max_count = count;

      count = 1;
    }
  }

  cout << max_count << endl;

  return 0;
}