#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int min = 160000;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int check = 0;
            
            for (int k = 0; k < m; k++)
            {
                check += abs(arr[i][k] - arr[j][k]);
            }

            if (check < min)
            {
                min = check;
            }
        }
    }

    cout << min << endl;
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