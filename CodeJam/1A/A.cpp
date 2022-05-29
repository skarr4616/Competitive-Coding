#include <bits/stdc++.h>

using namespace std;

string solve()
{
    string s;
    cin >> s;

    string s_min = s;

    for (int i = 0; i < s.length(); i++)
    {
        char temp = s[i];
        s.insert(i+1, 1, temp);

        if (s.compare(s_min) < 0)
        {
            s_min = s;
            i++;
        }
        else
        {
            s.erase(i+1, 1);
        }
    }

    return s_min;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cout << "Case #" << i+1 << ": " << solve() << "\n";
    }
}