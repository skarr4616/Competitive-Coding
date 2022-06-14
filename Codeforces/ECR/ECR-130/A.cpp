#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int total_energy = 0;
    for (int i = 0; i < n; ++i)
    {
        total_energy += arr[i];
    }

    if (total_energy <= m)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << total_energy - m << endl;
    }

    return;
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