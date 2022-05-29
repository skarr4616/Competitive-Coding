#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    transform(str.begin(), str.end(), str.begin(), ::tolower);

    int ar[26] = {0};

    for (int i = 0; i < n; i++)
    {
        ar[str[i]-'a'] += 1;
    }

    int check = 1;

    for (int i = 0; i < 26; i++)
    {
        if (ar[i] == 0)
        {
            check = 0;
            break;
        }
    }

    if (check == 0)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }

    cout << endl;

    return 0;
}