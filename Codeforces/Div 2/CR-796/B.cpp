#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for (int i = a; i < b; ++i)
typedef unsigned long long int ull;

void solve()
{
    int n;
    cin >> n;

    vector<int> odd;
    vector<int> even;
    int x;
    rep(i,0,n)
    {
        cin >> x;

        if (x%2 == 0)
        {
            even.push_back(x);
        }
        else
        {
            odd.push_back(x);
        }
    }

    if (odd.size() > 0)
    {
        cout << even.size() << endl;
        return;
    }

    sort(even.begin(), even.end());

    int k = even[0];
    int ans = even.size() - 1;
    int min_div = 0;

    while (k%2 != 1)
    {
        min_div++;
        k /= 2;
    }

    for (int i = 1; i < even.size(); ++i)
    {
        if (even[i] != even[i-1])
        {
            k = even[i];
            int div = 0;

            while (k%2 != 1)
            {
                div++;
                k /= 2;
            }

            min_div = min(min_div, div);
        }
    }

    cout << ans + min_div << endl;
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