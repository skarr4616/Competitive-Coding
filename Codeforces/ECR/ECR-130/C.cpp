#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    string t;
    cin >> t;

    bool poss = true;
    for (int i = 0; i < n-1; ++i)
    {
        if (s[i] != t[i])
        {
            if (s[i] == 'c')
            {
                poss = false;
                break;
            }
            else if (s[i] == 'a')
            {
                if (t[i] == 'c')
                {
                    poss = false;
                    break;
                }
                else
                {
                    int p = i+1;
                    while (p < n && s[p] == 'a')
                    {
                        p++;
                    } 

                    if (s[p] != 'b')
                    {
                        poss = false;
                        break;
                    }
                    else
                    {
                        s[i] = 'b';
                        s[p] = 'a';
                    }
                }
            }
            else if (s[i] == 'b')
            {
                if (t[i] == 'a')
                {
                    poss = false;
                    break;
                }
                else
                {
                    int p = i+1;
                    while (p < n && s[p] == 'b')
                    {
                        p++;
                    } 

                    if (s[p] != 'c')
                    {
                        poss = false;
                        break;
                    }
                    else
                    {
                        s[i] = 'c';
                        s[p] = 'b';
                    }
                }
            }
        }
    }

    if (s.compare(t) != 0)
    {
        poss = false;
    }

    if (poss)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}