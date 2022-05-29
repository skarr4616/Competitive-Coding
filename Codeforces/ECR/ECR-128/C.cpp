#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string str;
    cin >> str;

    int n = str.length();

    int num_0 = 0;

    for (int i = 0; i < n; i++)
    {
        if (str[i] == '0')
        {
            num_0++;
        }
    }

    int cost = num_0;
    int min_cost = cost;
    int one_rem = 0;

    int l = 0;
    int r = n-1;

    while (l <= r)
    {
        if (str[l] == '0')
        {
            num_0 -= 1;
            l += 1;
        }
        else if (str[r] == '0')
        {
            num_0 -= 1;
            r -= 1;
        }
        else if (str[l] == '1')
        {
            one_rem += 1;
            l += 1;
        }
        else if (str[r] == '1')
        {
            one_rem += 1;
            r -= 1;
        }

        cost = max(num_0, one_rem);

        if (cost < min_cost)
        {
            min_cost = cost;
        }
    }

    cout << min_cost << endl;
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