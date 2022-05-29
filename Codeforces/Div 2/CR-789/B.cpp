#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    vector<int> is_len;
    int len = 1;
    
    for (int i = 1; i < n; i++)
    {
        if (str[i] != str[i-1])
        {
            is_len.push_back(len);
            len = 1;
        }
        else
        {
            len++;
        }
    }

    is_len.push_back(len);

    int changes = 0;
    int l = is_len.size();
    bool found = false;
    int start_i = 0;

    for (int i = 0; i < l; i++)
    {
        if (is_len[i]%2 == 1)
        {
            if (!found)
            {
                found = true;
                start_i = i;
            }
            else
            {
                changes += (i-start_i);
                found = false;
            }
        }
    }

    cout << changes << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}