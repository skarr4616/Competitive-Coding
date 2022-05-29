#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    sort(arr, arr+n);

    int pattern[n];
    pattern[n/2] = arr[n-1];

    int l = n/2 - 1;
    int r = n/2 + 1;
    int ind = 2;

    while (n-ind >= 0)
    {
        if (l >= 0)
        {
            pattern[l] = arr[n-ind];
            ind++;
            l--;
        }

        if (r < n)
        {
            pattern[r] = arr[n-ind];
            ind++;
            r++;
        }
    }

    int start = 1;
    for (int i = 1; i <= n/2; ++i)
    {
        if (pattern[i] != pattern[i-1])
        {
            start++;
        }
    }

    int end = 1;
    for (int i = n/2+1; i < n; ++i)
    {
        if (pattern[i] != pattern[i-1])
        {
            end++;
        }
    }

    cout << min(start, end) << endl;
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