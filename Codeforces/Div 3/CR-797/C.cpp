#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int s[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> s[i];
    }

    int f[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> f[i];
    }

    int start = f[0];
    vector<int> res;
    res.push_back(f[0] - s[0]);

    for (int i = 1; i < n; ++i)
    {
        if (s[i] > start)
        {
            res.push_back(f[i] - s[i]);
            start = f[i];
        }
        else
        {
            res.push_back(f[i] - start);
            start = f[i];
        }
    }

    for (int i = 0; i < n; ++i)
    {
        cout << res[i] << " ";
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