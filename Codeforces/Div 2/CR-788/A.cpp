#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int neg = 0;
    int pos = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            neg++;
        }
        else
        {
            pos++;
        }
    }

    bool poss = true;
    for (int i = 1; i < neg; i++)
    {
        if (abs(arr[i]) > abs(arr[i - 1]))
        {
            poss = false;
            break;
        }
    }

    if (poss)
    {
        for (int i = neg+1; i < n; i++)
        {
            if (abs(arr[i]) < abs(arr[i-1]))
            {
                poss = false;
                break;
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

    while (t--)
    {
        solve();
    }

    return 0;
}