#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    long int arr[n];
    bool poss = true;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (n > 0)
        {
            if (arr[i] - arr[i-1] >= 4)
            {
                poss = false;
            }
        }
    }

    if (poss)
    {
        for (int i = 1; i < n-1; i++)
        {
            if (arr[i] - arr[i-1] == 2 && arr[i+1] - arr[i] == 3)
            {
                poss = false;
            }
            else if (arr[i] - arr[i-1] == 3 && arr[i+1] - arr[i] == 2)
            {
                poss = false;
            }
        }
    }

    if (poss)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    cout << endl;

}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;
}