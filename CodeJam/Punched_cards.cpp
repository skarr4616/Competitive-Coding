#include <bits/stdc++.h>

using namespace std;

void solve(int t)
{
    int r, c;
    cin >> r >> c;

    // Case number
    cout << "Case #" << t << ":" << endl;

    // First line;
    cout << "..";

    for (int i = 0; i < c - 1; ++i)
    {
        cout << "+-";
    }

    cout << "+" << endl;

    // Second line;
    cout << "..";

    for (int i = 0; i < c - 1; ++i)
    {
        cout << "|.";
    }

    cout << "|" << endl;

    // Rest of the lines using for loops
    for (int i = 0; i < r - 1; ++i)
    {
        for (int i = 0; i < c; ++i)
        {
            cout << "+-";
        }

        cout << "+" << endl;

        for (int i = 0; i < c; ++i)
        {
            cout << "|.";
        }

        cout << "|" << endl;
    }

    // Last line
    for (int i = 0; i < c; ++i)
    {
        cout << "+-";
    }

    cout << "+" << endl;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        solve(i + 1);
    }

    return 0;
}