#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int x, y;
    cin >> x >> y;

    int ans = 0;

    if (y > x)
    {
        ans = y-x;
    }
    else if (x > y)
    {
        if ((x-y)%2 == 0)
        {
            ans = (x-y)/2;
        }
        else
        {
            ans = (x-y)/2;
            ans += 2;
        }
    }

    cout << ans << endl;
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