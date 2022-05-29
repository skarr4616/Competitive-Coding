#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long int n, x;
    cin >> n >> x;

    long int arr[n];
    long int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr, arr+n);

    long int min_spend = arr[0];
    long int bags = 0;
    long int idx = n;
    long int itr = 0;

    while(min_spend <= x)
    {
        if (sum <= x)
        {
            bags += idx;
        }
        else
        {
            while(sum > x)
            {
                sum -= arr[idx-1] + itr;
                idx--;
            }

            bags += idx;
        }

        sum += idx;
        itr++;
        min_spend += 1;
    }

    cout << bags << endl;
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
