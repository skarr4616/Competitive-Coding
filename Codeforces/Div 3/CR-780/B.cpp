#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    long long int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr+n);

    int poss = 1;

    if ((arr[n-1] - arr[n-2] >= 2) || (n == 1 && arr[0] != 1))
    {
        poss = 0;
    }

    if (poss == 0)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
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