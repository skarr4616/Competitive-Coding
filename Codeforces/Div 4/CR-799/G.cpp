#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for (int i = a; i < b; ++i)
typedef unsigned long long int ull;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    rep(i,0,n) cin >> arr[i];

    vector<int> pos;
    rep(i,0,n-1)
    {
        if (arr[i] >= 2*arr[i+1])
        {
            pos.insert(i);
        }
    }

    int ans = 0;
    for (int i = 0; i < n-k; ++i)
    {
        if (pos.find(i) != pos.end())
        {
            continue;
        }

        if (pos.find(i+k-1) != pos.end())
        {
            i = i+k-1;
            continue;
        }

        ans++;
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