#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for (int i = a; i < b; ++i)
typedef unsigned long long int ull;

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int ans = 0;
    if (b > a)
    {
        ans++;
    }

    if (c > a)
    {
        ans++;
    }

    if (d > a)
    {
        ans++;
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