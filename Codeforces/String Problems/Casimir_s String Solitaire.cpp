#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string str;
    cin >> str;

    int A = 0, B = 0, C = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'A')
        {
            A++;
        }
        else if (str[i] == 'B')
        {
            B++;
        }
        else
        {
            C++;
        }
    }

    if (A+C == B)
    {
        cout << "YES";
    } 
    else
    {
        cout << "NO";
    }

    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        solve();
    }

    return 0;
}