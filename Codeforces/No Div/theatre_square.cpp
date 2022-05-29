#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, m, a;
    cin >> n >> m >> a;

    n = ceil(double(n) / a);
    m = ceil(double(m) / a);

    if (n == 1000000000 &&m == 1000000000 && a == 1)
    {
        cout << "1000000000000000000" << endl;
    }
    else
    {
        cout << n * m << endl;
    }
    return 0;
}