#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    int island[26][n + 2];

    for (int i = 0; i < 26; i++)
    {
        island[i][0] = 1;

        for (int j = 1; j < n+2; j++)
        {
            island[i][j] = 0;
        }
    }

    int num = 1;
    for (int i = 1; i < n; i++)
    {
        if (str[i] != str[i - 1])
        {
            int l = island[str[i - 1] - 'a'][0];
            island[str[i - 1] - 'a'][l] = num;
            num = 1;
            island[str[i - 1] - 'a'][0]++;
        }
        else
        {
            num++;
        }
    }

    int l = island[str[n - 1] - 'a'][0];
    island[str[n - 1] - 'a'][l] = num;

    for (int i = 0; i < 26; i++)
    {
        sort(island[i] + 1, island[i] + n + 2, greater<int>());

        for (int j = 2; j < n+2; ++j)
        {
            island[i][j] += island[i][j-1];
        }
    }

    for (int i = 0; i < n+1; ++i)
    {
        int max = 0;
        for (int j = 0; j < 26; ++j)
        {
            if (island[j][i+1] > max)
            {
                max = island[j][i+1];
            }
        }

        cout << max << " ";
    }

    cout << endl;
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