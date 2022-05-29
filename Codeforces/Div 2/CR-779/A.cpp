#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    long long int sum = 0;

    int i, j;

    for (i = 0; i < n - 1; i++)
    {
        if (s[i] == '0')
        {
            for (j = i + 1; j < n; j++)
            {
                if (s[j] == '0')
                {
                    if (j-i == 1)
                    {
                        sum += 2;
                        i = j-1;
                    }
                    else if (j-i == 2)
                    {
                        sum += 1;
                        i = j-1;
                    }
                    else
                    {
                        i = j-1;
                    }

                    break;
                }
            }
        }
    }

    cout << sum << endl;
    return;
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