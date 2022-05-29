#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr+n);
    int ans = 0;

    if (arr[0] == 0)
    {
        for (int i = 1; i < n; i++)
        {
            if (arr[i] != 0)
            {
                ans = n - i;
                break;
            }
        }
    }
    else
    {
        bool done = false;

        for (int i = 1; i < n; i++)
        {
            if (arr[i] == arr[i-1])
            {
                ans = n;
                done = true;
                break;
            }
        }

        if (!done)
        {
            ans = n+1;
        }
    }

    cout << ans << endl;
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