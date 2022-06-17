#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for (int i = a; i < b; ++i)
typedef unsigned long long int ull;

ull helper(int idx, vector<ull>& memo, vector<ull>& arr, int n)
{
    if (idx >= n)
    {
        return 0;
    }

    if (memo[idx] != 0)
    {
        return memo[idx];
    }

    ull score = arr[idx] + helper(idx + arr[idx], memo, arr, n);
    memo[idx] = score;
    return score;
}

void solve()
{
    ull n;
    cin >> n;

    vector<ull> arr(n);
    vector<ull> memo(n, 0);
    rep(i,0,n) cin >> arr[i];

    ull max_score = 0;
    rep(i,0,n)
    {
        max_score = max(max_score, helper(i, memo, arr, n));
    }

    cout << max_score << endl;

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