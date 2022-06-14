#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,n) for (int i = a; i < n; ++i)
typedef unsigned long long int ull;

void solve()
{
    int n = 7;
    vector<int> arr(n);

    rep(i,0,n) {cin >> arr[i];}

    int a, b, c;
    a = arr[0];
    b = arr[1];

    if (a+b > arr[2])
    {
        c = arr[2];
    }
    else
    {
        c = arr[3];
    }

    cout << a << " " << b << " " << c << "\n";
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