#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for (int i = a; i < b; ++i)
typedef unsigned long long int ull;

void solve()
{
    ull w, h, n;
    cin >> w >> h >> n;

    int num = 1;
    
    if (w%2 == 0)
    {
        while (w%2 != 1)
        {
            num *= 2;
            w /= 2;
        }
    }

    if (num < n && h%2 == 0)
    {
        while (h%2 != 1)
        {
            num *= 2;
            h /= 2;
        }
    }

    if (num < n)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}