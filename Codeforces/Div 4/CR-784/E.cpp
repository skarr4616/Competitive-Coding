#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for (int i = a; i < b; ++i)
typedef unsigned long long int ull;

void solve()
{
    int n;
    cin >> n;

    vector<string> arr(n);
    rep(i,0,n) {cin >> arr[i];}

    map<string, int> sMap;
    rep(i,0,n)
    {
        auto it = sMap.find(arr[i]);

        if (it == sMap.end())
        {
            sMap.insert({arr[i], 1});
        }
        else
        {
            it->second++;
        }
    }

    int res = 0;
    for (auto it = sMap.begin() + 1; it != sMap.end(); ++it)
    {
        if ()
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