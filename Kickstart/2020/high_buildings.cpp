#include <bits/stdc++.h>

using namespace std;

void solve(int t)
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int arr[n];

    for (int i = 0; i < a-c; i++)
    {
        arr[i] = i+1;
    }

    for (int i = 0; i < b-c; ++i)
    {
        arr[n-1-i] = i+1;
    }

    int l = a-c;
    int r = (n-1) - (b-c);

    while (c > 0)
    {
        arr[l] = n;
        c -= 1;
        ++l;

        if (c > 0)
        {
            arr[r] = n;
            c -= 1;
            --n;
        }
    }

    while (l <= r)
    {
        arr[l] = n-1;
        ++l;
    }

    cout << "Case #" << t << ": ";

    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        solve(i+1);
    }

    return 0;
}