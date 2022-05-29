#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;

    int mi = min(a, b);
    int ma = max(a, b);

    if (ma >= 2*mi)
    {
        cout << ma*ma;
    }
    else if (2*mi > ma && 2*mi < 2*ma)
    {
        cout << 4*mi*mi;
    }
    else
    {
        cout << 4*ma*ma;
    }

    cout << endl;
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