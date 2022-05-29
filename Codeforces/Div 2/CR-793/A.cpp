#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    if (n%2 == 0)
    {
        int r = n/2+1;

        int count = 2;
        while (r < n && str[r] == str[r-1])
        {
            count += 2;
            r++;
        }

        cout << count << endl;
    }
    else
    {
        int r = n/2+1;

        int count = 1;
        while (r < n && str[r] == str[r-1])
        {
            count += 2;
            r++;
        }

        cout << count << endl;
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