#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for (int i = a; i < b; ++i)
typedef unsigned long long int ull;

void solve()
{
    int n;
    cin >> n;

    vector<int> odd;
    vector<int> even;
    int x;
    rep(i,0,n)
    {
        cin >> x;
        if (x%2 == 0)
        {
            even.push_back(x);
        }
        else
        {
            odd.push_back(x);
        }
    }

    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());

    ull alice = 0;
    ull bob = 0;
    int num = 0;
    bool flag = true;

    while (num != n)
    {
        if (flag) // Alice plays
        {
            if (even.size() == 0)
            {
                odd.erase(odd.end() - 1);
            }
            else if (odd.size() == 0)
            {
                alice += even[even.size() - 1];
                even.erase(even.end() - 1);
            }
            else
            {
                int e = even[even.size() - 1];
                int o = odd[odd.size() - 1];

                if (alice + e >= bob + o)
                {
                    alice += e;
                    even.erase(even.end() - 1);
                }
                else
                {
                    odd.erase(odd.end() - 1);
                }
            }

            flag = false;
        }
        else // Bob plays
        {
            if (odd.size() == 0)
            {
                even.erase(even.end() - 1);
            }
            else if (even.size() == 0)
            {
                bob += odd[odd.size() - 1];
                odd.erase(odd.end() - 1);
            }
            else
            {
                int e = even[even.size() - 1];
                int o = odd[odd.size() - 1];

                if (bob + o >= alice + e)
                {
                    bob += o;
                    odd.erase(odd.end() - 1);
                }
                else
                {
                    even.erase(even.end() - 1);
                }
            }

            flag = true;
        }

        num++;
    }

    if (bob == alice)
    {
        cout << "Tie" << endl;
    }
    else if (bob > alice)
    {
        cout << "Bob" << endl;
    }
    else
    {
        cout << "Alice" << endl;
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}