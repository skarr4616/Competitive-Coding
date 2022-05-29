#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int j;
    cin >> j;

    long long int sum = 0;
    int temp;

    for (int i = 0; i < j; i++)
    {
        cin >> temp;
        sum += temp;
    }

    int r = sum%n;

    cout << arr[r] << endl;
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