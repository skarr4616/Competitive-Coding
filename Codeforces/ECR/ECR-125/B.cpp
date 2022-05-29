#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long int n, B, x, y;
    cin >> n >> B >> x >> y;

    long long int num = 0;
    long long int sum = 0;

    for (int i = 0; i < n; i++)
    {
        num = num + x;

        if (num > B)
        {
            num = num - x - y;
        }

        sum += num;
    }

    cout << sum << endl;
    return;
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