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

    if (n == 1)
    {
        cout << "YES" << endl;
        return;
    }

    for (int i = 1; i < n; ++i)
    {
        if (arr[i] - arr[i-1] > 3)
        {
            cout << "NO" << endl;
            return;
        }
    }

    int num_cont = 1;
    vector<int> gap;
    for (int i = 1; i < n; ++i)
    {
        if (arr[i] - arr[i-1] >= 2)
        {
            gap.push_back(arr[i] - arr[i-1]);
            num_cont++;
        }

        if (num_cont > 3)
        {
            cout << "NO" << endl;
            return;
        }
    }

    if (num_cont == 1)
    {
        cout << "YES" << endl;
        return;
    }

    if (num_cont == 2)
    {
        cout << "YES" << endl;
        return;
    }

    if (gap[0] == 2 && gap[1] == 2)
    {
        cout << "YES" << endl;
        return;
    }
    else
    {
        cout << "NO" << endl;
        return;
    }
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