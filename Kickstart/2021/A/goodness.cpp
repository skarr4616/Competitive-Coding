#include <bits/stdc++.h>

using namespace std;

void solve(int t)
{
    int n, k;
    cin >> n >> k;

    string str;
    cin >> str;

    int good = 0;

    for (int i = 0; i < n/2; i++)
    {
        if (str[i] != str[n-1-i])
        {
            good++;
        }
    }

    cout << "Case #" << t+1 << ": " << abs(k-good) << endl; 
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        solve(i);
    }

    return 0;
}