#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    if (n%2 == 0)
    {
        cout << "Yes";
    }
    else
    {
        if (k == 0)
        {
            cout << "No";
        }
        else
        {
            cout << "Yes";
        }
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