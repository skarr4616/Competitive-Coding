#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;

    x -= a;
    y -= b;

    int rem = 0;

    if (x > 0)
    {
        rem += x;
    }

    if (y > 0)
    {
        rem += y;
    }

    if (rem <= c)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    cout << endl;
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