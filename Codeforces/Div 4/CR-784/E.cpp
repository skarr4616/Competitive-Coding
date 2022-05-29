#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr+n);

    long long int pair = 0;
    for (int i = 1; i < n; i++)
    {
        
    }

    cout << pair << endl;
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