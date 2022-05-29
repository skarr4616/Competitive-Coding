#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;

    int ans = 0;
    ans += (abs(b-a))/10;
    ans += (abs(b-a))%10 != 0 ? 1 : 0;

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