#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long long int a, b;
    cin >> a >> b;

    long long int s;
    
    if (a == 0)
    {
        s = 1;
    }
    else if (b == 0)
    {
        s = a+1;
    }
    else
    {
        s = 2*b + a + 1;
    }

    cout << s << endl;
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