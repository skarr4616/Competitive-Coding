#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for (int i = a; i < b; ++i)
typedef unsigned long long int ull;

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    rep(i,0,n) cin >> arr[i];

    int ans = -1;
    rep(i,0,n)
    {
        if (arr[i] != i)
        {
            if (ans == -1)
            {
                ans = arr[i];
            }
            else
            {
                ans = ans&arr[i];
            }
        }
    }

    cout << ans << endl;
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