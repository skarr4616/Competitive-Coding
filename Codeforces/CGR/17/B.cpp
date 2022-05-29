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

    bool poss = true;

    int l = 0;
    int r = n-1;

    int saved_l = -1;
    int saved_r = -1;

    while (l <= r)
    {
        if (arr[l] != arr[r])
        {
            saved_l = arr[l];
            saved_r = arr[r];
            break;
        }

        ++l;
        --r;
    }

    if (saved_l != -1)
    {
        l = 0;
        n = -1;

        while (l <= r)
        {
            if (arr[l] == saved_l)
            {
                ++l;
            }

            
        }
    }

    if (poss)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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
