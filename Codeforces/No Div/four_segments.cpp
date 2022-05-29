#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr+4);

    cout << arr[0]*arr[2] << endl;
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