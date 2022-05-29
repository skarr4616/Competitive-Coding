#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    int a = 0;
    int b = 0;

    if (n == 1)
    {
        cout << -1 << " " << -1;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'a')
            {
                a++;
            }
            else
            {
                b++;
            }
        }

        int i = 0;
        int j = n - 1;
        int check = 0;

        while (a != b)
        {
            if (a > b)
            {
                if (str[i] == 'a')
                {
                    i++;
                    a -= 1;
                }
                else
                {
                    if (str[j] == 'a')
                    {
                        a -= 1;
                    }
                    else
                    {
                        b -= 1;
                    }

                    j -= 1;
                }
            }
            else
            {
                if (str[i] == 'b')
                {
                    i++;
                    b -= 1;
                }
                else
                {
                    if (str[j] == 'a')
                    {
                        a -= 1;
                    }
                    else
                    {
                        b -= 1;
                    }

                    j -= 1;
                }
            }

            if ((i+1 == j || i == j) && a != b)
            {    
                check = 1;
                break;
            }
        }

        if (check == 1)
        {
            cout << -1 << " " << -1;
        }
        else
        {
            cout << i + 1 << " " << j + 1;
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