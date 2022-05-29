#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;

    int len = s.length();
    int sum = 0;

    for (int i = 1; i < len; ++i)
    {
        if (s[i] != s[i-1] && s[i] == '1')
        {
            sum += 1;
        }

        if (i == len - 1 && s[i] == '0')
        {
            sum += 1;
        }

        if (sum == 2)
        {
            break;
        }
    }

    if (len == 1)
    {
        if (s[0] == '0')
        {
            sum = 1;
        }
        else
        {
            sum = 0;
        }
    }

    cout << sum << endl;
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