#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int r, c;
    cin >> r >> c;

    string grid[r];
    for (int i = 0; i < r; i++)
    {
        cin >> grid[i];
    }

    if (r == 1 || c == 1)
    {
        cout << "YES";
    }  
    else if (grid[0][0] == 'R')
    {
        cout << "YES";
    }
    else
    {
        bool poss = true;
        bool found = false;

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (grid[i][j] == 'R')
                {
                    for (int l = i+1; l < r; l++)
                    {
                        for (int m = 0; m < j; m++) 
                        {
                            if (grid[l][m] == 'R')
                            {
                                poss = false;
                                break;
                            }
                        }

                        if (!poss)
                        {
                            break;
                        }
                    }

                    found = true;
                    break;
                }
            }

            if (found)
            {
                break;
            }
        }

        if (poss)
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

    while (t--)
    {
        solve();
    }

    return 0;
}