#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    long int a[n];
    long int b[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int sum = 0;
    long int check_1;
    long int check_2;

    for (int i = 1; i < n; i += 1)
    {

        check_1 = abs(a[i] - a[i - 1]) + abs(b[i] - b[i - 1]);
        check_2 = abs(b[i] - a[i - 1]) + abs(a[i] - b[i - 1]);

        sum += min(check_1, check_2);
    }

    cout << sum << "\n";
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