#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for (int i = a; i < b; ++i)
typedef unsigned long long int ull;

void solve()
{
    int n;
    cin >> n;

    unordered_map<int, int> list;
    int x;
    rep(i,0,n)
    {
        cin >> x;
        auto it = list.find(x);

        if (it == list.end())
        {
            list.insert({x, 1});
        }
        else
        {
            it->second++;
        }
    }

    int num_removals = 0;
    for (auto it = list.begin(); it != list.end(); it++)
    {
        num_removals += it->second - 1;
    }

    if (num_removals%2 == 0)
    {
        cout << list.size() << endl;
    }
    else
    {
        cout << list.size() - 1 << endl;
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