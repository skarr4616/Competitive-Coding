#include <bits/stdc++.h>

using namespace std;

void solve(int t)
{
    int n, m;
    cin >> n >> m;

    int num;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        sum += num;
    }

    cout << "Case #" << t << ": " << sum%m << endl;
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