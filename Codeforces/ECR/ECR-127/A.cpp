#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string str;
    cin >> str;

    int len = str.length();

    int num = 1;
    bool poss = true;

    for (int i = 1; i < len; i++)
    {
        if (str[i] != str[i-1])
        {
            if (num == 1)
            {
                poss = false;
                break;
            }
            else
            {
                num = 1;
            }
        }
        else
        {
            num++;
        }
    }

    if (num == 1)
    {
        poss = false;
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