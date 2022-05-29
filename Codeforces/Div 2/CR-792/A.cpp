#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    if (n >= 10 && n <= 99)
    {
        cout << n%10 << endl;
    }
    else
    {
        int min = 9;

        while (n != 0)
        {
            if (n%10 < min)
            {
                min = n%10;
            }

            n = n/10;
        }

        cout << min << endl;
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