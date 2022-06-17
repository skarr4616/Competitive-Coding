#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for (int i = a; i < b; ++i)
typedef unsigned long long int ull;

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(10, 0);
    int x;
    rep(i,0,n)
    {
        cin >> x;
        arr[x%10]++;
    }

    if (arr[0] >= 2 && arr[3] >= 1)
    {
        cout << "YES" << endl;
        return;
    }

    if (arr[1] >= 3)
    {
        cout << "YES" << endl;
        return;
    }

    if (arr[0] >= 1 && arr[1] >= 1 && arr[2] >= 1)
    {
        cout << "YES" << endl;
        return;
    }

    if (arr[9] >= 1)
    {
        if (arr[4] >= 1 && arr[0] >= 1)
        {
            cout << "YES" << endl;
            return;
        }

        if (arr[3] >= 1 && arr[1] >= 1)
        {
            cout << "YES" << endl;
            return;
        }

        if (arr[2] >= 2)
        {
            cout << "YES" << endl;
            return;
        }
    }

    if (arr[8] >= 1)
    {
        if (arr[5] >= 1 && arr[0] >= 1)
        {
            cout << "YES" << endl;
            return;
        }

        if (arr[4] >= 1 && arr[1] >= 1)
        {
            cout << "YES" << endl;
            return;
        }

        if (arr[3] >= 1 && arr[2] >= 1)
        {
            cout << "YES" << endl;
            return;
        }
    }

    if (arr[7] >= 1)
    {
        if (arr[6] >= 1 && arr[0] >= 1)
        {
            cout << "YES" << endl;
            return;
        }

        if (arr[5] >= 1 && arr[1] >= 1)
        {
            cout << "YES" << endl;
            return;
        }
        
        if (arr[4] >= 1 && arr[2] >= 1)
        {
            cout << "YES" << endl;
            return;
        }

        if (arr[3] >= 2)
        {
            cout << "YES" << endl;
            return;
        }
    }

    if (arr[6] >= 1)
    {
        if (arr[6] >= 2 && arr[1] >= 1)
        {
            cout << "YES" << endl;
            return;
        }
        
        if (arr[5] >= 1 && arr[2] >= 1)
        {
            cout << "YES" << endl;
            return;
        }

        if (arr[4] >= 1 && arr[3] >= 1)
        {
            cout << "YES" << endl;
            return;
        }
    }

    if (arr[5] >= 1)
    {
        if (arr[5] >= 2 && arr[3] >= 1)
        {
            cout << "YES" << endl;
            return;
        }

        if (arr[4] >= 2)
        {
            cout << "YES" << endl;
            return;
        }
    }

    if (arr[9] >= 2 && arr[5] >= 1)
    {
        cout << "YES" << endl;
        return;
    }

    if (arr[9] >= 1 && arr[8] >= 1 && arr[6] >= 1)
    {
        cout << "YES" << endl;
        return;
    }

    if (arr[9] >= 1 && arr[7] >= 2)
    {
        cout << "YES" << endl;
        return;
    }

    if (arr[8] >= 2 && arr[7] >= 1)
    {
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
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