#include <bits/stdc++.h>

using namespace std;

long long int solve()
{
    long long int A;
    cin >> A;

    long long int num_fact = 0;

    for (int i = 1; i <= sqrt(A); i++)
    {
        if (A % i == 0)
        {

            long long int a = i;
            long long int rev_a = 0;
            int digit;

            do
            {
                digit = a % 10;
                rev_a = (rev_a * 10) + digit;
                a = a / 10;
            } while (a != 0);

            if (rev_a == i)
            {
                num_fact++;
            }

            if (A / i != i)
            {

                long long int b = A / i;
                long long int rev_b = 0;

                do
                {
                    digit = b % 10;
                    rev_b = (rev_b * 10) + digit;
                    b = b / 10;
                } while (b != 0);

                if (rev_b == A/i)
                {
                    num_fact++;
                }
            }
        }
    }

    return num_fact;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cout << "Case #" << i + 1 << ": " << solve() << endl;
    }

    return 0;
}