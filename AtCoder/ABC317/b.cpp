#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  int maior, menor, soma = 0;
  cin >> n;

  int nums[n];

  for (int i = 0; i < n; i++)
  {
    cin >> nums[i];
    soma += nums[i];

    if (i == 0)
    {
      maior = nums[i];
      menor = nums[i];
    }
    else
    {
      if (nums[i] > maior)
        maior = nums[i];

      if (nums[i] < menor)
        menor = nums[i];
    }
  }

  int total = ((menor + maior) * (n + 1)) / 2;

  cout << total - soma << endl;

  return 0;
}