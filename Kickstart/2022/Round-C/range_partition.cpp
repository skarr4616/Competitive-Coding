#include <bits/stdc++.h>

using namespace std;

void solve(int t)
{
    int n, x, y;
    cin >> n >> x >> y;

    int sum = (n*(n+1))/2;

    if (sum%(x+y) != 0)
    {
        cout << "Case #" << t << ": IMPOSSIBLE" << endl;
    }
    else
    {
        int alan = (sum/(x+y))*x;

        vector<int> ans;

        int q = n;
        while (alan != 0)
        {
            if (alan - q < 0)
            {
                q--;
            }
            else
            {
                alan -= q;
                ans.push_back(q);
                q--;
            }
        }

        cout << "Case #" << t << ": POSSIBLE" << endl;

        int k = ans.size();
        cout << k << endl;

        for (int i = 0; i < k; ++i)
        {
            cout << ans[k-1-i] << " ";
        }

        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        solve(i+1);
    }

    return 0;
}