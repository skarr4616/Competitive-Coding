#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    int y = b;
    int x = c+1;

    int rem = x%y;

    if (rem > a)
    {
        x = ((x/y) + 1)*y + a;
    }
    else if (rem < a)
    {
        x += a - rem;
    }

    int z = x+c;

    cout << x << " " << y << " " << z << endl;

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