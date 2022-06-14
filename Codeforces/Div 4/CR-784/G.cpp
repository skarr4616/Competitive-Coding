#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for (int i = a; i < b; ++i)
typedef unsigned long long int ull;

void solve()
{
    int r, c;
    cin >> r >> c;

    vector<string> grid(r);
    rep(i,0,r)
        cin >> grid[i];

    rep(j,0,c)
    {
        int p = r-1;

        for (int i = r-1; i >= 0; --i)
        {
            if (grid[i][j] == 'o')
            {
                p = i-1;
            }
            else
            {
                if (grid[i][j] == '*' && p > i)
                {
                    grid[i][j] = '.';
                    grid[p][j] = '*';

                    p--;
                }
                else if (grid[i][j] == '*' && p == i)
                {
                    p--;
                }
            }
        }
    }

    rep(i,0,r)
    {
        rep(j,0,c)
        {
            cout << grid[i][j];
        }

        cout << "\n";
    }
    
    cout << endl;
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