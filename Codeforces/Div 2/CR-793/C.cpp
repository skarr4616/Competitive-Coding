#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = a; i < b; ++i)
typedef unsigned long long int ull;

void solve()
{
    int n;
    cin >> n;

    map<int, int> arr;
    int x;

    rep(i, 0, n)
    {
        cin >> x;
        auto it = arr.find(x);

        if (it == arr.end())
        {
            arr.insert({x, 1});
        }
        else if (it->second < 2)
        {
            it->second++;
        }
    }

    vector<int> res;
    int p = 1; // 1 for back, 0 for front
    for (auto it = arr.begin(); it != arr.end(); ++it)
    {
        int k = it->first;

        if (it->second == 1)
        {
            if (p == 1)
            {
                res.push_back(k);
                p = 0;
            }
            else
            {
                res.insert(res.begin(), k);
                p = 1;
            }
        }
        else
        {
            res.push_back(k);
            res.insert(res.begin(), k);
        }
    }

    int left1 = 1;
    for (int i = 1; i < res.size(); ++i)
    {
        if (res[i] >= res[i - 1])
        {
            left1 = i;
            break;
        }
    }

    int right1 = 1;
    for (int i = res.size() - 2; i >= 0; --i)
    {
        if (res[i] >= res[i + 1])
        {
            right1 = res.size() - 1 - i;
            break;
        }
    }

    int m = 1;
    for (int i = 1; i < res.size(); ++i)
    {
        if (res[i] >= res[i - 1])
        {
            m = i;
            int l = 0;
            int r = i - 1;

            while (l <= r)
            {
                int temp = res[l];
                res[l] = res[r];
                res[r] = temp;

                ++l;
                --r;
            }

            break;
        }
    }

    int l = m;
    int r = res.size() - 1;

    while (l <= r)
    {
        int temp = res[l];
        res[l] = res[r];
        res[r] = temp;

        ++l;
        --r;
    }

    int left2 = 1;
    for (int i = 1; i < res.size(); ++i)
    {
        if (res[i] <= res[i - 1])
        {
            left2 = i;
            break;
        }
    }

    int right2 = 1;
    for (int i = res.size() - 2; i >= 0; --i)
    {
        if (res[i] <= res[i + 1])
        {
            right2 = res.size() - 1 - i;
            break;
        }
    }

    int ans = max(min(left1, right1), min(left2, right2));

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