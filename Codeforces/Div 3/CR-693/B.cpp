#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    int sum = 0;
    int ar[n];

    int one = 0;
    int two = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        sum += ar[i];

        if (ar[i] == 1)
        {
            one += 1;
        }
        else
        {
            two += 1;
        }
    }

    if (sum%2 != 0)
    {
        cout << "NO";
    }
    else
    {
        if (sum/2 <= one)
        {
            cout << "YES";
        }
        else if ((sum/2)/2 <= two && (sum/2)%2 <= one)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
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