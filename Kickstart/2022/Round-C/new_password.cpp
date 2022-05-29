#include <bits/stdc++.h>

using namespace std;

string solve()
{
    int n;
    cin >> n;
    
    string str;
    cin >> str;

    bool up = false;
    bool lo = false;
    bool dgt = false;
    bool sp_ch = false;

    for (int i = 0; i < n; ++i)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            up = true;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            lo = true;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            dgt = true;
        }
        else
        {
            sp_ch = true;
        }
    }

    if (!up)
    {
        str += 'A';
        n++;
    }

    if (!lo)
    {
        str += 'a';
        n++;
    }

    if (!dgt)
    {
        str += '1';
        n++;
    }

    if (!sp_ch)
    {
        str += '@';
        n++;
    }

    while (n < 7)
    {
        str += 'k';
        n++;
    }

    return str;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cout << "Case #" << i+1 << ": " << solve() << endl;
    }

    return 0;
}