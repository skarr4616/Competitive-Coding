#include <bits/stdc++.h>

using namespace std;

float solve()
{
    long int n, k;
    cin >> n >> k;

    long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr+n);
    long int diff[n+1];

    diff[0] = arr[0] - 1;

    int max_diff = 0;

    for (int i = 1; i < n; i++)
    {
        if ((arr[i] - arr[i-1] - 1)%2 == 1)
        {
            diff[i] = (arr[i] - arr[i-1] - 1)/2 + 1;
        }
        else
        {
            diff[i] = (arr[i] - arr[i-1] - 1)/2;
        }

        if ((arr[i] - arr[i-1] - 1) > max_diff)
        {
            max_diff = arr[i] - arr[i-1] - 1;
        }
    }

    diff[n] = k - arr[n-1];

    sort(diff, diff + n + 1);

    float max = (diff[n] + diff[n-1] > max_diff) ? diff[n] + diff[n-1] : max_diff;

    return max/k;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cout << "Case #" << i+1 << ": " << solve() << endl;
    }
}
