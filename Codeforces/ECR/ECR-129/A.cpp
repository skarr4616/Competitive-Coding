#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    int alice[n];
    for (int i = 0; i < n; i++)
    {
        cin >> alice[i];
    }

    int m;
    cin >> m;

    int bob[m];
    for (int i = 0; i < m; i++)
    {
        cin >> bob[i];
    }

    sort(alice, alice+n);
    sort(bob, bob+m);

    if (alice[n-1] > bob[m-1])
    {
        cout << "Alice" << endl;
        cout << "Alice" << endl;
    }
    else if (alice[n-1] < bob[m-1])
    {
        cout << "Bob" << endl;
        cout << "Bob" << endl;
    }
    else
    {
        cout << "Alice" << endl;
        cout << "Bob" << endl;
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