#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for (int i = a; i < b; ++i)
typedef unsigned long long int ull;

void solve()
{
    int n;
    cin >> n;

    vector<ull> arr(n);
    rep(i,0,n) {cin >> arr[i];}

    ull k = arr[0];
    for (int i = 0; i < n; i+=2)
    {
        k = __gcd(k, arr[i]);
    }

    bool flag = false;
    for (int i = 1; i < n; i+=2)
    {
        if (arr[i]%k == 0)
        {
            flag = true;
            break;
        }
    }

    if (!flag)
    {
        cout << k << "\n";
        return;
    }

    k = arr[1];
    for (int i = 1; i < n; i+=2)
    {
        k = __gcd(k, arr[i]);
    }

    flag = false;
    for (int i = 0; i < n; i+=2)
    {
        if (arr[i]%k == 0)
        {
            flag = true;
            break;
        }
    }

    if (!flag)
    {
        cout << k << "\n";
        return;
    }

    cout << 0 << "\n";
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