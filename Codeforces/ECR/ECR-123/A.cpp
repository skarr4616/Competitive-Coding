#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;

    int key[3] = {0, 0, 0};
    int possible = 1;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'r')
        {
            key[0] = 1;
        }
        else if (s[i] == 'g')
        {
            key[1] = 1;
        }
        else if (s[i] == 'b')
        {
            key[2] = 1;
        }
        else if (s[i] == 'R')
        {
            if (key[0] == 0)
            {
                possible = 0;
                break;
            }
        }
        else if (s[i] == 'G')
        {
            if (key[1] == 0)
            {
                possible = 0;
                break;
            }
        }
        else if (s[i] == 'B')
        {
            if (key[2] == 0)
            {
                possible = 0;
                break;
            }
        }
    }

    if (possible == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    cout << endl;
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