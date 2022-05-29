#include <bits/stdc++.h>

using namespace std;

int solve()
{
    string I, P;
    cin >> I;
    cin >> P;

    long int i_len = I.length();
    long int p_len = P.length();

    bool pos = false;

    long int i;
    long int j = 0;
    int ans = 0;

    for (i = 0; i < i_len; i++)
    {
        for (j = j+1; j < p_len; j++)
        {
            if (i == i_len-1 && I[i] == P[j])
            {
                pos = true;
                break;
            }

            if (I[i] == P[j])
            {
                break;
            }
        }

        if (pos)
        {
            break;
        }
    }

    if (pos)
    {
        return p_len - i_len;
    }

    return -1;
}

int main()
{
    int t;
    cin >> t;

    int ans;

    for (int i = 0; i < t; i++)
    {
        ans = solve();

        if (ans == -1)
        {
            cout << "Case #" << i+1 << ": " << "IMPOSSIBLE" << endl;
        }
        else
        {
            cout << "Case #" << i+1 << ": " << ans << endl;
        }
        
    }
}