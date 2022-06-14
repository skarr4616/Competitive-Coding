#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;

void solve()
{
    ull n;
    cin >> n;

    if (n % 2 == 1 || n == 2)
    {
        cout << -1 << endl;
        return;
    }

    ull maax;
    ull miin;

    n /= 2;

    maax = n / 2;
    miin = n/3;

    if (n%3 != 0)
    {
        miin += 1;
    }

    cout << miin << " " << maax << endl;

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