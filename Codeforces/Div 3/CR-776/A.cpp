#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;

    char c;
    cin >> c;

    int left, right;
    int found = 0;
    int poss = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == c)
        {
            found = 1;
            left = i;
            right = s.length()-1-i;

            if (right%2 == 0 && left%2 == 0)
            {
                poss = 1;
            }
        }

        if (poss == 1)
        {
            break;
        }
    }

    if (found == 1)
    {
        if (poss == 1)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
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

    for (int i = 0; i < t; ++i)
    {
        solve();
    }

    return 0;
}