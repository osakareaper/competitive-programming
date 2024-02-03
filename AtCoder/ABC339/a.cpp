#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    int i = s.length();

    while (s[i] != '.')
    {
        i--;    
    }
    
    for (int j = i+1; j < s.length(); j++)
    {
        cout << s[j];
    }

    cout << "\n";

    return 0;
}