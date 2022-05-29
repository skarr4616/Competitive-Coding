#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;

    int len = str.length();

    char max = 'a';

    for (int i = 0; i < len; i++)
    {
        if (str[i] > max)
        {
            max = str[i];
        }
    }

    int num_max = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == max)
        {
            num_max += 1;
        }
    }

    string ans;
    ans.insert(0, num_max, max);

    cout << ans << endl;

}