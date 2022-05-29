#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    bool swap = false;
    bool poss = true;

    int l = -1;
    int r = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (arr[i][j] < arr[i][j - 1])
            {
                
            }
        }
    }

    if (swap)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < m; j++)
            {
                if (arr[i][j] < arr[i][j - 1])
                {
                    poss = false;
                    break;
                }
            }

            if (!poss)
            {
                break;
            }
        }
    }

    if (poss && l != -1)
    {
        cout << l + 1 << " " << r + 1 << endl;
    }
    else if (poss && l == -1)
    {
        cout << 1 << " " << 1 << endl;
    }
    else
    {
        cout << -1 << endl;
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