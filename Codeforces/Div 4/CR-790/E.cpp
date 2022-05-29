#include <bits/stdc++.h>

using namespace std;

int next(long long int arr[], int target, int end)
{
    int start = 0;
 
    int ans = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
 
        if (arr[mid] < target)
            start = mid + 1;
 
        else
        {
            ans = mid;
            end = mid - 1;
        }
    }
 
    return ans;
}

void solve()
{
    int n, q;
    cin >> n >> q;

    int arr[n];
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    sort(arr, arr+n);
    long long int sum[n];
    sum[0] = arr[n-1];

    for (int i = 1; i < n; i++)
    {
        sum[i] = sum[i-1] + arr[n-1-i];
    }

    long long int query_sum;

    while (q--)
    {
        cin >> query_sum;

        if (query_sum > sum[n-1])
        {
            cout << -1;
        }
        else
        {
            int idx = next(sum, query_sum, n);
            cout << idx + 1;
        }

        cout << endl;
    }
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