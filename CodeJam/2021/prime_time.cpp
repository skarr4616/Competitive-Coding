#include <bits/stdc++.h>

typedef unsigned long long int ull;
using namespace std;

ull solve()
{
    int m;
    cin >> m;

    int prime[m];
    ull freq[m];

    ull sum = 0;

    for (int i = 0; i < m; i++)
    {
        cin >> prime[i] >> freq[i];
        sum += prime[i] * freq[i];
    }

    ull ans = 0;

    for (int i = 2; i < 7000; ++i)
    {
        ull product = sum - i;
        if (product <= 1)
        {
            break;
        }

        bool ok = true;
        ull ans_sum = 0;

        for (int j = 0; j < m; j++)
        {
            int p = prime[j];
            ull f = freq[j];

            ull count = 0;
            while (product % p == 0)
            {
                product /= p;
                count++;
            }

            if (count > f)
            {
                ok = false;
                break;
            }
            else
            {
                ans_sum += count*p;
            }
        }

        // Need to check product == 1. It is possible that some prime number is not present in the list.

        if (i != ans_sum || product != 1)
        {
            ok = false;
        }

        if (ok)
        {
            ans = sum - i;
            break;
        }
    }

    return ans;

}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cout << "Case #" << i+1 << ": " << solve() << "\n";
    }

    return 0;
}