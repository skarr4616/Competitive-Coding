#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    if (n%7 == 0)
    {
        cout << n;
    }
    else
    {
        int r = n%7;
        int d = n%10;

        if (d-r >= 0)
        {
            cout << n - r;
        }
        else
        {
            cout << ((n/7) + 1)*7;
        }
    }

    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;
}