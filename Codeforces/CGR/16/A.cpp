#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, s;
    cin >> n >> s;

    int mid = ceil(float(n)/2);

    cout << s/(n + 1 - mid) << endl;
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