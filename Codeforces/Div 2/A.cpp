#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long int n;
    cin >> n;

    if (n%4 == 0)
    {
        cout << n/4 << " " << n/4 << " " << n/4 << " " << n/4;
    }
    else if (n%4 == 1)
    {
        cout << 2*(n/4) - 1 << " " << 2*(n/4) << " " << 1 << " " << 1;
    }
    else if (n%4 == 2)
    {
        cout << 2*(n/4) - 1 << " " << 2*(n/4) + 1 << " " << 1 << " " << 1;
    }
    else
    {
        cout << 2*(n/4) << " " << 2*(n/4) + 1 << " " << 1 << " " << 1;
    }

    cout << "\n";
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