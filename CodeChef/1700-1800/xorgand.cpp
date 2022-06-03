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

    int q;
    cin >> q;

    int L, R, X;
    for (int i = 0; i < q; ++i)
    {
        cin >> L >> R >> X;
        int count = 0;

        for (int j = L-1; j < R; ++j)
        {
            int a = arr[j]^X;
            int b = arr[j]&X;

            if (a > b)
            {
                count++;
            }
        }

        cout << count << endl;
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