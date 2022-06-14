#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;

void solve()
{
    int n, q;
    cin >> n >> q;

    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    vector<int> speed(n);
    speed[0] = arr[0];

    for (int i = 1; i < n; ++i)
    {
        if (arr[i] > speed[i-1])
        {
            speed[i] = speed[i-1];
        }
        else
        {
            speed[i] = arr[i];
        }
    }

    reverse(speed.begin(), speed.end());

    int num_train = 1;
    for (int i = 1; i < n; ++i)
    {
        if (speed[i] != speed[i-1])
        {
            ++num_train;
        }
    }

    while (q--)
    {
        int st, sp;
        cin >> st >> sp;

        arr[st-1] -= sp;

        if (speed[n-st] > arr[st-1])
        {
            
        }
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

// 6 3 4 7 8
// 3 3 3 3 6 