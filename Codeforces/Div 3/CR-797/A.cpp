#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int f = 3;
    int s = 2;
    int t = 1;

    n -= 6;

    while (n != 0)
    {
        ++f;
        n -= 1;

        if (n != 0)
        {
            ++s;
            n -= 1;
        }

        if (n != 0)
        {
            ++t;
            n -= 1;
        }
    }

    cout << s << " " << f << " " << t << endl;
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