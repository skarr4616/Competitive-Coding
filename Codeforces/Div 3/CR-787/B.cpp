#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int count = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        while (arr[i] >= arr[i + 1] && arr[i] > 0)
        {
            arr[i] /= 2;
            ++count;
        }

        if (arr[i] == arr[i+1])
        {
            count = -1;
            break;
        }
    }

    cout << count << endl;
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