#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string num;
    cin >> num;

    string odd;
    string even;

    for (int i = 0; i < num.length(); i++)
    {
        int a = stoi(num.substr(i, 1));
        
        if (a%2 == 0)
        {
            even = even + num[i];
        }
        else
        {
            odd = odd + num[i];
        }
    }

    string result;

    while (even.length() != 0 && odd.length() != 0)
    {
        int e = stoi(even.substr(0, 1));
        int o = stoi(odd.substr(0, 1));

        if (e < o)
        {
            result = result + even[0];
            even.erase(0, 1);
        }
        else
        {
            result = result + odd[0];
            odd.erase(0, 1);
        }
    }

    result += even;
    result += odd;

    cout << result << endl;

}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;
}