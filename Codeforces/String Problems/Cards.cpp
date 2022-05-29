#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    int num_0 = 0;
    int num_1 = 0;

    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'z')
        {
            num_0++;
        }
        else if (str[i] == 'n')
        {
            num_1++;
        }
    }

    for (int i = 0; i < num_1; i++)
    {
        cout << 1 << " ";
    }

    for (int i = 0; i < num_0; i++)
    {
        cout << 0 << " ";
    }

    cout << endl;
}