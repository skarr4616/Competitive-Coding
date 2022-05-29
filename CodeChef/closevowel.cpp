#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    unsigned long long int ans = 1;

    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'c' || str[i] == 'g' || str[i] == 'l' || str[i] == 'r')
        {
            ans = (ans*2)%(1000000007);
        }
    }

    cout << ans << endl;
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