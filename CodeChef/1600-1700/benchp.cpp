#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, w, r;
    cin >> n >> w >> r;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    if (w <= r)
    {
        cout << "YES" << endl;
        return;
    }

    w -= r;

    for (int i = 1; i < n; i += 2)
    {
        if (arr[i] != arr[i-1])
        {
            i -= 1;
        }
        else
        {
            w -= 2*arr[i];
        }

        if (w <= 0)
        {
            cout << "YES" << endl;
            return;
        }
    }


    cout << "NO" << endl;
    return;
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