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

    int m = INT_MAX;
    for (int i = 0; i < n; ++i)
    {
        m = min(m, arr[i]);
    }

    int hcf = -1;
    for (int i = 0; i < n; ++i)
    {
        arr[i] = arr[i] - m;

        if (arr[i] != 0)
        {
            hcf = arr[i];
        }
    }

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] != 0)
        {
            hcf = __gcd(hcf, arr[i]);
        }
    }


    cout << hcf << endl;
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