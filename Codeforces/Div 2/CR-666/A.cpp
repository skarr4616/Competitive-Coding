#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    string data[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> data[i];
    }

    int freq[26] = {0};
    for (int i = 0; i < n; ++i)
    {
        int len = data[i].length();

        for (int j = 0; j < len; ++j)
        {
            freq[data[i][j] - 'a'] += 1;
        }
    }

    bool poss = true;
    for (int i = 0; i < 26; ++i)
    {
        if (freq[i]%n != 0)
        {
            poss = false;
            break;
        }
    }

    if (poss)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}