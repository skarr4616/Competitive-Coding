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

    int res[n];
    int pos = 0;

    int end = n;
    int start = 0;
    for (int i = n - 1; i > 0; i--)
    {
        if (arr[i - 1] > arr[i])
        {
            start = i - 1;

            for (int j = start; j < end; j++)
            {
                res[pos] = arr[j];
                pos++;
            }

            end = start;
        }
    }

    for (int j = start; j < end; j++)
    {
        res[pos] = arr[j];
        pos++;
    }

    for (int i = 0; i < n; ++i)
    {
        cout << res[i] << " ";
    }

    cout << endl;
    return;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;
}