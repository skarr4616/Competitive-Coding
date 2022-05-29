#include <bits/stdc++.h>

using namespace std;

void solve() 
{
    int n, m;
    cin >> n >> m;

    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    int maximum = 0;
    int minimum = 100000;

    for (int i = 0; i < m; i++)
    {
        maximum = max(arr[i], maximum);
        minimum = min(arr[i], minimum);
    }

    for (int i = 0; i < n; i++)
    {
        if (i <= (minimum+maximum)/2)
        {
            cout << maximum - i << " ";
        }
        else
        {
            cout << i - minimum << " ";
        }
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