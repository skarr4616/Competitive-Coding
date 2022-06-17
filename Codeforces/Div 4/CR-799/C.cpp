#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for (int i = a; i < b; ++i)
typedef unsigned long long int ull;

void solve()
{
    vector<string> board(8);

    rep(i,0,8) cin >> board[i];

    for (int  i = 1; i < 7; ++i)
    {
        for (int j = 1; j < 7; ++j)
        {
            if (board[i][j] == '#')
            {
                if (board[i+1][j+1] == '#' && board[i+1][j-1] == '#' && board[i-1][j+1] == '#' && board[i-1][j-1] == '#')
                {
                    cout << i+1 << " " << j+1 << endl;
                    return;
                }
            }
        }
    }
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