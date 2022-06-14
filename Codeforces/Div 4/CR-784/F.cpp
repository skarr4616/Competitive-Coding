#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = a; i < b; ++i)
typedef unsigned long long int ull;

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    rep(i, 0, n) cin >> arr[i];

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }

    int l = 0;
    int r = n - 1;
    int l_sum = 0;
    int r_sum = 0;

    int ans = -1;

    while (l <= r)
    {
        if (l_sum == r_sum)
        {
            ans = (n - 1 - r) + l;

            if (l != r)
            {
                l_sum += arr[l];
                r_sum += arr[r];
                ++l;
                --r;
            }
            else
            {
                break;
            }
        }
        else if (l_sum < r_sum)
        {
            l_sum += arr[l];
            ++l;
        }
        else
        {
            r_sum += arr[r];
            --r;
        }
    }

    if (l_sum == r_sum)
    {
        ans = (n - 1 - r) + l;
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}