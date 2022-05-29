#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string str;
    cin >> str;

    int sum_1 = str[0] + str[1] + str[2] - (3*'0');
    int sum_2 = str[3] + str[4] + str[5] - (3*'0');

    if (sum_1 == sum_2)
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
    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }

    return 0;
}