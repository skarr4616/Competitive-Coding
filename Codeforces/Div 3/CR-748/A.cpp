#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    int max_votes = max(a, b);
    max_votes = max(max_votes, c);

    if (a == b && b == c)
    {
        cout << 1 << " " << 1 << " " << 1 << endl;
    }
    else if (a == b || b == c || c == a)
    {
        int a_ex = max_votes - a;
        int b_ex = max_votes - b;
        int c_ex = max_votes - c;

        int cnt = 0;
        if (a_ex == 0) cnt++;
        if (b_ex == 0) cnt++;
        if (c_ex == 0) cnt++;

        if (cnt == 2)
        {
            a_ex = (a_ex == 0) ? 1 : a_ex+1;
            b_ex = (b_ex == 0) ? 1 : b_ex+1;
            c_ex = (c_ex == 0) ? 1 : c_ex+1;
        }
        else
        {
            a_ex = (a_ex == 0) ? 0 : a_ex+1;
            b_ex = (b_ex == 0) ? 0 : b_ex+1;
            c_ex = (c_ex == 0) ? 0 : c_ex+1;
        }

        cout << a_ex << " ";
        cout << b_ex << " ";
        cout << c_ex << endl;
    }
    else
    {
        int a_ex = max_votes - a;
        a_ex = (a_ex == 0) ? 0 : a_ex+1;

        int b_ex = max_votes - b;
        b_ex = (b_ex == 0) ? 0 : b_ex+1;

        int c_ex = max_votes - c;
        c_ex = (c_ex == 0) ? 0 : c_ex+1;

        cout << a_ex << " ";
        cout << b_ex << " ";
        cout << c_ex << endl;
    }
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