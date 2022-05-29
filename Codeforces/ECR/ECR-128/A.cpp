#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    int lowest = max(l1, l2);
    int highest = min(r1, r2);

    if (highest < lowest)
    {
        cout << l1 + l2 << endl;
    }
    else
    {
        cout << lowest << endl;
    }
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