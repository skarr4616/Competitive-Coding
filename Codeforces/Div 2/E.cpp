#include <bits/stdc++.h>

using namespace std;

typedef long long int ll; 

void solve()
{
    int n;
    cin >> n;

    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int q;
    cin >> q;

    int l, r;

    while(q--)
    {
        cin >> l >> r;

        ll copy[r-l+1];

        for (int i = 0; i < r-l+1; i++)
        {
            copy[i] = arr[i + l - 1];
        }

        sort(copy, copy + r - l + 1);

        int min = copy[0]|copy[1];

        for (int i = 2; (arr[i] < min) && (i < r-l+1); ++i)
        {
            if (copy[i] | copy[i-1] < min)
            {
                min = copy[i]|copy[i-1];
            }
        }

        cout << min << "\n";
    }
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }
}