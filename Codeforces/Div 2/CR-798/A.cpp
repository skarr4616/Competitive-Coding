#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    string a;
    cin >> a;
    sort(a.begin(), a.end());


    string b;
    cin >> b;
    sort(b.begin(), b.end());

    string res = "";

    int p_a = 0;
    int p_b = 0;

    int code;
    int num;

    if (a[0] < b[0])
    {
        res += a[0];
        p_a = 1;
        code = 0;
        num = 1;
    }
    else
    {
        res += b[0];
        p_b = 1;
        code = 1;
        num = 1;
    }

    while (p_a < n && p_b < m)
    {
        if (num == k)
        {
            if (code == 0)
            {
                code = 1;
                res += b[p_b];
                num = 1;
                p_b++;
            }
            else
            {
                code = 0;
                res += a[p_a];
                num = 1;
                p_a++;
            }
        }
        else
        {
            if (a[p_a] < b[p_b])
            {
                res += a[p_a];
                p_a++;

                if (code == 0)
                {
                    num++;
                }
                else
                {
                    code = 0;
                    num = 1;
                }
            }
            else
            {
                res += b[p_b];
                p_b++;

                if (code == 1)
                {
                    num++;
                }
                else
                {
                    code = 1;
                    num = 1;
                }
            }
        }
    }

    cout << res << endl;
    return;
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