#include <bits/stdc++.h>

using namespace std;

void solve() 
{
    int n;
    cin >> n;

    long int sum = 1;

    if (n > 1)
    {
        sum += (n-2)*(n-1);
    }

    cout << sum << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}