#include <bits/stdc++.h>

using namespace std;

string solve()
{
    string str;
    cin >> str;

    int n = str.length();

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += str[i] - '0';
    }

    int rem = sum%9;

    if (rem == 0)
    {
        char c = '0';
        bool inserted = false;
        for (int i = 1; i < n; ++i)
        {
            if (str[i] > c)
            {
                str.insert(str.begin() + i, c);
                inserted = true;
                break;
            }
        }

        if (!inserted)
        {
            str += c;
        }

        return str;
    }

    char c = char('0' + 9 - rem);
    bool inserted = false;
    for (int i = 0; i < n; ++i)
    {
        if (str[i] > c)
        {
            str.insert(str.begin() + i, c);
            inserted = true;
            break;
        }
    }

    if (!inserted)
    {
        str += c;
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