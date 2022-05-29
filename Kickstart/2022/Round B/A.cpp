#include <bits/stdc++.h>

using namespace std;

double solve()
{
    long long int r, a, b;
    cin >> r >> a >> b;

    double pi = M_PI;
    double area = pi*r*r;

    while(r != 0)
    {
        r = r*a;
        area += pi*r*r;

        r = r/b;
        area += pi*r*r;
    }

    return area;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cout << "Case #" << i+1 << ": "<< fixed << setprecision(6) << solve() << endl;
    }

    return 0;
}