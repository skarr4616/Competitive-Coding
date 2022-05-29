#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isPowerOfTwo(long int n)
{
    if (n == 0)
    {
        return false;
    }

    return (ceil(log2(n)) == floor(log2(n)));
}

void solve()
{
    long int n, k;
    cin >> n >> k;

    long int ar[n];
    for (long int i = 0; i < n; i++)
    {
        ar[i] = i + 1;
    }

    int c;
    long int res[n];

    if (isPowerOfTwo(n))
    {
        c = log2(n);

        long int rem = k % c;

        if (rem == 0)
        {
            for (int i = 0; i < n; ++i)
            {
                res[i] = ar[i];
            }
        }
        else
        {
            for (int i = 0; i < rem; ++i)
            {

                for (int j = 0; j < n; ++j)
                {
                    if ((j + 1) % 2 == 0)
                    {
                        res[(n / 2) + (j + 1) / 2 - 1] = ar[j];
                    }
                    else
                    {
                        res[((j + 1) + 1) / 2 - 1] = ar[j];
                    }
                }

                for (int i = 0; i < n; ++i)
                {
                    ar[i] = res[i];
                }
            }
        }
    }
    else if (isPowerOfTwo(n - 2))
    {
        c = 2 * log2(n - 2);

        long int rem = k % c;

        if (rem == 0)
        {
            for (int i = 0; i < n; ++i)
            {
                res[i] = ar[i];
            }
        }
        else if (rem < c / 2)
        {
            for (int i = 0; i < n; ++i)
            {
                res[i] = pow(2, rem) * (ar[i] - (n / 2) * (ar[i] / (n / 2 + 1))) - (pow(2, rem) - 1) * (1 - ar[i] / (n / 2 + 1));
            }
        }
        else if (rem == c / 2)
        {
            res[0] = ar[0];

            for (int i = 1; i < n - 1; ++i)
            {
                res[i] = ar[n - 1 - i];
            }

            res[n - 1] = ar[n - 1];
        }
        else
        {
            rem = rem - c / 2;

            long int temp[n];

            for (int i = 0; i < n; ++i)
            {
                temp[i] = pow(2, rem) * (ar[i] - (n / 2) * (ar[i] / (n / 2 + 1))) - (pow(2, rem) - 1) * (1 - ar[i] / (n / 2 + 1));
            }

            res[0] = temp[0];

            for (int i = 1; i < n - 1; ++i)
            {
                res[i] = temp[n - 1 - i];
            }

            res[n - 1] = temp[n - 1];
        }
    }
    else
    {
        c = n - 2;

        long int rem = k % c;

        if (rem == 0)
        {
            for (int i = 0; i < n; ++i)
            {
                res[i] = ar[i];
            }
        }
        else if (rem < c / 2)
        {
            for (int i = 0; i < n; ++i)
            {
                res[i] = pow(2, rem) * (ar[i] - (n / 2) * (ar[i] / (n / 2 + 1))) - (pow(2, rem) - 1) * (1 - ar[i] / (n / 2 + 1));
            }
        }
        else if (rem == c / 2)
        {
            res[0] = ar[0];

            for (int i = 1; i < n - 1; ++i)
            {
                res[i] = ar[n - 1 - i];
            }

            res[n - 1] = ar[n - 1];
        }
        else
        {
            rem = rem - (c / 2);

            long int temp[n];

            for (int i = 0; i < n; ++i)
            {
                temp[i] = pow(2, rem) * (ar[i] - (n / 2) * (ar[i] / (n / 2 + 1))) - (pow(2, rem) - 1) * (1 - ar[i] / (n / 2 + 1));
            }

            res[0] = temp[0];

            for (int i = 1; i < n - 1; ++i)
            {
                res[i] = temp[n - 1 - i];
            }

            res[n - 1] = temp[n - 1];
        }
    }

    for (int i = 0; i < n; ++i)
    {
        cout << res[i] << " ";
    }

    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        solve();
    }
}