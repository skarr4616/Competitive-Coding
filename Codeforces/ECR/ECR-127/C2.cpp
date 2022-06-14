#include <bits/stdc++.h>
using namespace std;

int next(int arr[], int target, int day, int end)
{
    int start = 0;
 
    int ans = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
 
        // Move to right side if target is
        // greater.
        if (arr[mid] <= target + day -)
            start = mid + 1;
 
        // Move left side.
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
    int n, x;
    cin >> n >> x;

    long long int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    sort(arr, arr+n);

    for (int i = 1; i < n; ++i)
    {
        arr[i] += arr[i-1];
    }

    int day = 2;
    int sugar = 0;
    int p = -1;



    cout << sugar << endl;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}