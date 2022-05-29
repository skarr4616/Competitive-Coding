#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n];
    int pos[n];
    int shift[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        pos[arr[i]-1] = i+1;
        shift[i] = 0;
    }

    for (int i = n-1; i >= 0; i -= 1)
    {
        shift[i] = pos[i]%(i+1);
        int k = shift[i];

        for (int j = 0; j < i; ++j)
        {
            pos[i] = i+1;
            pos[j] = (pos[j] - k + i + 1)%(i+1);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << shift[i] << " ";
    }

    cout << endl;
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

