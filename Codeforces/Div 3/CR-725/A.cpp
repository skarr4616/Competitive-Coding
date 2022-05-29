#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    int max_num = 0;
    int max_pos = 0;

    int min_num = n+1;
    int min_pos = 0;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] < min_num)
        {
            min_num = arr[i];
            min_pos = i+1;
        }

        if (arr[i] > max_num)
        {
            max_num = arr[i];
            max_pos = i+1;
        }
    }

    int a, b, c;

    if (min_pos < max_pos)
    {
        a = min_pos + (n - max_pos) + 1;
        b = max_pos;
        c = n - min_pos + 1;
    }
    else
    {
        a = max_pos + (n - min_pos) + 1;
        b = min_pos;
        c = n - max_pos + 1;
    }

    int ans = min(a, b);
    ans = min(c, ans);

    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}