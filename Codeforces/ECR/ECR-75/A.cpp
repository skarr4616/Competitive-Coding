#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string str;
    cin >> str;

    for (int i = 0; i < str.length() - 1; i++)
    {
        if (str[i] == str[i + 1])
        {
            str.erase(i, 2);
            i -= 1;
        }

        if (str.length() == 0)
        {
            break;
        }
    }

    short ar[26] = {0};
    for (int i = 0; i < str.length(); i++)
    {
        ar[str[i] - 'a'] = 1;
    }

    for (int i = 0; i < 26; ++i)
    {
        if (ar[i] == 1)
        {
            char p = 'a' + i;
            cout << p;
        }
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