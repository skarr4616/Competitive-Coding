#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;

unsigned int getFirstSetBitPos(ull n)
{
    return log2(n & -n) + 1;
}

void solve()
{
    ull num;
    cin >> num;

    int and_bit = getFirstSetBitPos(num);
    
    int res = pow(2, and_bit - 1);

    if (res == num)
    {
        if (num == 1)
        {
            res += 2;
        }
        else
        {
            res += 1;
        }
    }

    cout << res << endl;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}