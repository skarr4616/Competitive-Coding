#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for (int i = a; i < b; ++i)
typedef unsigned long long int ull;

void solve()
{
    int len;
    cin >> len;

    int n = len-2;
    vector<string> bg(n);
    rep(i,0,n) {cin >> bg[i];}

    string s;
    bool found = false;

    rep(i,0,n-1)
    {
        if (bg[i][1] == bg[i+1][0])
        {
            s.push_back(bg[i][0]);
        }
        else
        {
            s.push_back(bg[i][0]);
            s.push_back(bg[i][1]);

            found = true;
        }
    }

    s += bg[n-1];

    if (!found)
    {
        s.push_back('a');
    }

    cout << s << "\n";
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