#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long int l, r, a;
    cin >> l >> r >> a;

    long int rem = r%a;

    long int max = 0;

    if (rem == a-1)
    {
        max = (r/a) + (r%a);
    }
    else
    {
        long int new_num = r - ((rem+1)%a);

        if (new_num >= l)
        {
            max = (new_num/a) + (new_num%a);
        }
        else
        {
            max = (r/a) + (r%a);
        }
    }

    cout << max << endl;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) 
    {
        solve();
    }

    return 0;
}