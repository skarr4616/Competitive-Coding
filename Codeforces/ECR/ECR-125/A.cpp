#include <bits/stdc++.h>

using namespace std;

void solve()
{
    float x, y;
    cin >> x >> y;

    float euc_dis = sqrt((x*x)+(y*y));

    if (euc_dis == 0)
    {
        cout << 0;
    }
    else if ((int) euc_dis == euc_dis)
    {
        cout << 1;
    }
    else
    {
        cout << 2;
    }

    cout << endl;
    return;
    
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