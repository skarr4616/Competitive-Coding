#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    string b;

    cin >> a >> b;

    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);

    int res = strcmp(a.c_str(), b.c_str());

    if (res == 0)
    {
        cout << 0;
    }
    else if (res < 0)
    {
        cout << -1;
    }
    else
    {
        cout << 1;
    }

    cout << endl;

    return 0;
}