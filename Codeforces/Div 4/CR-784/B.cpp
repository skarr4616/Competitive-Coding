#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr+n);

    int num = 1;
    int ans = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i-1] == arr[i])
        {
            num++;
        }
        else
        {
            ans = arr[i];
            num = 1;
        }

        if (num == 3)
        {
            break;
        }
    }

    if (num == 3)
    {
        cout << ans;
    }
    else
    {
        cout << -1;
    }

    cout << endl;

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