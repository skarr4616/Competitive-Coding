// Not correct solution

#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;

void solve()
{
    ull n;
    cin >> n;

    ull a[n];
    ull b[n-1];

    ull sumA = 0;
    ull sumB = 0;

    for (ull i = 0; i < n; ++i)
    {
        cin >> a[i];
        sumA += a[i];
    }

    for (ull i = 0; i < n-1; ++i)
    {
        cin >> b[i];
        sumB += b[i];
    }

    ull diff = sumB - sumA;
    ull X = LLONG_MAX;

    for (ull i = 0; i < n; ++i)
    {
        if (diff + a[i] > 0 && (diff + a[i])%(n-1) == 0)
        {
            X = min((diff + a[i])/(n-1), X);
        }
    }

    cout << X << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}