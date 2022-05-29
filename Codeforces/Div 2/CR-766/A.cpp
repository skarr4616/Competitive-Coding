#include <iostream>
#include <string>

using namespace std;

void solve()
{
    int n, m, r, c;
    cin >> n >> m >> r >> c;

    int mat[n][m];
    string in;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> in;

        for (int j = 0; j < m; j++)
        {
            if (in[j] == 'W')
            {
                mat[i][j] = 0;
            }
            else if (in[j] == 'B')
            {
                mat[i][j] = 1;
            }

            sum += mat[i][j];
        }
    }

    if (sum == 0)
    {
        cout << -1;
    }
    else
    {
        if (mat[r - 1][c - 1] == 1)
        {
            cout << 0;
        }
        else
        {
            int check = 0;

            for (int i = 0; i < m; ++i)
            {
                if (mat[r - 1][i] == 1)
                {
                    check = 1;
                    break;
                }
            }

            if (check == 1)
            {
                cout << 1;
            }
            else
            {
                for (int i = 0; i < n; ++i)
                {
                    if (mat[i][c - 1] == 1)
                    {
                        check = 1;
                        break;
                    }
                }

                if (check == 1)
                {
                    cout << 1;
                }
                else
                {
                    cout << 2;
                }
            }
        }
    }

    cout << endl;
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