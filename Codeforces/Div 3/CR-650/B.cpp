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

    int odd_wrong = 0;
    int even_wrong = 0;

    for (int i = 0; i < n; i++)
    {
        if (i%2 != arr[i]%2)
        {
            if (i%2 == 1)
            {
                odd_wrong++;
            }
            else
            {
                even_wrong++;
            }
        }
    }

    if (odd_wrong == even_wrong)
    {
        cout << even_wrong << endl;
    }
    else
    {
        cout << -1 << endl;
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