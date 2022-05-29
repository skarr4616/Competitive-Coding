#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, r, b;
    cin >> n >> r >> b;

    string ans;

    int rem = r%(b+1);
    int ini = r/(b+1);
    int idx = 0;

    while (rem != 0)
    {
        ans.insert(ans.end(), ini+1, 'R');
        ans.insert(ans.end(), 'B');

        rem -= 1;
        n -= ini + 2;
    }

    while (n != ini)
    {
        ans.insert(ans.end(), ini, 'R');
        ans.insert(ans.end(), 'B');

        n -= ini + 1; 
    }

    ans.insert(ans.end(), ini, 'R');

    cout << ans << endl;
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
