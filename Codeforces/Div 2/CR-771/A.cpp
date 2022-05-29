#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    int per[n];
    for (int i = 0; i < n; i++)
    {
        cin >> per[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (per[i] != i+1)
        {
            for (int j = i+1; j < n; j++)
            {
                if (per[j] == i+1)
                {
                    while (i <= j)
                    {
                        int temp = per[i];
                        per[i] = per[j];
                        per[j] = temp;

                        i++;
                        --j;
                    }

                    break;
                }
            }

            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << per[i] << " ";
    }

    cout << endl;
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