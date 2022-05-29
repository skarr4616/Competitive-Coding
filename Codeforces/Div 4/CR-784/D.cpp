#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    int B = 0;
    int R = 0;
    int num_W = 0;

    bool poss = true;
    int len = 0;
    int num = 0;

    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'W')
        {
            num_W++;

            if ((len == 1 || B == 0 || R == 0) && len != 0)
            {
                poss = false;
                break;
            }
            else
            {
                len = 0;
                B = 0;
                R = 0;
                num = 0;
            }

        }
        else if (str[i] == 'B')
        {
            B = 1;
            len++;
            num++;
        }
        else
        {
            R = 1;
            len++;
            num++;
        }
    }

    if (str[n-1] != 'W' && num != 0 && (B == 0 || R == 0))
    {
        poss = false;
    }

    if (num_W == n)
    {
        poss = true;
    }

    if (poss)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
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