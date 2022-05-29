#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    int A[n];
    int B[n];

    int num = 2;

    for (int i = 0; i < n; i++)
    {
        A[i] = num;
        num += 1;
    }

    if (n%2 == 1)
    {
        num++;
    }

    for (int i = 0; i < n; i++)
    {
        B[i] = num;
        num += 1;
    }

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << B[i] << " ";
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