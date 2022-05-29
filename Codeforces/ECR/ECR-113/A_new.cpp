#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    int i;
    int check = 0;

    for (i = 1; i < n; ++i)
    {
        if (str[i] != str[0])
        {
            check = 1;
            break;
        }
    }

    if (check == 1)
    {
        cout << i << " " << i+1 << endl;
    }
    else 
    {
        cout << -1 << " " << -1 << endl;
    }
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