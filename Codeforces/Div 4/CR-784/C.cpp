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

    int odd_par = arr[0]%2;
    int even_par = arr[1]%2;
    bool poss = true;

    for (int i = 0; i < n; i++)
    {
        if ((i+1)%2 == 0)
        {
            if (arr[i]%2 != even_par)
            {
                poss = false;
                break;
            }
        }
        else
        {
            if (arr[i]%2 != odd_par)
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