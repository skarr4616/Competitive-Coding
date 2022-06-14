#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    string pat;
    cin >> pat;

    int num_W = 0;
    for (int i = 0; i < k; ++i)
    {
        if (pat[i] == 'W')
        {
            num_W++;
        }
    }

    int min_W = num_W;

    for (int i = k; i < n; ++i)
    {
        if (pat[i-k] == 'W')
        {
            num_W -= 1;
        }

        if (pat[i] == 'W')
        {
            num_W += 1;
        }

        min_W = min(min_W, num_W);
    }

    cout << min_W << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}