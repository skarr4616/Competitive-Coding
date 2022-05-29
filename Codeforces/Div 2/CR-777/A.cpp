#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << 1;
    }
    else
    {
        string ans = "2";
        string one = "1";
        string two = "2";
        int sum = 2;

        while (sum != n)
        {
            if (ans[ans.length() - 1] == '2')
            {
                ans.append(one);
                sum += 1;
            }
            else if (ans[ans.length() - 1] == '1')
            {
                if (sum + 2 > n)
                {
                    ans.insert(0, one);
                    sum += 1;
                }
                else
                {
                    ans.append(two);
                    sum += 2;
                }
            }
        }

        cout << ans;
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

    return 0;
}