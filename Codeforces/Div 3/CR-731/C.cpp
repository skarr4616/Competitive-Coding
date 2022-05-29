#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int k, n, m;
    cin >> k >> n >> m;

    int A[n];
    int B[m];

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> B[i];
    }

    vector<int> ans;

    int context = 0;
    bool context_switch = false;

    int p_a = 0;
    int p_b = 0;

    int num = 0;

    while (num < n+m)
    {
        if (context == 0)
        {
            if (context_switch && p_a == n)
            {
                break;
            }

            if (p_a == n)
            {
                context = 1;
                context_switch = true;
            }
            else if (A[p_a] == 0)
            {
                k++;
                ans.push_back(A[p_a]);
                p_a++;
                num++;
                context_switch = false;
            }
            else if (A[p_a] <= k)
            {
                ans.push_back(A[p_a]);
                p_a++;
                num++;
                context_switch = false;
            }
            else if (context_switch)
            {
                break;
            }
            else
            {
                context = 1;
                context_switch = true;
            }
        }
        else
        {
            if (context_switch && p_b == m)
            {
                break;
            }

            if (p_b == m)
            {
                context = 0;
                context_switch = true;
            }
            else if (B[p_b] == 0)
            {
                k++;
                ans.push_back(B[p_b]);
                p_b++;
                num++;
                context_switch = false;
            }
            else if (B[p_b] <= k)
            {
                ans.push_back(B[p_b]);
                p_b++;
                num++;
                context_switch = false;
            }
            else if (context_switch)
            {
                break;
            }
            else
            {
                context = 0;
                context_switch = true;
            }
        }
    }

    if (num < n+m)
    {
        cout << -1;
    }
    else
    {
        for (int i = 0; i < n+m; i++)
        {
            cout << ans[i] << " ";
        }
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