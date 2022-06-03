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

    int odd = 0;
    int even = 0;

    for (int i = 0; i < n; ++i)
    {
        if (arr[i]%2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    cout << min(even, odd) << endl;
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