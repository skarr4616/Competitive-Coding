#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;

void solve()
{
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    ull res = 0;

    for (int i = 0; i < n; ++i)
    {
        res += arr[i]/k;
        arr[i] = arr[i]%k;
    }

    sort(arr, arr+n);
    int l = 0;
    int r = n-1;

    while (l < r)
    {
        if (arr[l] + arr[r] >= k)
        {
            res += (arr[l] + arr[r])/k;
            ++l;
            --r;
        }
        else
        {
            ++l;
        }
    }

    cout << res << endl;
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