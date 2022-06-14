#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for (int i = a; i < b; ++i)
typedef unsigned long long int ull;

void solve()
{
    ull n, k;
    cin >> n >> k;

    int num;
    vector<int> bit_count(31, 0);
    rep(i,0,n)
    {
        cin >> num;
        for (int j = 30; j >= 0; --j)
        {
            bit_count[j] += num%2;
            num /= 2;
        }
    }

    int res = 0;
    int a = pow(2, 30);
    rep(i,0,31)
    {
        if (n - bit_count[i] <= k)
        {
            res += a;
            k -= n-bit_count[i];
        }

        a /= 2;
    }

    cout << res << endl;

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