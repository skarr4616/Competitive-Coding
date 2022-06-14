#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int b[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> b[i];
    }

    int max_diff = 0;

    for (int i = 0; i < n; ++i)
    {
        if (a[i] - b[i] > max_diff)
        {
            max_diff = a[i] - b[i];
        }
    }

    for(int i = 0; i < n; ++i)
    {
        a[i] -= max_diff;

        if (a[i] < 0)
        {
            a[i] = 0;
        }
    }

    int poss = true;

    for (int i = 0; i < n; ++i)
    {
        if (b[i] != a[i])
        {
            poss = false;
            break;
        }
    }

    if (poss)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    cout << endl;
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