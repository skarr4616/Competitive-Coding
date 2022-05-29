#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long int n, H;
    cin >> n >> H;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr+n);

    int num_times = 2*(H/(arr[n-1] + arr[n-2]));

    if (H%(arr[n-1] + arr[n-2]) == 0)
    {
        // Do nothing
    }
    else if (H%(arr[n-1] + arr[n-2]) <= arr[n-1])
    {
        num_times++;
    }
    else if (H%(arr[n-1] + arr[n-2]) <= arr[n-1] + arr[n-2])
    {
        num_times += 2;
    }

    cout << num_times << endl;

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