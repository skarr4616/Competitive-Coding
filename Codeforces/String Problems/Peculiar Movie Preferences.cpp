#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    short check = 0;

    string scene[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> scene[i];

        if (scene[i][0] == scene[i][scene[i].length() - 1])
        {
            check = 1;
        }
    }

    if (check == 1)
    {
        cout << "YES";
    }
    else
    {
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < i; ++j)
            {
                if (scene[i].length() == 2)
                {
                    if (scene[j][0] == scene[i][scene[i].length() - 1] && scene[j][1] == scene[i][scene[i].length() - 2])
                    {
                        check = 1;
                        break;
                    }
                }
                else
                {
                    if (scene[j].length() == 2)
                    {
                        if (scene[j][0] == scene[i][scene[i].length() - 1] && scene[j][1] == scene[i][scene[i].length() - 2])
                        {
                            check = 1;
                            break;
                        }
                    }
                    else
                    {
                        if (scene[j][0] == scene[i][scene[i].length() - 1] && scene[j][1] == scene[i][scene[i].length() - 2] && scene[j][2] == scene[i][scene[i].length() - 3])
                        {
                            check = 1;
                            break;
                        }
                    }
                }
            }

            if (check == 1)
            {
                break;
            }
        }

        if (check == 1)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }

    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        solve();
    }

    return 0;
}