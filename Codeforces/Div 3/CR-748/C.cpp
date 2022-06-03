#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    int arr[k];
    for (int i = 0; i < k; ++i)
    {
        cin >> arr[i];
    }

    sort(arr, arr+k);

    int num_moves = 0;
    int rats = 0;

    for (int i = k-1; i >= 0; --i)
    {
        if (num_moves + n - arr[i] < n)
        {
            num_moves += n - arr[i];
            rats += 1;
        }
        else
        {
            break;
        }
    }

    cout << rats << endl;
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