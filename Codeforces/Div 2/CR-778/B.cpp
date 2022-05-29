#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;

    string comp;

    for (int i = s.length()-1; i > 0; i -= 1)
    {
        comp = s.substr(0, i);

        for (int j = 1; j+i-1 < s.length(); j += 1)
        {
            if (comp.compare(s.substr(j, i)) == 0)
            {
                s.erase(0, i);
                i = s.length();
                break;
            }
        }
    }

    cout << s << endl;

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