#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    if (n % 2 == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        sort(arr, arr + n);
        int res[n];

        int r = n/2;
        int l = 0;
        for (int i = 1; i < n; i += 2)
        {
            res[i] = arr[r];
            ++r; 

            res[i-1] = arr[l];
            ++l;
        }

        bool poss = true;
        for (int i = 1; i < n; i += 2)
        {
            if (i+1 < n && !(res[i] > res[i-1] && res[i] > res[i+1]))
            {
                poss = false;
                break;
            }
        }

        if (poss)
        {
            cout << "YES" << endl;
            for (int i = 0; i < n; ++i)
            {
                cout << res[i] << " ";
            }

            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
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