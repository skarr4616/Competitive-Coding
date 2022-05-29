#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string alphabet;
    cin >> alphabet;

    string str;
    cin >> str;

    int arr[26];
    for (int i = 0; i < 26; i++)
    {
        arr[alphabet[i] - 'a'] = i+1;
    }

    int sum = 0;
    int len = str.length();
    for (int i = 1; i < len; i++)
    {
        sum += abs(arr[str[i] - 'a'] - arr[str[i-1] - 'a']);
    }

    cout << sum << endl;


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